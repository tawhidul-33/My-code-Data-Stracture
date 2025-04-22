// 10 20 30 40 -1
// 10 20 30 40 -1
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
int link_list_size(Node*tmp)
{
    int sz=0;
    while(tmp!=NULL)
    {
        sz++;
       tmp=tmp->next;
    }
    return sz;
}
void link_list_sameTosame(Node*tmp1,Node*tmp2)
{
    while(tmp1!=NULL)
    {
        if(tmp1->val!=tmp2->val)
        {
            cout<<"NO"<<endl;
            return;
        }
        tmp1=tmp1->next;
        tmp2=tmp2->next;
    }
    cout<<"YES"<<endl;
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
    Node*head2=NULL;
    Node*tail2=NULL;
    int val2;
    while(1)
    {
        cin>>val2;
        if(val2==-1)
        {
            break;
        }
        link_list_tail(head2,tail2,val2);
    }
    int sz1=link_list_size(head);
    int sz2=link_list_size(head2);
    if(sz1==sz2)
    {
        link_list_sameTosame(head,head2);
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}