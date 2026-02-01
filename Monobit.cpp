#include<bits/stdc++.h>
using namespace std;

int isMonobit(int n){
	
	int count = 1;
	
	for(int i = 1; i <= n; i++){
		if((i & (i+1))== 0){
			count++;
		}
	}
	return count;
}

int main(){
	int n = 1;
	cout << isMonobit(n);
	return 0;
}