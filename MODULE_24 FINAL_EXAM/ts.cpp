// 3
// sakib 8 95
// rakib 5 99
// akib 3 85
#include<bits/stdc++.h>
using namespace std;
class student
{
 public:
  string name;
  int roll;
  int mark ;
    student(string name,int roll,int mark)
    {
        this->name=name;
        this->roll=roll;
        this->mark=mark;
    }
};
class cmp
{
    public:
    bool operator()(student l,student r)
    {
    //aikhane logic ulta kaj kore,
    //aita operator()()function er jonno
       if(l.mark>r.mark)
       {
        return true;
       }else{
        return false;
       }
    }

};
int main()
{
    priority_queue<student,vector<student>,cmp> pq;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string name;
        int roll,mark;
        cin>>name>>roll>>mark;
        student obj(name,roll,mark);
        pq.push(obj);
    }

    while(!pq.empty())
    {
      cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().mark<<endl;
      pq.pop();

    }
    return 0;
}