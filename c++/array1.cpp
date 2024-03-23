#include <iostream>
using namespace std;
int main()
{
    // int a[]={1,2,3};
    // int b[]={'1','2','3'};
    // char a1[]={1,2,3};
    // char b1[]={'1','2','3'};
    // for(int i=0;i<3;i++)
    // cout<<a[i] <<a1[i] <<" " <<b[i] <<b1[i] <<endl;
    // cout<<sizeof(a) <<"\t"  <<sizeof(b) <<sizeof(a1) <<sizeof(b1) <<endl;
    // int a[2][2]={{1,2},{3,4}};
    // for(int i=0;i<2;i++)
    // {
    //     for(int j=0;j<2;j++)
    //     cout<<a[i][j] <<" " <<&a[i][j] <<endl;
    // }
    // cout<<&a[0]<<endl;
    // cout<<&a[1]<<endl;
    // // program to find max element in three element
    // int a[] = {10, 20, 15, 2, 23, 90, 67};
    // int b = sizeof(a) / sizeof(a[0]);
    // cout << b << endl;
    // for (int i = 0; i < b; i++)
    // {
    //     if (a[i] > a[i + 1] && a[i] > a[i - 1])
    //         cout << a[i] << "\t";
    // }

//     int a[]={1,2,3,4,5},t,b,c;
//     b=sizeof(a)/sizeof(a[0]);
//     c=b-1;
//     for(int i=0;i<c;i++)
//     {
//         t=a[i];
//         a[i]=a[c];
//         a[c]=t;
//         c--;

//     }
//     for(int i=0;i<b;i++)
//     cout<<a[i] <<" ";
    int a[]={19,12,17,9,5,23,435,543,43},t,b,c;
    b=sizeof(a)/sizeof(a[0])-1;
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;

            }
        }
    }
    for(int i=0;i<(b+1);i++)
    cout<<a[i] <<" ";
}