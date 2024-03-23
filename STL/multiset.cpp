#include<iostream>
#include<set>
using namespace std;
int main(){
    multiset<int> s;
    // s.insert(5);
    // s.insert(15);
    // s.insert(15);
    // s.insert(1);
    // s.insert(3);
    // s.insert(45);
    for(int i=0;i<5;i++){
    s.insert(5);
    cout<<s.max_size()<<" " <<s.size()<<endl;
    }
    // for(int i=0;i<s.size();i++)
    // cout<<s[i];
    cout<<endl <<s.size();
    cout<<endl <<s.max_size();
    // auto i=s.find(3);
    cout<<endl <<s.empty();
    cout<<endl <<s.count(3);
    cout<<endl <<s.count(5);
    cout<<endl <<s.count(4);
    s.erase(3);
    for(auto i:s)
    cout<<i<<" ";
    s.clear();
    cout<<"clear hui"<<endl;
    for(auto i:s)
    cout<<"value is " <<i<<endl;

}