#include <iostream>
using namespace std;
int getSquareRoot(int n) {
    int ans = 1;
   // iterate 1 to n
   // until multiplication of n is less than or equal n 
    while(ans * ans <= n){
        ans++;
    }

    return ans - 1;
}
int main() {
    int result = getSquareRoot(26);
    cout << result << endl;
    return 0;
}