// C++ program to find union of two sorted arrays using 
// merge step of merge sort

#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int>& a,  vector<int>& b) {
    int n1 = a.size();
    int n2 = b.size();

    int i = 0;
    int j = 0;
    vector<int> unionArray;

    while(i < n1 && j < n2) {
        if(a[i] < b[j]) {
            if(unionArray.size() == 0 || unionArray.back() != a[i]) {
                unionArray.push_back(a[i]);
            }
            i++;
        } else {
            if(unionArray.size() == 0 || unionArray.back() != b[j]) {
                unionArray.push_back(b[j]);
            }
            j++;
        }
    }

    while(i < n1) {
        if(unionArray.size() == 0 || unionArray.back() != a[i]){
            unionArray.push_back(a[i]);
        }
        i++;
    }

    while(j < n2) {
        if(unionArray.size() == 0 || unionArray.back() != b[j]) {
            unionArray.push_back(b[j]);
        }
        j++;
    }
    return unionArray;
}

int main() {
  
    vector<int> a = {1, 1, 2, 2, 2, 4};
    vector<int> b = {2, 2, 4, 4};
  
    vector<int> res = findUnion(a, b);
    for (int x : res) {
        cout << x << " ";
    }
    cout << endl;
}
