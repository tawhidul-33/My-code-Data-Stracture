// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
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
int count_all_node(Node*root)
{
    
    if(root==NULL){
        return 0;
    }
    
    int l=count_all_node(root->left);
    int r=count_all_node(root->right);
    return l+r+1;
}
int count_max_hight_node(Node*root)
{
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL){
      return 1;
    }
    
    int l=count_max_hight_node(root->left);
    int r=count_max_hight_node(root->right);
    return max(l,r)+1;
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
   int allNode=count_all_node(node);
   int maxHight=count_max_hight_node(node);
   if(allNode==(pow(2,maxHight))-1)
   {
    cout<<"Complete_Node"<<endl;
   }
   else
   cout<<"NOT_Complete_Node"<<endl;
  
    return 0;
}