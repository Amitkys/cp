//{ Driver Code Starts
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(vector<int>& arr) {
       bool flag = false;
       
       int n = arr.size();
       
       for(int i = 0; i < n; i++){
           for(int j = 0; j < n-1-i; j++) {
               if(arr[j] > arr[j+1]){
                   swap(arr[j], arr[j+1]);
                   flag = true;
               }
           }
           if(flag == false) {
               break;
           }
       }
    }
};


//{ Driver Code Starts.

// Driver program to test above functions
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;

        ob.bubbleSort(arr);
        for (int e : arr) {
            cout << e << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends