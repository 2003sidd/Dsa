#include<iostream>
using namespace std;

int main()
{
    int a[2][2]={{1,2},{3,4}};

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        cout<<&a[i][j]<<endl;
    }
cout<<"***********************************************************************"<<endl;
    // cout<<a<<endl;
    // cout<<&a<<endl;
    // cout<<*a<<endl;
    // cout<<**a<<endl;
    cout<<a[0]<<endl;
    cout<<a[1]<<endl;
    // cout<<a[2]<<endl;
    cout<<(a+0)<<endl;
    cout<<(a+1)<<endl;
    cout<<"sab badiya hga";
}