/*
    Given an array of size at least two, find the smallest subarray that needs to be sorted in place so that entire input array become sorted.
    if the inpurt array is sorted, function should return [-1,-1] otherwise return the start and end index of smallest subarray

    APPROACH 1
    - make a duplicate array, sort it and then compare it with given array
    - O(NlogN)

    APPROACH 2
    - implemented below
    - O(N)
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
#include<climits>

using namespace std;

void subArraySort(vector<int> arr){
    int n = arr.size();
    int high = INT_MIN;
    int low = INT_MAX;

    for(int i=1; i<n-1; i++){
        if(arr[i] < arr[i-1] or arr[i] > arr[i+1]){
            if(arr[i] > arr[i-1] and arr[i] > arr[i+1]){
                high = arr[i];
            }
            if(arr[i] < arr[i-1] and arr[i] < arr[i+1]){
                low = arr[i];
            }
        }
    }

    cout << high << ',' << low << endl;
}

int main() {
    vector<int> arr {1,2,3,4,5,8,6,7,9,10,11};

    subArraySort(arr);

    return 0;
}