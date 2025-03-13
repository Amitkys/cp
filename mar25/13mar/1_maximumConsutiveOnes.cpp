// C++ program to find the maximum number 
// of consecutive 1s or 0s

#include <bits/stdc++.h>
using namespace std;

int maxConsecutiveCount(vector<int> &arr) {
    int maxCount = 1, count = 1;

    for(int i = 1; i < arr.size(); i++) {
        if(arr[i] == arr[i-1]){
            count++;
        }
        else{
            maxCount = max(maxCount, count);
            count = 1;
        }
    }

    return max(maxCount, count);
}

int main() {
    vector<int> arr = {1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 0, 1};
    cout << maxConsecutiveCount(arr) << endl;
    return 0;
}

