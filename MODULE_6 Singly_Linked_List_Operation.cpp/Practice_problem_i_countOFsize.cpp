//input 2 1 5 3 4 8 9 -1
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
void insert_at_tail(Node *&head,Node*&tail,int val)
{
    Node* newNode= new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;//tail->next;
}
int link_list_size(Node*&head)
{
    Node*tmp;
    tmp=head;
    int size=0;
    while(tmp!=NULL)
    {
        size++;
        tmp=tmp->next;
    }
    return size;
    
}
int main()
{
  Node* head=NULL;
  Node* tail=NULL;
  int val;
  while(1)
  {
   cin>>val;
   if(val==-1)
   {
    break;
   }
   insert_at_tail(head,tail,val);
  }
   int size=link_list_size(head);
   cout<<size;
   
    
    return 0;
}