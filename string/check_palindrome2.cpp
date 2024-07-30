#include <bits/stdc++.h>
using namespace std;
int main(){
	string str;
	getline(cin, str);
	int n = str.size();
	for(int i = 0; i < n/2; i++){
		if(str[i] != str[n-1-i]){
			cout << "Not" << endl;
			return 0;
		}
	}
	cout << "yes" << endl;
	return 0;
}