// problem link : https://www.codechef.com/problems/STONES

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while(t--){
        string str1, str2;
        cin >> str1 >> str2;
        int ans = 0;
        
        map<char, int> mp;
        
        for(int i = 0; i < str1.size(); i++){
            mp[str1[i]]++;
        }
        
        for(int i = 0;  i < str2.size(); i++){
            if(mp[str2[i]] > 0){
                ans++;
            }
        }
        cout << ans << endl;
    }

}

