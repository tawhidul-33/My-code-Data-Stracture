//10 20 30 40 -1 50 60 -1 -1 -1 -1 -1 -1
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
int max_hight(Node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    if(root->left==NULL&&root->right==NULL){
        return 0;//karon leaf node er hight==0 hoy
        //ar aikhane leaf node er hight return kora hoche
    }
    int l=max_hight(root->left);
    int r=max_hight(root->right);
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
        //ber kora ana
        Node*p=q.front();
        q.pop();
        //oi Node niye kaj kora
        int l,r;
        cin>>l>>r;
        Node*myleft,*myright;
        if(l==-1)myleft=NULL;
         else myleft=new Node(l);
          if(r==-1)myright=NULL;
           else myright=new Node(r);
        p->left=myleft;
        p->right=myright;
        //childe push kora
        if(p->left!=NULL)
         q.push(p->left);
        if(p->right!=NULL)
         q.push(p->right);    
    }
    return root;
}
int main()
{
    Node*root=input_tree();
    cout<<max_hight(root);
    
    return 0;
}