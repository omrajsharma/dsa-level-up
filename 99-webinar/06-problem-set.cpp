// pair sum problem
// array [] - print pairs whose sum is equal to k 
// Approaches 
// 1. 2 nested loops (brute force approach) - 2 pointer - O(n^2)
// 2. sorting + 2 pointer approach - O(NlogN)
// 3. sorting + binary search - O(NlogN)
// 4. hashing - O(1)
//     2+X = 8
//     X = 8-2 = 6
//     and then search for x or 6 in O(1)
// problem :
//     - repeated pair also present
//     - (4,4)
// sol :
// hashing as we go

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

// for exactly one pair
vector<int> pairSum(vector<int> arr, int sum){
    unordered_set<int> s;
    vector<int> res;

    // O(N) complexity
    for(int i=0; i<arr.size(); i++){
        int x = sum - arr[i];
        if(s.find(x) != s.end()){
            res.push_back(x);
            res.push_back(arr[i]);
            return res;
        }

        s.insert(arr[i]);
    }
    return {};
}

int main() {
    vector<int> arr{10,5,2,3,-6,9,11};
    int s = 4;

    auto p = pairSum(arr, s);

    if(p.size() == 0)   cout << "No such pair" << endl;
    else                cout << p[0] << "," << p[1] << endl;

    return 0;
}
