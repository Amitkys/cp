#include <bits/stdc++.h>
using namespace std;
int main(){
	string str1, str2, ans = "";
	cin >> str1 >> str2;

	map<char, int> mp;

	for(int i = 0; i < str2.size(); i++){
		mp[str2[i]]++;
	}

	for(int i = 0; i < str1.size(); i++){
		if(mp[str1[i]] <= 0){
			ans += str1[i];
		}
	}

	cout << ans; 

}