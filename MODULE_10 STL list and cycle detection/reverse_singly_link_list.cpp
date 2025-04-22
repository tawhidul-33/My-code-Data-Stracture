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
void insert_link(Node*&hade,Node*&tail,int val)
{
    Node* newNode=new Node(val);
  if(hade==NULL)
  {
    hade=newNode;
    tail=newNode;
    return;
  }
  tail->next=newNode;
  tail=newNode;
}
void link_list_print(Node*tmp)
{
  while(tmp!=NULL)
  {
    cout<<tmp->val<<" ";
    tmp=tmp->next;
  }
}
void reverse(Node*&head,Node*&tail,Node*tmp)
{
  
  if(tmp->next==NULL)
  {
    head=tmp;
    return;
  }
  reverse(head,tail,tmp->next);
  tmp->next->next=tmp;
  tmp->next=NULL;
  tail=tmp;
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
        
        insert_link(head,tail,val);
    }
    reverse(head,tail,head);
    link_list_print(head);
    
    
    return 0;
}