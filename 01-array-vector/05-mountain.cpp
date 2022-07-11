// write a function that takes input an array of distinct intergers, and returns the length of highest mountain.
// - A mountain is defined as adjacent intergers that are strictly increasing until they reach a peak, at which the become strictly decreasing.
// - At least 3 number are required to form a mountain.

// TRICK
// 1. Identify the peak of the mountain.
// 2. Find the length of the mountain.

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void mountainPeak(vector<int> arr){
    int length = 0;
    int maxLength = 0;
    
    for(int i=0; i<arr.size(); i++){
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){

            // find the length of the mountain
            int j = i;
            while(arr[j] > arr[j-1]){
                j--;
            }
            int k = i;
            while(arr[k] > arr[k+1]){
                k++;
            }
            length = k-j+1;

            // find the max length of the mountain
            if(length > maxLength){
                maxLength = length;
            }
        }
    }
    cout << "The length of the mountain is " << maxLength << endl;
}

int main() {
    vector<int> mountain {5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};

    mountainPeak(mountain);
    

    return 0;
}