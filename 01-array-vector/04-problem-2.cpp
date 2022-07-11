// TRIPLETS
// Given an array containing N intergers and an number S denoting a target sum. Find all the distinct intergers that can be added to the target sum. The number in each triplet should be order in the ascending order, and triplets should be ordered too. Return empty array if no such triplets exist.

#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

void triplets(vector<int> arr, int triplet){
    sort(arr.begin(), arr.end());

    // pick every a[i], triplet sum for remaining part
    for(int i=0; i<arr.size()-2; i++){
        int j = i+1;
        int k = arr.size()-1;

        // two pointer approach
        while(j<k){
            int sum = arr[i] + arr[j] + arr[k];
            if(sum == triplet){
                cout << arr[i] << ',' << arr[j] << ',' << arr[k] << endl;
                j++;
                k--;
            } else if(sum < triplet){
                j++;
            } else {
                k--;
            }
        }
    }
}

int main() {
    vector<int> arr{1,2,3,4,5,6,7,8,9,15};
    int sum = 18;

    triplets(arr, sum);

    return 0;
}