// 5
// 1 10
// 0 10
// 1 20
// 3 30
// 2 30
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
int siz=0;
void insert_at_head(Node*&head,Node*&tail,int val)
{
    Node*newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
    }
    else{
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
    }
    siz++;
}
void insert_at_tail(Node*&head,Node*&tail,int val)
{
    Node*newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
    }
    else{
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
    }
    siz++;
}
void print(Node*head,Node*tail)
{
    Node*tmp=head;
    Node*tmp2=tail;
    cout<<"L -> ";
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
    cout<<"R -> ";
    while(tmp2!=NULL)
    {
        cout<<tmp2->val<<" ";
        tmp2=tmp2->prev;
    }
    cout<<endl;
}
void insert_at_any_pos(Node*&head,Node*&tail,int indx,int val)
{
    Node*newNode=new Node(val);
    if(indx>siz)
    {
        cout<<"Invalid"<<endl;
        return;
    }
    else if(indx==0)
    {
        insert_at_head(head,tail,val);
        print(head,tail);
    }
    else if(siz==indx)
    {
        insert_at_tail(head,tail, val);
        print(head,tail);
    }
    else
    {
     Node*tmp=head;
     for(int i=0;i<indx-1;i++)
     {
        tmp=tmp->next;
     }
     newNode->next=tmp->next;
     tmp->next->prev=newNode;
     newNode->prev=tmp;
     tmp->next=newNode;
     print(head,tail);
     siz++;
    }
    
}

int main()
{
Node*head=NULL;
Node*tail=NULL;
int q;
cin>>q;  
while(q--)
{
    
    int indx,val;
    cin>>indx>>val;
   insert_at_any_pos(head,tail,indx,val);
}

    return 0;
}