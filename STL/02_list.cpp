#include <iostream>
#include <list>
using namespace std;
 
int main()
{
    // defining list
    list<int> gqlist{12,45,8,6};
    // gqlist.push_front(7);
    // gqlist.push_back(77);
    // for (auto i : gqlist) {
    //     cout << i << ' ';
    // }
    // gqlist.pop_back();
    // gqlist.pop_front();
    // gqlist.reverse();
    // cout<<gqlist.size();
    // cout<<gqlist.max_size();
    // gqlist.insert(2,2);


    for (auto i : gqlist) {
        cout << i << ' ';
    }
    return 0;    
}                                                                           