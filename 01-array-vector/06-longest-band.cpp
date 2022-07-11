/*
    Given an array containing N intergers, find the length of the longest band
    A band is defined as a subsequence which can be reordered in such a manner all elements appear consectutive (ie. with absolute difference of 1 between neighbouring elements)
    a longest band is the band (subsequence) which contians maximum intergers.

    INPUT ARRAY
    [1,9,3,0,18,5,2,4,10,7,12,6]

    OUTPUT
    8
*/

#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;

void longestBand(vector<int> arr){
    int n = arr.size();
    int longBand = 1;

    // APPROACH 1 - SORT AND ITERATE - O(NlogN)
    // sort(arr.begin(), arr.end());
    // int band = 1;
    // for(int i=1; i<n; i++){
    //     if(arr[i] != arr[i-1]+1){
    //         band = 1;
    //         continue;
    //     }
    //     band++;
    //     longBand = max(longBand, band);
    // }

    // APPROACH 2 - UNORDERSET LOOK UP FOR CHILD CHAIN
    unordered_set<int> s;
    // data insetion in set
    for(int x : arr){
        s.insert(x);
    }
    // iterate over the arr
    for(auto e : s){
        int parent = e-1;
        // ignore element if it have parent
        if(s.count(parent) != 0){
            continue;
        }
        // continue to find chain if the element is head of band
        int nxt_no = e+1;
        int count = 1;
        while(s.count(nxt_no)){
            count++;
            nxt_no++;
        }
        longBand = max(longBand, count);
    }

    cout << "Longest Band : " << longBand << endl;
}

int main(){
    vector<int> arr {1,9,3,0,18,5,2,4,10,7,12,6};
    
    longestBand(arr);

    return 0;
}