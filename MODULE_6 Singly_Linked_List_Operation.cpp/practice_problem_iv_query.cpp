// //input
// // 10 20 30 -1
// // 1 40
// // 5 50
// // 4 50
// // 0 100
// // 7 40
// // 1 110
// // 7 40
// #include<bits/stdc++.h>
// using namespace std;
// class Node
// {
//     public:
//     int val;
//     Node* next;
//     Node(int val)
//     {
//         this->val=val;
//         this->next=NULL;
//     }
// };
// void insert_at_tail(Node *&head,Node*&tail,int val)
// {
//     Node* newNode= new Node(val);
//     if(head==NULL)
//     {
//         head=newNode;
//         tail=newNode;
//         return;
//     }
//     tail->next=newNode;
//     tail=newNode;//tail->next;
// }
// int link_list_size(Node*&head)
// {
//     Node*tmp;
//     tmp=head;
//     int size=0;
//     while(tmp!=NULL)
//     {
//         size++;
//         tmp=tmp->next;
//     }
//     return size;
    
// }
// void link_list_quiry(Node*&head,Node*&tail,int indx,int nv)
// {   
//     int size=link_list_size(head);
//     Node* newNode=new Node(nv);
//     if(indx==0)
//     {
//         newNode->next=head;
//         head=newNode;
//     }
//     else if(indx==size)
//     {
//         tail->next=newNode;
//         tail=newNode;
//     }
//     else if(indx<0 || indx>size)
//     {
//         cout<<"Invalid"<<endl;
//         return;
//     }
//     else
//     {
//         Node*tmp=head;
//         for(int i=0;i<indx-1;i++)
//         {
//             tmp=tmp->next;
//         }
//         newNode->next=tmp->next;
//         tmp->next=newNode;

//     }

//     Node*tmp=head;
//     while(tmp!=NULL)
//     {
//         cout<<tmp->val<<" ";
//         tmp=tmp->next;
//     }
//     cout<<endl;
// }
// int main()
// {
//   Node* head=NULL;
//   Node* tail=NULL;
//   int val;
//   while(1)
//   {
//     cin>>val;
//     if(val==-1)
//     {
//       break;
//     }
//     insert_at_tail(head,tail,val);
//   }
   
//    int indx,nv;
//    while(cin>>indx>>nv)
//    {
//     link_list_quiry(head,tail,indx,nv);
//    }
   
    
//     return 0;
// }


//or
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insert_at_tail(Node *&head,Node*&tail,int val)
{
    Node* newNode= new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;//tail->next;
}
void insert_at_head(Node *&head,int val)
{
    Node* newNode= new Node(val);
    newNode->next = head;
    head=newNode;
}
void insert_at_any_pos(Node *&head,int indx,int val)
{
    Node* newNode= new Node(val);
    Node*tmp=head;
    for(int i=0;i<indx-1;i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
}
void link_list_print(Node*&head)
{
    Node*tmp;
    tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
int link_list_size(Node*&head)
{
    Node*tmp;
    tmp=head;
    int size=0;
    while(tmp!=NULL)
    {
        size++;
        tmp=tmp->next;
    }
    return size;
    
}

int main()
{
  Node* head=NULL;
  Node* tail=NULL;
  int val;
  while(1)
  {
    cin>>val;
    if(val==-1)
    {
      break;
    }
    insert_at_tail(head,tail,val);
  }
   
   int indx,nv;
   while(cin>>indx>>nv)
   {
    int size=link_list_size(head);
    if(indx>size)
    {
        cout<<"Invalid"<<endl;
    }
    else if(indx==0)
    {
        insert_at_head(head,nv);
        link_list_print(head);
    }
    else if(indx==size)
    {
        insert_at_tail(head,tail,nv);
        link_list_print(head);
    }
    else
    {
        insert_at_any_pos(head,indx,nv);
        link_list_print(head);
    }
   }
   
    
    return 0;
}