#include<iostream>
#include<queue>
using namespace std;

int main(){
	
	queue<int> q;
	
	q.push(10);
	q.push(20);
	q.push(30);
	
	for(int n: q){
		cout << n << " ";
	}
	q.pop();
	for(int n: q){
		cout << n << " ";
	}
	return 0;
}