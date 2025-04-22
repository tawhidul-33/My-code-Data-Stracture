#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    for(int i=0;i<N;i++)//O(N)
    {
        for(int j=0;j<N;j++)//O(N)
        {
          cout<<"Hello"<<" ";
        }

        cout<<endl;
    }
    return 0;
    //jehetu Nested loop akare ace tai gun hobe O(N*N)
    //ai code er quadratic complexity O(N*N)
}
/*
//or
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,M;
    cin>>N>>M;
    for(int i=0;i<N;i++)//O(N)
    {
        for(int j=0;j<M;j++)//O(m)
        {
          cout<<"Hello"<<" ";
        }

        cout<<endl;
    }
    return 0;
    //jehetu Nested loop akare ace tai gun hobe O(N*M)
    //ai code er quadratic complexity O(N*M)
}
*/