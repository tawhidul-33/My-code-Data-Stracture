//10 20 30 30 20 10 -1
//10 20 30 20 10 -1
//palindrom kina?
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
bool link_list_palindrom(Node*head,Node*tail)
{
    for(Node*i=head,*j=tail;i!=j&&i->prev!=j;i=i->next,j=j->prev)
    {
        if(i->val!=j->val)
        {
            return false;
        }
    }
    return true;
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
    if(link_list_palindrom(head,tail))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    return 0;
}