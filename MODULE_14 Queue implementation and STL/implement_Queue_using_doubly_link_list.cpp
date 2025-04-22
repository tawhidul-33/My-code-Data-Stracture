// 5
// 10 20 30 40 50 
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class myQueue
{
    public:
    int sz=0;
    Node *head=NULL;
    Node *tail=NULL;
    void push(int val)
    {
        sz++;
      Node *newNode=new Node(val);
      if(head==NULL)
      {
        head=newNode;
        tail=newNode;
        return;
      }
      tail->next=newNode;
      newNode->prev=tail;
      tail=newNode;
    }
    void pop()
    {
        sz--;
        Node *deleteNode=head;
        head=head->next;
        delete deleteNode;
        if(head==NULL)
        {
            tail=NULL;
            return;
        }
        head->prev=NULL;
    }
    int front()
    {
        return head->val;
    }
    int back()
    {
        return tail->val;
    }
    int size()
    {
      return sz;
    }
    bool empty()
    {
        return head==NULL;
    }

};
int main()
{
    myQueue q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    //output
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();

    }
    return 0;
}