// 10
// 20 30
// 40 70 -1 50
// 90 110 -1 -1 80 60
// -1 -1 -1 -1 100 -1 -1 -1
// -1 -1
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
void print_outer_tree_leftSide(Node*root)
{
    
    if(root==NULL){
        return;
    }
    if(root->left!=NULL){
        print_outer_tree_leftSide(root->left);
    }
    else{
        print_outer_tree_leftSide(root->right);
    }
    cout<<root->val<<" ";
   
}
void print_outer_tree_rightSide(Node* root)
{
    if(root==NULL){
        return;
    }
    cout<<root->val<<" ";
    if(root->right!=NULL){
        print_outer_tree_rightSide(root->right);
    }
    else{
        print_outer_tree_rightSide(root->left);
    }
    
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
   print_outer_tree_leftSide(root->left);
   cout<<root->val<<" ";
  print_outer_tree_rightSide(root->right);
  
    return 0;
}