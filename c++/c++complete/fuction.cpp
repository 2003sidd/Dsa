#include<iostream>
using namespace std;

int func(int* &ptr)
{
  cout<<ptr <<endl;
   (*ptr)++;
   return *ptr;
}

int* func1()
{
   int* ptr = new int;
   *ptr=5;
   return ptr;
}

int main(){
  int x=5;
  int *ptr=&x;
  func(ptr);
  cout<<ptr <<" and " <<x;

  // int * result =func1();
  // cout<<result <<' ' << *result;

    return 0;
   
}