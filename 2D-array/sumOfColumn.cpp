#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	cin >> n >>m;

	int arr[n][m];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> arr[i][j];
		}
	}

	int sum = 0;
	for(int j = 0; j < m; j++){
		for(int i = 0; i < n; i++){
			sum += arr[i][j];
		}
		cout << sum << endl;
		sum = 0;
	}

	
}
