// 11
// 42 21 17 9 13 11 6 2 3 7 5
#include<bits/stdc++.h>
using namespace std;
void delete_min_Heap(vector<int> &v)
{
    v[0]=v.back();
    v.pop_back();
    int cur_indx=0;
    while(true){
    int left_indx=(cur_indx*2)+1;
    int right_indx=(cur_indx*2)+2;
    int left_val=INT_MAX,right_val=INT_MAX;
    if(left_indx<v.size()){
        left_val=v[left_indx];
    }
    if(right_indx<v.size()){
        right_val=v[right_indx];
    }

    if(left_val<=right_val&&left_val<v[cur_indx]){
        swap(v[left_indx],v[cur_indx]);
        cur_indx=left_indx;
    }
    else if(right_val<left_val&&right_val<v[cur_indx]){
        swap(v[right_indx],v[cur_indx]);
        cur_indx=right_indx;
    }
    else{
        break;
    }
    }
    
}
void insert_min_heap(vector<int>&v,int val){
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
}
void print_heap(vector<int>v)
{
  for(int x:v){
    cout<<x<<" ";
  }
  cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        insert_min_heap(v,val);
    }
    cout<<"Before delete"<<endl;
     print_heap(v);
     delete_min_Heap(v);
     cout<<"After delete"<<endl;
     print_heap(v);
    return 0;
}