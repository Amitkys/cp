// C++ program to find the maximum number 
// of consecutive 1s or 0s

#include <bits/stdc++.h>
using namespace std;

int maxConsecutiveCount(vector<int> &arr) {
    bool flag = false;
    int count = 0;
    int maxCount = 0;

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == 1) {
           count++; 
           maxCount = max(maxCount, count);
        }
        else{
            count = 0;
        }
    }
    return maxCount;
}

int main() {
    vector<int> arr = {1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 0, 1};
    cout << maxConsecutiveCount(arr) << endl;
    return 0;
}

