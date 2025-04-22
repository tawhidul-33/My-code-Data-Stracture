// 4
// 1 2 3 4 5 -1
// 3
// 1 2 3 -1
// 5
// 1 -1
// 1
// 10 20 -1
// 20
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
int link_list_search(Node*tmp,int x)
{
    int indx=0;
   while(tmp!=NULL)
   {
    if(tmp->val==x)
    {
        return indx;
    }
    indx++;
    tmp=tmp->next;
    
   }
   return -1;
   
}
int main()
{
int t;
cin>>t;
while(t--)
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
    int x;
    cin>>x;
    int indx= link_list_search(head,x);
    cout<<indx<<endl;
}
    
    return 0;
}