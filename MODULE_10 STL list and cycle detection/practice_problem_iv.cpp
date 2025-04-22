// 6
// 0 10
// 1 20
// 4 30
// 0 30
// 1 40
// 5 50
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insert_link_list_tail(Node*&head,Node*&tail,int val)
{
    Node*newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}
void insert_head(Node*&head,Node*&tail,int val)
{
  Node*newNode=new Node(val);
  if(head==NULL)
  {
    head=newNode;
    tail=newNode;
    return;
  }
  newNode->next=head;
  head->prev=newNode;
  head=newNode;
}
void insert_any_poss(Node*head,int indx,int val)
{
    Node*newNode=new Node(val);
    Node*tmp=head;
    for(int i=0;i<indx-1;i++)
    {
      tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next->prev=newNode;
    tmp->next=newNode;
    newNode->prev=tmp;

}
int link_list_size(Node*head)
{
    int sz=0;
    Node*tmp=head;
    while(tmp!=NULL)
    {
     sz++;
     tmp=tmp->next;
    }
    return sz;
}
void forword_print(Node*head)
{
  Node*tmp=head;
 while(tmp!=NULL)
 {
    cout<<tmp->val<<" ";
    tmp=tmp->next;
 }
 cout<<endl;
}
void backword_print(Node*tail)
{
  Node*tmp=tail;
 while(tmp!=NULL)
 {
    cout<<tmp->val<<" ";
    tmp=tmp->prev;
 }
 cout<<endl;
}
int main()
{
  int q;
  cin>>q;

    Node*head=NULL;
    Node*tail=NULL;
  while(q--)
  {  
  
    int val,indx;
    cin>>indx>>val;
    int sz=link_list_size(head);
    if(indx==0)
    {
      insert_head(head,tail,val);
    }
    else if(indx==sz)
    {
      insert_link_list_tail(head,tail,val);
    }
    else if(indx>sz||indx<0)
    {
      cout<<"Invelid"<<endl;
      continue;
    }
    else
    {
      insert_any_poss(head,indx,val);
    }
    forword_print(head);
    backword_print(tail);
  }  
    
  return 0;
  
}