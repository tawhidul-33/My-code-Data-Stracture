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
void inser_at_any_pos(Node*head,int indx,int val)
{
    Node*newNode=new Node(val);
    Node*tmp=head;
    for(int i=0;i<indx-1;i++)
    {
       tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next->prev=newNode;
    tmp->next=newNode;
    newNode->prev=tmp;
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
void print_backward(Node*tail)
{
    Node*tmp=tail;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}
int main()
{
    Node*head=new Node(10);
    Node*a=new Node(20);
    Node*tail=new Node(30);

    head->next=a;
    a->prev=head;
    a->next=tail;
    tail->prev=a;

    print_forward(head);
    inser_at_any_pos(head,2,100);
    print_forward(head);
    print_backward(tail);
    return 0;
}