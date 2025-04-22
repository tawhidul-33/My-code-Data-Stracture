/*
#include<bits/stdc++.h>
using namespace std;
int main()
{   //space complexity depent kore variable o array er upor
    int n;//O(1)
    cin>>n;
    int sum=0;//O(1)
    for(int i=0;i<n;i++)//O(1)
    {
        sum+=i;
        
    }
    cout<<sum<<endl;
   //ai code er space complexity O(1)
    
    return 0;
}

//or
#include<bits/stdc++.h>
using namespace std;
int main()
{   //space complexity depent kore variable o array er upor
    int N;//O(1)
    cin>>N;
    int ar[N];//O(N)
    for(int i=0;i<N;i++)//O(1)
    {
        cin>>ar[i];
        
    }
    for(int i=0;i<N;i++)//O(1)
    {
        cout<<ar[i]<<" ";
        
    }
    
   //ai code er space complexity O(N)
    
    return 0;
}
*/
//or
#include<bits/stdc++.h>
using namespace std;
int main()
{   //space complexity depent kore variable o array er upor
    int N;//O(1)
    cin>>N;
    int ar[N][N];//O(N*N)
    for(int i=0;i<N;i++)//O(1)
    {
        cin>>ar[i][i];
        
    }
    for(int i=0;i<N;i++)//O(1)
    {
        cout<<ar[i][i]<<" ";
        
    }
    
   //ai code er space complexity O(N*N)
    
    return 0;
}