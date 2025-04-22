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
void level_order(Node*root)
{
    if(root==NULL)
    {
        cout<<"No Tree";
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        //1.ber kore ana
        Node*f=q.front();
        q.pop();
        //2.oi Node niye kaj kora ba oi Node er valu print kora
        cout<<f->val<<" ";
        //3.oi Node er childe push kora
        if(f->left!=NULL){
            q.push(f->left);
        }
        if(f->right!=NULL){
            q.push(f->right);
        }
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
        //1.Node ber kore ana
        Node*p=q.front();
        q.pop();
        //2.Node niye kaj kora
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
    level_order(root);

    return 0;
}