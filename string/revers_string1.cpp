#include <bits/stdc++.h>
using namespace std;
int main(){
	string str;
	string str_rev;
	// cin >> str;
	getline(cin, str);
	for(int i = str.size()-1; i >= 0; i--){
		str_rev = str_rev+str[i];
	}
	cout << str_rev << endl;
	return 0;
}