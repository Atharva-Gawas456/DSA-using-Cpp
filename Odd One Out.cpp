#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	while (n--){
		int a, b, c, ans;
		cin >> a >> b >> c;
		if (a != b && a != c){
			ans = a;
		}
		else if (b != a && b != c){
			ans = b;
		}
		else{
			ans = c;
		}
		cout << ans << endl;
	}
	return 0;
}