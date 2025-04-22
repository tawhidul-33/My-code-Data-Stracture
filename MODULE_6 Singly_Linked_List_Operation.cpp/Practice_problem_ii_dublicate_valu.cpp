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
void link_list_dublicate(Node*&head)
{
    vector<int>f(101,0);
    int flag=0;
    Node*tmp;
    tmp=head;
    while(tmp!=NULL)
    {
        f[tmp->val]++;
        if(f[tmp->val]>1)
        {
            flag=1;
        }

        tmp=tmp->next;
    }
    flag==1?cout<<"Yes dublicate"<<endl:cout<<"No dublicate"<<endl;
    
    
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
    link_list_dublicate(head);
   
   
    
    return 0;
}