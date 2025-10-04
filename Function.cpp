#include <iostream>
using namespace std;

//int minimum(int a, int b){
//	if (a < b){
//		return a;
//	}
//	else if (a > b){
//		return b;
//	}
//	else{
//		return 0;
//	}
//}

//void sumn(int n){
//	int sum = 0;
//	for(int i = 0; i <= n; i++){
//		sum += i;
//	}
//	cout << sum;
//}

//void factorialn(int n){
//	int fac = 1;
//	for(int i = 1; i <= n; i++){
//		fac *= i;
//	}
//	cout << fac;
//
int sumdigits (int n){
	int sum = 0;
	while (n > 0){
		sum = sum + n % 10;
		n /= 10;
	}
	return sum;
}

int main(){
	cout << sumdigits(2356);

	return 0;
}