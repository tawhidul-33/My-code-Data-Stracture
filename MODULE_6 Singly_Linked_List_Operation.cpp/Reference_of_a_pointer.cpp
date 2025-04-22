// //without reference 
// #include<bits/stdc++.h>
// using namespace std;
// void fun(int* p)
// {
//     int y=200;
//     p=&y;
//     cout<<*p<<endl;
// }
// int main()
// {
//     int x=10;
//     int *p=&x;
//     fun(p);
//     cout<<*p<<endl;

//     return 0;
// }
//with reference
#include<bits/stdc++.h>
using namespace std;
void fun(int* &p)
{
    int y=200;
    p=&y;
    cout<<*p<<endl;
}
int main()
{
    int x=10;
    int *p=&x;
    fun(p);
    cout<<*p<<endl;

    return 0;
}