#include <bits/stdc++.h>
using namespace std;
int main(){
	// cout << "Hello World";
	int x = 220;
	int temp = x;
	int ans = 0;
	while(x){
		int rem = x % 10;
		if(rem == 0){
			x = x / 10;
			continue;
		}
		if(temp % rem == 0){
			ans++;
		}
		x = x / 10;
	}
	cout << ans;
}