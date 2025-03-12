// C++ program to find union of two sorted arrays 
// using nested loops

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findUnion(vector<int>& a, vector<int>& b) {
  // declared  a resultent array 'ress'
  vector<int> res;

  // traverse throush a[]
  for(int i = 0; i < a.size(); i++) {
    int j;
  // traverse through res[] if res[j] and a[i] matches, then break the loop
    for(j = 0; j < res.size(); j++) {
      if(res[j] == a[i]) {
        break;
      }
    }
    // if loop not broken, meaning, j have traversed entire res[]
    // so size of j will be equale to res.size();
    // if this case, push new element a[i] into res[]
    if(j == res.size()) {
      res.push_back(a[i]);
    }
  }


  // same will be happend to b[]

  for(int i = 0; i < b.size(); i++){
    int j;
    for(j = 0; j < res.size(); j++) {
      if(res[j] == b[i]){
        break;
      }
    }
    if(j == res.size()) {
      res.push_back(b[i]);
    }
  }

  // sort res[]

  sort(res.begin(), res.end());
  return res;
}

int main() {
    vector<int> a = {1, 1, 2, 2, 2, 4};
    vector<int> b = {2, 2, 4, 4};

    vector<int> res = findUnion(a, b);
  
    for (int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";
      cout << endl;

    return 0;
}
