//10 50 30 40 20 -1
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
void link_list_tail(Node*&hade,Node*&tail,int val)
{
    Node*newNode=new Node(val);
  if(hade==NULL)
  {
    hade=newNode;
    tail=newNode;
    return;
  }
  tail->next=newNode;
  tail=newNode;
}
void link_list_sort(Node*hade)
{
    for(Node*i=hade;i->next!=NULL;i=i->next)
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
void link_list_print(Node*hade)
{
    while(hade!=NULL)
    {
       cout<<hade->val<<" "; 
       hade=hade->next;
    }
    
}
int main()
{
    Node*hade=NULL;
    Node*tail=NULL;
    int val;
    while(1)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        link_list_tail(hade,tail,val);
    }
    link_list_sort(hade);
    link_list_print(hade);
    return 0;
}