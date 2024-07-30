#include <bits/stdc++.h>
using namespace std;
int main(){
	string str;
	string str_rev;
	getline(cin, str);
	for(int i = str.size()-1; i >= 0; i--){
		str_rev.push_back(str[i]);
	}
	if(str_rev == str){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}
	return 0;
}