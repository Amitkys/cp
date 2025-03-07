//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        int first = INT_MIN;
        int second = INT_MIN;
        
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > first){
                second = first;
                first = arr[i];
            }
            else{
                if(arr[i] > second && arr[i] != first){
                    second = arr[i];   
                }
            }
        }
        if(second == INT_MIN){
            return -1;
        }
        return second;
    }
};

//{ Driver Code Starts.

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
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
