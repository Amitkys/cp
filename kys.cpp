#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    string c;

    cin >> a;
    cin >> b;
    cin >> c;

    if(c == "sum"){
        cout << a+b;
    }else if(c == "sub"){
        cout << a-b;
    }else if(c == "mul"){
        cout << a * b;
    }else if(c == "div"){
        cout << a / b;
    }else{
        cout << "wrong input";
    }
    cout << endl;
}
