// 3
// 5
// 2 4 6 7 10
// 8
// 1 100 101 120 120 121 1000 1000
// 4
// 100 1 102 12
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {   
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int flag=1;
        for(int i=1;i<n;i++)
        {
            if(v[i]<v[i-1])
            {
                flag=0;
                break;
            }
        }
        
        flag==1?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
    return 0;
}