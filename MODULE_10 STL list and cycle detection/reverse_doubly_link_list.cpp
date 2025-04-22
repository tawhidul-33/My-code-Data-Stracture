//10 20 30 40 -1
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node*prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void inser_at_tail(Node*&head,Node*&tail,int val)
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
void print_forward(Node*head)
{
    Node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void doubly_reverse(Node*head,Node*tail)
{
   for(Node*i=head,*j=tail;i!=j&&i->prev!=j;i=i->next,j=j->prev)
   {
    swap(i->val,j->val);
   }
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
        inser_at_tail(head,tail,val);
    }
    doubly_reverse(head,tail);
    print_forward(head);
    
    return 0;
}