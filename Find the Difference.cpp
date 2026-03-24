#include <bits/stdc++.h>
using namespace std;

int main(){
	string s = "1234567890";
	
	for(int i = s.size() - 1; i >= 0; i--){
		cout << int(s[i]) << endl;	
	}
	return 0;
}