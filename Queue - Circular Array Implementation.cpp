#include<iostream>
using namespace std;

#define SIZE 5

int arr[SIZE];
int front = -1;
int rear = -1;


void enqueue(int val){
	if((rear + 1) % SIZE == front){
		cout << "Queue Full\n";
		return;
	}
	if (front == -1){
		front = rear = 0;
	}else{
		rear = (rear + 1)%SIZE;
	}
	arr[rear] = val;
}

void dequeue(){
	if (front = -1){
		cout << "Queue Empty\n";
		return;
	}
	if(front == rear){
		front = rear = -1;
	}else
		front = (front + 1)%SIZE;
}
int main(){
	
	enqueue(10);
	enqueue(20);
	enqueue(30);
	
	dequeue();
	return 0;
}