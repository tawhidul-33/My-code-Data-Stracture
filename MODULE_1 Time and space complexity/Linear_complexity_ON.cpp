/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;//O(1)
    cin>>n;//O(1)
    for(int i=1;i<=n;i++)//O(n)
    {
        cout<<i<<" ";
    }
    return 0;//O(1)

    //total complexity O(1+1+n+1) = O(n+3)
    // constantignore kore = O(n) 
    // ai code er complexity O(N)
}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;//O(1)
    cin>>n;//O(1)
    for(int i=1;i<=n/2;i++)//O(n/2) constant ignore kore = O(n)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i=1;i<=n;i++)//O(n)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i=1;i<=n*2;i++)//O(n*2) constant ignore kore = O(n)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i=n;i>=1;i--)//O(n)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;//O(1)

    //total complexity O(1+1+n+n+n+n+1) = O(4n+3)
    // constantignore kore = O(4n) 
    // constantignore kore = O(n)
    // ai code er complexity O(n)
}