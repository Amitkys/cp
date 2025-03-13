// C++ program to find single
// Element Among Doubles
#include <iostream>
#include <vector>
using namespace std;

// Function to find the element 
// that appears only once
int search(vector<int>& arr) {
    for(int i = 0; i < arr.size(); i++) {
        int nums = arr[i];
        int count = 0;
        for(int j = 0; j < arr.size(); j++) {
            if(arr[j] == nums) {
                count++;
            }
        }
        if(count == 1) {
            return arr[i];
        }
    }

    return -1;

}

int main() {
    vector<int> arr = { 2, 3, 5, 4, 5, 3, 4 };
    cout << search(arr) << endl;
    return 0;
}
