#include<iostream>
#include<vector>
using namespace std;
int main() {
    // 2D VECTOR
    vector< vector<int> > arr = {
        {1,2,3},
        {4,5,6}
    };

    for(int i=0; i<arr.size(); i++)
        for(int j=0; j<arr[0].size(); j++)
            cout << arr[i][j] << endl;

    return 0;
}