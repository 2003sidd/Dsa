#include<iostream>
// #include<conio>
using namespace std;

// void randomToOne(int num){
//     if(num>0){
//     cout<<num<<" ";
//     randomToOne(--num);
//     }
// }

// void oneToRandom(int num){
//     static int x=1;
//     if(num>=x){
//         cout<<x<<" ";
//         x++;
//         oneToRandom(num);
//     }
// }

void tableOfFive(int num){
    static int x=1;
    cout<<num*x<<" ";
    x++;
    if(x>10)
    return;
    tableOfFive(7   );
}

int main(){
    cout<<"result is"<<endl;
    tableOfFive(7);
}