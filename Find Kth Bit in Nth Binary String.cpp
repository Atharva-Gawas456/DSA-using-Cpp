#include<bits/stdc++.h>
using namespace std;

int main(){
	int a = 10;
	int b = 15;
	
	a = a + b - (b = a);
	
	cout << a << endl;
	cout << b;
	return 0;
	
}