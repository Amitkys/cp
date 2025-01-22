#include <bits/stdc++.h>
using namespace std;

int removeDuplicate(int arr[], int n) {
	int j = 1;
	int i = 0;

	while(j < n) {
		if(arr[i] != arr[j]){
			i++;
			arr[i] = arr[j];
		}
		j++;
	}
	return i+1;
}

void printArray(int arr[], int n) {
	
	cout << "printing array" << endl;
	for(int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n..........." << endl;
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int sizeOfArray = removeDuplicate(arr, n);
	printArray(arr, sizeOfArray);
}

