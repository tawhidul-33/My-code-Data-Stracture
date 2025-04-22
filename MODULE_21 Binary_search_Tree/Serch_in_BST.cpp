// 18 7 21 -1 12 20 26 9 15 -1 -1 -1 -1 -1 -1 -1 -1
// 15
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
bool search(Node*root,int val)
{
    if(root==NULL){
        return false;
    }
    if(root->val==val){
        return true;
    }
    if(root->val>val){
      return search(root->left,val);  
    }
    else{
        return search(root->right,val);
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
    if(r==-1)myright=NULL;
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
    bool dublicate = search(root,val);
    if(dublicate==true){
        cout<<"Found"<<endl;
    }
    else{
         cout<<"Not Found"<<endl;
    }
    return 0;
}