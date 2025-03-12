// C++ program to find the missing number

#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int> &arr) {
    int n = arr.size() + 1;

    // create hash array of size n

    vector<int> hash(n+1, 0);

    // store frequencies of elements

    for(int i = 0; i < n-1; i++) {
        hash[arr[i]]++;
    }

    // find the missing number

    for(int i = 1; i <= n; i++) {
        if(hash[i] == 0) {
            return i;
        }
    }

    return -1;
}

int main() {
    vector<int> arr = {1, 2, 3, 5};
    int res = missingNumber(arr);
    cout << res << endl;
    return 0;
}
