#include<bits/stdc++.h>
using namespace std;

string prime(int n){
	for(int i = 2; i * i <= n; i++){
		if(n % 2 == 0){
			return "Non Prime";
		}
	}
	return "Prime";
}

bool isArmstrong(int n){
	int a = n;
	int len = (int)(log10(n) + 1);
	int sum = 0;
	while(n != 0){
		int digit = n % 10;
		
		sum += pow(digit, len);
		n /= 10;
	}
	return sum == a;
}

int gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b, a%b);
}

int gcdn(int a, int b){
	int range = min(a, b);
	
	for(int i = 2; i <= range; i++){
		if(a % i == 0 && b % i == 0){
			cout << i << endl;
		}
	}
	return -1;
}

int lcm(int a, int b){
	int g = gcd(a, b);
	
	return a*b/g;
}

int reverseN(int n){
	int rev = 0;
	
	while(n != 0){
		rev = rev*10 + n%10;
		n /= 10;
	}
	return rev;
}
int main(){
//	cout << isArmstrong(153);
//
//	cout << gcd(20, 28) << endl;
//	cout << lcm(20, 28);

	cout << reverseN(56785);
	return 0;
}