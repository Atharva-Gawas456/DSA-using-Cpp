#include <iostream>
using namespace std;

int binaryNum(int n){
	int ans = 0;
	int pow = 1;
	while (n > 0){
		int rem = n % 2;
		n = n / 2;
		ans += rem * pow;
		pow = pow * 10;
	}
	return ans;
}

int numBinary(int n){
	int ans = 0;
	int pow = 1;
	while (n > 0){
			int rem = n % 10;
		ans += rem * pow;
		n /= 10;
		pow *= 2;
	}
	return ans;
}

int main(){
	cout << numBinary(101010);
	return 0;
}