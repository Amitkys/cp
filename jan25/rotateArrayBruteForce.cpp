#include <bits/stdc++.h>
using namespace std;

void rotateArray(int arr[], int n, int d) {
    // temp array for roatating first d element
    d = d % n;
    // array to store first d element
    int temp[d];

// initiating into temp
    for(int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }
// shifting element from left  to right side
    for(int i = 0; i < n-d; i++) {
        arr[i] = arr[d+i];
    }
// inserting element into right side from temp into main array 
    for(int i = 0; i < d; i++) {
        arr[n-d+i] = temp[i];
    }
}

int main() {
   int n;
    cin >> n;
    int d;
    cin >> d;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // task: complete function
    rotateArray(arr, n, d);

    // print array
    cout << "output" << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
