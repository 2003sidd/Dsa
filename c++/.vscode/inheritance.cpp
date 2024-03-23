#include<iostream>
// #include
using namespace std;

class Parent {
    public:
     void parentfunc(){
        cout<<"parent class"<<endl;
    };
};
// class Child {
//     public:
//     void childfunc();
// };
// void Child::childfunc(){
//     cout
//     <<"child class"<<endl;
// }

class Child {
public:
    void childfunc(); // Declaration

    // Other members of the Child class, if any
};

// Definition of childfunc outside the class
void Child::childfunc() {
    cout << "child class" << endl;
}



int main(){
 Parent obj;
 Child ch;
 Child::childfunc();
}