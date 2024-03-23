#include<iostream>
using namespace std;

int max_substring(int *arr,int n){
    int i=0,j=0,sum=0,y;
    while((j-i+1)<=3){
        sum+=arr[j];
        j++;
    }
    cout<< i <<" " <<j <<endl;
    y=sum;
    while(j<n){
        sum+=arr[j];
        sum-=arr[i];
        j++;
        i++;
        y=max(sum,y);
    }
    return y;
}

int main(){
   
    int arr[5];
    // cout<<arr.size ;
    cout<<"enter array:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
       cout<<arr[i]<<" ";
    }
    cout<<"the sum is :" <<max_substring(arr,5);
   
   }