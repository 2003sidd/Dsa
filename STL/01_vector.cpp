#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    //creating a vector
    vector<int> g1;
 
    for (int i = 1; i <= 5; i++)
    {    g1.push_back(i);    // inseting a new data into the vector
        // cout<<g1.size() <<" " <<g1.max_size()  <<" " <<g1.capacity() <<endl;
        // cout<<g1.size() <<" " <<g1.max_size()  <<" " <<g1.capacity() <<endl;
    //    cout<<g1.size();
    //     g1.shrink_to_fit();
    //     cout<<g1.capacity()<<endl;;
    }

// Traversal a vector 
//     cout << "Output of begin and end: ";
//     for (auto i = g1.begin(); i != g1.end(); ++i)
//         cout << *i << " ";
   
   //Some functionality of vector
    // cout<<g1[2];
    // cout<<g1.at(2)<<endl;
    // cout<<g1.front()<<endl;
    // cout<<g1.back()<<endl;
    // cout<<*g1.data()<<endl;

    // cout<<*g1.begin();
    // // cout<<g1.begin();    // you can't do this 
    // cout<<*g1.cbegin();
    // cout<<*g1.rbegin();
    // cout<<*g1.crbegin();
    // cout<<*g1.end();
    // cout<<endl;
    // cout<<*g1.cend();
    // cout<<endl;
    // cout<<*g1.rend();
    // cout<<endl;
    // cout<<*g1.crend();

    // cout << "Output of begin and end: ";
    // for (auto i = g1.begin(); i != g1.end(); ++i)
    //     cout << *i << " ";
 
    // cout << "\nOutput of cbegin and cend: ";
    // for (auto i = g1.cbegin(); i != g1.cend(); ++i)
    //     cout << *i << " ";
 
    // cout << "\nOutput of rbegin and rend: ";
    // for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
    //     cout << *ir << " ";
 
    // cout << "\nOutput of crbegin and crend : ";
    // for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
    //     cout << *ir << " ";
 
    // Output of begin and end: 1 2 3 4 5 
    // Output of cbegin and cend: 1 2 3 4 5
    // Output of rbegin and rend: 5 4 3 2 1
    // Output of crbegin and crend : 5 4 3 2 1
    // cout<<g1.empty();
    // g1.pop_back();
    // for (auto i = g1.begin(); i != g1.end(); ++i)
    //     cout << *i << " ";
}