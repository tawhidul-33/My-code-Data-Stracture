// 10 6 23 -1 9 19 29 7 -1 12 -1 -1 35 -1 -1 -1 -1 -1 -1
// 21
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void insert(Node*&root,int val)
{
    if(root==NULL){
        root=new Node(val);
    }
    if(root->val>val){
        if(root->left==NULL){
            root->left=new Node(val);
        }
        else{
            insert(root->left, val);
        }
    }
    else{
       if(root->right==NULL){
            root->right=new Node(val);
        }
        else{
            insert(root->right, val);
        } 
    }
}
void print_level_order(Node*root)
{
    if(root==NULL)
    {
        cout<<"No Tree";
    }
    queue<Node*>q;
    q.push(root);
    while (!q.empty())
    {
        //1.ber kore ana
        Node*p=q.front();
        q.pop();
        //2.oi Node niye kaj kora ba
        // oi Node er valu print kora
          cout<<p->val<<" ";
        //3.oi Node er childe push kora
        if(p->left)
        q.push(p->left);
        if(p->right)
        q.push(p->right);
    }
}
Node* input_tree()
{
  int val;
  cin>>val;
  Node*root;
  if(val==-1)root=NULL;
  else root=new Node(val);
  queue<Node*>q;
  if(root)
   q.push(root);
   while(!q.empty())
   {
    //ber kore ana
    Node*p=q.front();
    q.pop();
    //oi node niye kaj kora
    int l,r;
    cin>>l>>r;
    Node*mylef,*myright;
    if(l==-1)mylef=NULL;
    else mylef=new Node(l);
    if(r==-1) myright=NULL;
    else myright=new Node(r);

    p->left=mylef;
    p->right=myright;
    //child push kora
     if(p->left)
       q.push(p->left);
     if(p->right)
       q.push(p->right);     
   }
   return root;
}
int main()
{
    Node* root=input_tree();
    int val;
    cin>>val;
    insert(root,val);
    print_level_order(root);
    return 0;
}