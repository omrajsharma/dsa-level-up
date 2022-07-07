#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> s{1,2,3,8,11,15,9};

    // insert - O(1)
    s.insert(111);

    // O(1) complexity
    // s.end() return a point just after the array
    int key = 15;
    if(s.find(key) != s.end())  cout << "Key found" << endl;
    else                        cout << "Key not found" << endl;

    // erase - O(1)
    s.erase(11);

    // Print all the element of unorder set
    for(auto x: s){
        cout << x << ", ";
    }

    return 0;
}