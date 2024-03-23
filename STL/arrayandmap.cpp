#include<iostream>
#include<array>
#include<vector>
#include<list>
using namespace std;
int main(){

array<int,6> arr={1,2,3,4,5,6};
for(int i=0;i<6;i++)
 cout<<arr[i] <<"and"  <<arr.at(i) <<endl;
//  int ab[5]={1,2,3,4,5};
// for(int i=0;i<8;i++)
//  cout<<a[i] <<"and" <<&a[i] <<endl;
 int &a=arr.front();
    cout <<a<< endl;
    // Printing last element of array
    cout << "Last element of array is : ";
    int &b=arr.back();
    cout << b << endl;
vector<int> g={1,2,3,4};
g.push_back(5);
cout<<g.at(0);
// for
cout<<"size" <<g.size()<<endl;
cout<<"size" <<g.max_size()<<endl;
cout<<"size" <<g.empty()<<endl;
g.insert(1,10,2);
g[2]=10;
cout<<"capacity is" <<g.capacity()<<endl;
for(int i=0;i<g.size();i++)
cout<<g[i]<<" " <<endl;

}