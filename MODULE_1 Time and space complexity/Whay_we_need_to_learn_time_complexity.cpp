#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    //using loop ::: aikhane time complexity besi
    // for(int i=1;i<=n;i++)
    // {
    //   sum+=i;
    // }

    //using formula ::: aikhane time complexity kom
    sum=(n*(n+1))/2;
    cout<<sum<<endl;

    return 0;
}