//20 40 30 10 20 60 -1
//doubly sorting
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
void insert_link_list(Node*&head,Node*&tail,int val)
{
    Node*newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}
void link_list_sort(Node*&head)
{
    for(Node*i=head;i->next!=NULL;i=i->next)
    {
      for(Node*j=i->next;j!=NULL;j=j->next)
      {
        if(i->val>j->val)
        {
            swap(i->val,j->val);
        }
      }
    }
}
void link_list_print(Node*tmp)
{
 while(tmp!=NULL)
 {
    cout<<tmp->val<<" ";
    tmp=tmp->next;
 }
 cout<<endl;
}
int main()
{
    Node*head=NULL;
    Node*tail=NULL;
    int val;
    while(1)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_link_list(head,tail,val);
    }
    link_list_sort(head);
    link_list_print(head);
    return 0;
}