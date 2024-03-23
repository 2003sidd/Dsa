#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string> m;
    m[1]="two";
    m[0]="one";
    m[2]="three";
    // m.insert(3,'four');
    m.at(3,'three')
    map<int,string>::iterator it=m.begin();
    while(it!=m.end()){
    cout <<it->first <<" " <<it->second;
    it++;
    }
    return 1;
}