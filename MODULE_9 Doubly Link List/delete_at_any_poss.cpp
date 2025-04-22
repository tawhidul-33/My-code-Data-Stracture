
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
void delete_at_any_poss(Node*&head,int indx)
{
    Node*tmp=head;
 for(int i=1;i<indx;i++)
 {
   tmp=tmp->next;
 }
 Node*deleteNode=tmp->next; 
 tmp->next=tmp->next->next;
 tmp->next->prev=tmp;
 delete deleteNode;
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
    delete_at_any_poss(head,1);
    print_forward(head);
    return 0;
}