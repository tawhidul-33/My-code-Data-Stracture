// 10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
// 0
//or,
// 10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
// 2
//or,
// 10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
// 3
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

void level_nodes(Node*root,int level)
{
    //
    if(root==NULL)cout<<"Invalid";//root NULL thakle 

  queue<pair<Node*,int>>q;
  if(root!=NULL){
    q.push({root,0});
  }
  bool found=false;//invalid level track rakhar jonno
  while(!q.empty())
  {
    //ber kore ana
    pair<Node*,int> parent = q.front();
    q.pop();
   //piar thrkr Node && level alada kora niye kaj kora
   Node* node=parent.first;
   int lvl=parent.second;

   if(lvl==level){
    if(node!=NULL){
       cout<<node->val<<" ";
       found=true; 
    }
    
   }
   //childe push
   if(node->left)
   q.push({node->left,lvl+1});
   if(node->right)
   q.push({node->right,lvl+1});
  }
if(found!=true)cout<<"Invalid";
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
   Node* root=input_tree();
   int level;
   cin>>level;
   level_nodes(root,level);
   
    return 0;
}