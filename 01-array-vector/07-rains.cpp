/*
    Given n non-negative integers represting an elevation map where the width of each bar is 1, computer how much water it can trap after rain
    

    APPROACH 1
    for any element/height, what is the water will stored vectically
    - min (highest height on left , highest height on right) - currentl height
    everytime we have to search for left & right highest
    O(N.N)

    better approach would be to have array to store left and right highest for height

*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>

using namespace std;

void rains(vector<int> arr){
    int n = arr.size();
    int water = 0;
    
    // Left max, Right max
    vector<int> left(n,0), right(n,0);
    left[0] = arr[0];
    right[n-1] = arr[n-1];
    
    for(int i=0; i<n; i++){
        left[i] = max(left[i-1], arr[i]);
        right[n-1-i] = max(right[n-i], arr[n-1-i]);
    }
    
    for(int i=0; i<n; i++){
        int currentWater = min(left[i], right[i]) - arr[i];
        water += currentWater;
    }

    cout << water << endl;

}

int main() {
    vector<int> arr {01,0,2,1,0,1,3,2,1,2,1};

    rains(arr);

    return 0;
}