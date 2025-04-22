//2 1 5 3 4 9 -1
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
void link_list_reverse(Node*head)
{
    if(head==NULL)
    {
        return;
    }
    link_list_reverse(head->next);
    cout<<head->val<<" ";
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
        link_list_tail(head,tail,val);
    }
    link_list_reverse(head);
    
    return 0;
}