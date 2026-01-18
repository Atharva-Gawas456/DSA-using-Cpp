#include<iostream>
#include<string>

using namespace std;

int main(){
	int t;
	cin >> t;
	
	while(t--){
		string s;
		cin >> s;
		int x = stoi(s);
		int first = x / 1000;
		int second = x % 1000;
		int sum1 = 0;
		int sum2 = 0;
		while(first!=0){
			sum1 = sum1 + first % 10;
			first = first / 10;
		}
		while(second!=0){
			sum2 = sum2 + second % 10;
			second = second / 10;
		}
		if(sum1 == sum2){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
	return 0;
}