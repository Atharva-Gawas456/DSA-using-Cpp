#include<iostream>
using namespace std;

#define SIZE 5
int arr[SIZE];
int front = -1;
int rear = -1;

void enqueue(int val){
	if(rear == SIZE - 1){
		cout << "Queue Overflow\n";
		return;
	}
	if(front == -1){
		front = 0;
	}
	rear++;
	arr[rear] = val;
}

void dequeue(){
	if(front == -1 || front > rear){
		cout << "Queue Undeflow\n";
		return;
	}
	front++;
}
void print(){
	for(int i = front; i <= rear; i++){
		cout << arr[i] << " ";
	}
}

int main(){
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	
	dequeue();
	
	print();
	return 0;
}