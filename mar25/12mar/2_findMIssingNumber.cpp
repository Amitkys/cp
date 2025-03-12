// C++ program to find the
// missing number in the array
#include<bits/stdc++.h>
using namespace std;


// Function to find the missing number
int missingNumber(vector<int>& arr) {
    int n = arr.size() + 1;

    for(int i = 1; i <=n; i++) {
        bool found = false;
        for(int j = 0; j < n-1; j++){
            if(arr[j] == i) {
                found = true;
            }
        }
        if(!found){
            return i;
        }
    }

    return -1;
}

int main(){
    vector<int> arr = {1, 3, 4, 5};
    cout<<missingNumber(arr) << endl;
    return 0;
}
