// Input
// 5 3
// 1 5 4 3 2
// 5
// 3
// 6
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    while(q--)
    {
        int x;
        cin>>x;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==x)
            {
              flag=1;
            }
        }
        if(flag==1)
        {
            cout<<"found"<<endl;

        }
        else{
            cout<<"not found"<<endl;
        }
    }
    return 0;
}

// //or
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,q;
//     cin>>n>>q;
//     vector<int>v(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>v[i];
//     }
//     while(q--)
//     {
//         int x;
//         cin>>x;
//         auto it=find(v.begin(),v.end(),x);
        
//         if(it!=v.end())
//         {
//             cout<<"found"<<endl;

//         }
//         else{
//             cout<<"not found"<<endl;
//         }
//     }
//     return 0;
// }