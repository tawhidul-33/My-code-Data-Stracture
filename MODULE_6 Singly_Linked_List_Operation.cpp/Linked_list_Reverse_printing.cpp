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
void insert_link(Node*&hade,Node*&tail,int val)
{
    Node* newNode=new Node(val);
  if(hade==NULL)
  {
    hade=newNode;
    tail=newNode;
    return;
  }
  tail->next=newNode;
  tail=newNode;
}
void print_reverse(Node*tmp)
{
  if(tmp==NULL)
  {
    return;
  }
  print_reverse(tmp->next);
  cout<<tmp->val<<endl;
}
int main()
{
    Node*hade=NULL;
    Node*tail=NULL;
    int val;
    while(1)
    {   
        cin>>val;
        if(val==-1)
        {
            break;
        }
        
        insert_link(hade,tail,val);
    }
    print_reverse(hade);
    
    return 0;
}