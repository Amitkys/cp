//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    
    int print2largest(vector<int> &arr) {
        
        int fLarge = INT_MIN;
        int sLarge = INT_MIN;
        
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > fLarge){
                sLarge = fLarge;
                fLarge = arr[i];
            }
            else{
                if(arr[i] < fLarge && arr[i] > sLarge){
                    sLarge = arr[i];
                }
            }
        }
        if(sLarge == INT_MIN){
                return -1;
        }
        return sLarge;
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
        int ans = ob.print2largest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends
