// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     pair<int,int>p;
//     pair<string,int>p2;
//     p=make_pair(2,3);//p={2,3}
//     p2={"siyam",33};
//     cout<<p.first<<" "<<p.second<<endl;
//     cout<<p2.first<<" "<<p2.second<<endl;
//     return 0;
// }

//pair with vector
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    
    return 0;
}