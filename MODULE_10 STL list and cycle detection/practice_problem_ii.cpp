//10 20 30 40 50 60 -1
//doubly link list reverse
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
void link_list_reverse(Node*head,Node*tail)
{
    for(Node*i=head,*j=tail;i!=j&&i->prev!=j;i=i->next,j=j->prev)
    {
        swap(i->val,j->val);
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
    link_list_reverse(head,tail);
    link_list_print(head);
    return 0;
}