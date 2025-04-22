// 10 20 30 40 50 -1
// 10 20 30 40 60 -1
//2ti link list same kina?
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
void insert_link(Node*&head,Node*&tail,int val)
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
bool same_cheking(Node*head,Node*head2)
{
    
    while(head!=NULL)
    {
      if(head->val!=head2->val)
      {
       return false;
      }
     head=head->next;
     head2=head2->next;
    }
    return true;
}
int main()
{
    Node*head=NULL;
    Node*tail=NULL;
    int val;
    while (1)
    {
        cin>>val;
        if(val==-1)
        {
           break; 
        }
        insert_link(head,tail,val);
    }
    Node*head2=NULL;
    Node*tail2=NULL;
    int val2;
    while (1)
    {
        cin>>val2;
        if(val2==-1)
        {
           break; 
        }
        insert_link(head2,tail2,val2);
    }
   int sz= link_list_size(head);
   int sz2= link_list_size(head2);
   if(sz!=sz2)
   {
    cout<<"NO"<<endl;
   }
   else
   {
     if(same_cheking(head,head2))
     {
        cout<<"YES"<<endl;
     }
     else
     {
        cout<<"NO"<<endl;
     }
   }
    
    return 0;
}