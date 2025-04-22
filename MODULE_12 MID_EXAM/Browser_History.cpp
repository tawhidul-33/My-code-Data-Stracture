// facebook google phitron youtube twitter end
// 12
// visit phitron
// prev
// prev
// prev
// prev
// next
// visit twitter
// next
// next
// prev
// visit django
// prev
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    string address;
    Node* next;
    Node* prv;
    Node(string address)
    {
        this->address=address;
        this->next=NULL;
        this->prv=NULL;
    }
};
void insert(Node*&head,Node*&tail,string address)
{
    Node*newNode=new Node(address);
    if(head==NULL )
    {
      head=newNode;
      tail=newNode;
      return;
    }
    tail->next=newNode;
    newNode->prv=tail;
    tail=newNode;
}
bool find_Node(Node*head,string adrs,Node*&current)
{
    Node*tmp=head;
    while(tmp!=NULL)
    {
        if(tmp->address==adrs)
        {
            current=tmp;
           return true;
        }
        tmp=tmp->next;
    }
    return false;
}

int main()
{
    Node*head=NULL;
    Node*tail=NULL;
    string address;
    while(cin>>address && address!="end")
    {
        insert(head,tail,address);
    }

    //query
    int n;
    cin>>n;
    string order,adrs;
    Node*current=head;
    while(n--)
    {
     cin>>order;
     if(order=="visit")
     {
        cin>>adrs;
        if(find_Node(head,adrs,current))
        {
            cout<<current->address<<endl;
        }
        else
        {
            cout<<"Not Available"<<endl;
        }
     }
     else if(order=="next")
     {
       if(current->next!=NULL)
       {
        current=current->next;
        cout<<current->address<<endl;
       }
       else
       {
        cout<<"Not Available"<<endl;
       }
     }
     else if(order=="prev")
     {
        if(current->prv!=NULL)
       {
        current=current->prv;
        cout<<current->address<<endl;
       }
       else
       {
        cout<<"Not Available"<<endl;
       }
     }
    }
    return 0;
}