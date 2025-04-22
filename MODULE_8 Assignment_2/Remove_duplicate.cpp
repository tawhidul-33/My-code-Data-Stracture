//10 10 10 20 20 20 10 20 -1
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
void link_list_tail(Node*&head,Node*&tail,int val)
{
    Node*newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
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
  cout<<endl;
}
void link_list_dublicate(Node*head)
{
  while(head!=NULL)
  {
    Node*tmp=head;
    while(tmp->next!=NULL)
    {
        if(head->val==tmp->next->val)
        {
          Node*deleteNode=tmp->next;
           tmp->next=tmp->next->next;
           delete deleteNode;  
        }
        else{
            tmp=tmp->next;
        }
        
    }
    head=head->next;
  }   
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
        link_list_tail(head,tail,val);
    }
    link_list_dublicate(head);
    link_list_print(head);
    
    
    return 0;
}