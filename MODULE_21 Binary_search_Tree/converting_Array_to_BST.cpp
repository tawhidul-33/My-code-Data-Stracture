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
Node*convert_arry_to_BST(int ar[],int l,int r)
{ 
    //left l jodi right r theke boro hoy 
    //tahole recurtion off hobe abong NULL return korbe
    if(l>r){
        return NULL;
    }

    //Arry er mid valu ber kore root Node creat kora
    int mid=(l+r)/2;
    Node* root=new Node(ar[mid]);

    //Arry er left side recurtion er maddhome BST creat kora
    Node* leftnode = convert_arry_to_BST(ar,l,mid-1);
    Node* rightnode = convert_arry_to_BST(ar,mid+1,r);

    //root er sate connection diya
    root->left=leftnode;
    root->right=rightnode;
    return root;
}
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
     Node*root=convert_arry_to_BST(ar,0,n-1);
     print_level_order(root);
    return 0;
}