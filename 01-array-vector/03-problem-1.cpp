// Pair sum problem
// Approaches
// 1. two loops - O(N^2)
// 2. sort -> binary search
// 3. unorder set 

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

void checkPair(vector<int> arr, int pair){
    unordered_set<int> s;

    for(int i=0; i<arr.size(); i++){
        int currVal = arr[i];
        int valWant = pair - currVal;
        if(s.count(valWant) == 0){
            s.insert(currVal);
        } else {
            cout << "Pair found" << currVal << ',' << valWant << endl;
            break;
        }
        cout << currVal << ',' << valWant << endl;
    }
}

int main() {
    vector<int> arr{10,5,2,3,-6,9,11};
    int pair = 4;

    checkPair(arr, pair);

    return 0;
}