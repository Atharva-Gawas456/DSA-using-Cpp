#include <iostream>
using namespace std;

#define MAX 5
class Stack{
	int arr[MAX];
	int top;
public:
	Stack(){
		top = -1;
	}
	
	void push(int val){
		if(top == MAX - 1){
			cout << "Stack is Full\n";
			return;
		}
		arr[++top] = val;
	}
	void pop(){
		if(top == -1){
			cout << "Stack is Empty\n";
			return;
		}
		top--;
	}
	int seek(){
		if (top == -1){
			cout << "Stack is Empty\n";
			return -1;
		}
		return arr[top];
	}
	
	bool isEmpty(){
		return top == -1;
	}
	bool isFull(){
		return top == MAX - 1;
	}
	
	void print(){
		for(int num: arr){
			cout << num << " ";
		}
	}
};

int main(){
	
	Stack st;
	
	st.isEmpty();
	st.pop();
	st.seek();
	
	st.push(10);
	st.push(20);
	
	st.isEmpty();
	st.pop();
	st.seek();
	
	st.print();
	return 0;
}