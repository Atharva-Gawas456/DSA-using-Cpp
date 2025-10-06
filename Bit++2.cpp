#include <iostream>
using namespace std;

int main(){
	int zero = 0;
	int n;
	cin >> n;
	string s;
	for(int i = 0; i < n; i++){
		cin >> s;
		if (s == "X++" || s == "++X" || s == "x++" || s == "++x"){
			zero++;
		}
		else{
			zero--;
		}
		
	}
	cout << zero;
	return 0;
}