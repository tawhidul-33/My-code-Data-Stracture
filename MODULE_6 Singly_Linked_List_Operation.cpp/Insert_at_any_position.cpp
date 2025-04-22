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
void insert_at_any_pos(Node *&head,int indx,int val)
{
    Node* newNode= new Node(val);
    Node*tmp=head;
    for(int i=0;i<indx-1;i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
}
void link_list_print(Node*head)
{
    Node*tmp;
    tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
int main()
{
    Node*head=new Node(10);
    Node*a=new Node(20);
    Node*b=new Node(30);
    

    head->next=a;
    a->next=b;
    insert_at_any_pos(head,2,100);
    insert_at_any_pos(head,1,1000);
    link_list_print(head);
    
    
    return 0;
}