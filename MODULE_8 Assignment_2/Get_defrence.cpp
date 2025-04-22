//2 4 1 5 3 6 -1
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
int link_list_max(Node*tmp)
{
   int maxVal=tmp->val;
   while(tmp!=NULL)
   {
    if(tmp->val>maxVal)
    {
        maxVal=tmp->val;
    }
    tmp=tmp->next;
   }
   return maxVal;
   
}
int link_list_min(Node*tmp)
{
   int minVal=tmp->val;
   while(tmp!=NULL)
   {
    if(tmp->val<minVal)
    {
        minVal=tmp->val;
    }
    tmp=tmp->next;
   }
   return minVal;
   
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
   int mx= link_list_max(head);
   int mn= link_list_min(head);
   int difference=mx-mn;
   cout<<difference<<endl;
    
    return 0;
}