#include <iostream>
using namespace std;
int getSquareRoot(int n) {
	int result = 1;
	while (result * result <= n){
		result++;
	}
	return result - 1;
}
int main() {
	int result = getSquareRoot(16);
	return 0;
}