// 10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
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
int sum=0;
vector<int>v;
void  print_leaf_node(Node*root)
{
    
    if(root==NULL){
        return ;
    }
    if(root->left==NULL&&root->right==NULL){
        v.push_back(root->val);
    }
    print_leaf_node(root->left);
    print_leaf_node(root->right);
}
Node* input_tree()
{
  int val;
  cin>>val;
  Node*root;
  if(val==-1){
    root=NULL;
  }
  else{
    root=new Node(val);
  }
  queue<Node*>q;
  if(root!=NULL)
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
    if(r==-1)myright=NULL;
    else myright=new Node(r);

    p->left=mylef;
    p->right=myright;
    //child push kora
     if(p->left!=NULL)
       q.push(p->left);
         if(p->right!=NULL)
           q.push(p->right);     
   }
   return root;
}
int main()
{
   Node* node=input_tree();
   print_leaf_node(node);
   sort(v.begin(),v.end(),greater<int>());
   for(int val:v)
   {
    cout<<val<<" ";
   }
    return 0;
}