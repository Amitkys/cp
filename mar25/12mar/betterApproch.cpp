// C++ program to find union of two sorted arrays using Set

#include <iostream>
#include <set>
#include <vector>
using namespace std;

vector<int> findUnion(vector<int> &a, vector<int> &b) {
    set<int> st;
    // put all element of a[] into st
    for(int i = 0; i < a.size(); i++) {
        st.insert(a[i]);
    }

    // put all element of b[] into st
    for(int i = 0; i < b.size(); i++){
        st.insert(b[i]);
    }

    // iterate st to fill the result array

    vector<int> res;

    for(auto it: st){
        res.push_back(it);
    }

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
