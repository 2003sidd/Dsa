#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list <int> sid{1,2};
    sid.assign(5,6);
    for(auto i:sid)
    cout<<i <<" ";
    cout<<endl;

}