#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1,3,5,3,7,5};

    // size - no of elements
    cout << arr.size() << endl;

    // capacity - total space used by vector
    cout << arr.capacity() << endl;
    // push back
    arr.push_back(9);
    cout << arr.capacity() << endl;

    // IMPORTANT FUNCTION - pop back, insert, erase, fill constructor
    // Fill constructor
    // vector<int> visited(100,0);


    // print all elements
    for(int i=0; i<arr.size(); i++)
        cout << arr[i] << endl;
    

    return 0;
}