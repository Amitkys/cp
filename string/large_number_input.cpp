#include <bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin >> str;
	int last_digit = (int)str[str.size()-1] - '0';
	str.pop_back();
	str+= to_string(last_digit+2);
	cout << str;
}