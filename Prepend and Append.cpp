#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	
	while(t--){
		int n;
		string s;
		cin >> n >> s;
		
		int left = 0;
		int right = n - 1;
		
		while(left < right){
			if(s[left] != s[right]){
				left++;
				right--;
			}else{
				break;
			}
		}
		cout << (right - left + 1) << endl;
	}
	return 0;
}