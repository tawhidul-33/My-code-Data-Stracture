//Min_Heap er input
// 6
// 5 7 8 10 13 9 
// 6
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int val;
    cin>>val;
    v.push_back(val);
    int cur_indx=v.size()-1;
    while(cur_indx!=0)
    {
        int par_indx=(cur_indx-1)/2;
        if(v[par_indx]>v[cur_indx])
        {
            swap(v[par_indx],v[cur_indx]);
            cur_indx=par_indx;
        }
        else{
            break;
        }
    }
    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
}