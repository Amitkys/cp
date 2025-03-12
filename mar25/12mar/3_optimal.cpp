// C++ program to find the missing number

#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int> &arr) {
    int n = arr.size() + 1;
    int totalSum = n * (n+1) / 2;
    int elementSum = 0;

    for(int i = 0; i < n-1; i++) {
        elementSum += arr[i];
    }

    return totalSum - elementSum;
}

int main() {
    vector<int> arr = {1, 2, 3, 5};
    int res = missingNumber(arr);
    cout << res << endl;
    return 0;
}
