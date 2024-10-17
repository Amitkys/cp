class Solution {
public:
    void rotateIt(vector<int>& arr, int x, int y){
        int n = arr.size();
        int startingPosition = x;
        int endingPosition = y;

        while(startingPosition < endingPosition){
            swap(arr[startingPosition], arr[endingPosition]);
            startingPosition++;
            endingPosition--;
        }
    }
    void rotate(vector<int>& arr, int k) {
        int n = arr.size();

        if(n == 1) return;

        k = k % n;

        int lastIndex = n - 1;
        
        rotateIt(arr, 0, lastIndex-k);
        rotateIt(arr, lastIndex-k+1, lastIndex);
        rotateIt(arr, 0, lastIndex);
    }
};
