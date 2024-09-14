class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        int firstLarge = INT_MIN;
        int secondLarge = INT_MIN;
        
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > firstLarge){
                secondLarge = firstLarge;
                firstLarge = arr[i];
            }else{
                if(arr[i] < firstLarge && arr[i] > secondLarge){
                    secondLarge = arr[i];
                }
            }
        }
        if(secondLarge == INT_MIN){
            return -1;
        }
        return secondLarge;
    }
};
