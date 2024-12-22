//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void merge(vector<int>& arr, int low, int mid, int high){
        if(low >= high) {
            return;
        }
        
        int n = (mid - low) + 1;
        int n2 = (high - mid);
        
        vector<int> L(n), R(n2);

        for(int i = 0; i < n; i++) {
            L[i] = arr[low + i];
        }
        for(int i = 0; i < n2; i++ ){
            R[i] = arr[mid + 1 + i];
        }
        int i = 0;
        int j = 0;
        int k = low;
        
        while(i < n && j < n2){
            if(L[i] < R[j]){
                arr[k] = L[i];
                i++;
            }else{
                arr[k] = R[j];
                j++;
            }
            k++;
        }
        while(i < n) {
            arr[k] = L[i];
            i++;
            k++;
        }
        while(j < n2){
            arr[k] = R[j];
            j++;
            k++;
        }
    }
    void mergeSort(vector<int>& arr, int low, int high) {
        // code here
        if(low >= high){
            return;
        }
        int mid = low + (high - low) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        obj.mergeSort(arr, 0, arr.size() - 1);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
