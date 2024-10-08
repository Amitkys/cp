//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	   
	   int low = 0;
	   int high = n-1;
	   
	   int first_occur = -1;
	   int last_occur =  -1;
	   
	   while(low <= high){
	       int mid = low + (high - low) / 2;
	       
	       if(arr[mid] == x){
	           first_occur = mid;
	           high = mid - 1;
	       }
	       else if(x > arr[mid]){
	           low = mid + 1;
	       }
	       else{
	           high = mid - 1;
	       }
	   }
	   
	   low = 0;
	   high = n-1;
	   
	   while(low <= high){
	       int mid = low + (high - low) / 2;
	       
	       if(arr[mid] == x){
	           last_occur = mid;
	           low = mid + 1;
	       }
	       else if(x > arr[mid]){
	           low = mid + 1;
	       }
	       else{
	           high = mid - 1;
	       }
	       
	   }
	   
	   if(first_occur == -1 && last_occur == -1){
	       return 0;
	   }
	   return (last_occur - first_occur) + 1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
