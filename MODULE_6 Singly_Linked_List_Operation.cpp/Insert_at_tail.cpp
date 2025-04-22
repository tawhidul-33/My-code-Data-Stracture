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
void insert_at_tail(Node *&head,int val)
{
    Node* newNode= new Node(val);
    Node*tmp;
    tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newNode;
}
void link_list_print(Node*&head)
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
    insert_at_tail(head,40);
    insert_at_tail(head,50);
    link_list_print(head);
    
    
    return 0;
}


/*
//or
//jodi head == NULL thake 
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
void insert_at_tail(Node *&head,int val)
{
    Node* newNode= new Node(val);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node*tmp;
    tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newNode;
}
void link_list_print(Node*&head)
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
    Node*head=NULL;
    // Node*a=new Node(20);
    // Node*b=new Node(30);
    
    // head->next=a;
    // a->next=b;
    
    insert_at_tail(head,40);
    insert_at_tail(head,50);
    link_list_print(head);
    
    
    return 0;
}
*/