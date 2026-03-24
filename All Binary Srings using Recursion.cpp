#include<bits/stdc++.h>
using namespace std;

string res = "";

void generateBin(vector<string> given, vector<string> &ans, string s, int n){
	
	for(int i = 0; i < n && ans[i] == s; i++){
		
	}
	
	generateBin(given, ans, s + "0", n);
	generateBin(given, ans, s + "1", n);
}

int main(){
	vector<string> given = {"01","10"};
	vector<string> ans;
	generateBin(given, ans, "", 2);
	
//	for(string s:ans){
//		cout << s <<"\n";
//	}

	cout << res;


	return 0;
}