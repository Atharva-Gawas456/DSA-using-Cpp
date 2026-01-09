#include <iostream>
using namespace std;

struct ListNode{
	int val;
	ListNode* next;
};

ListNode* top = NULL;

void push(int val){
	ListNode* newNode = new ListNode();
	newNode->val = val;
	newNode->next = top;
	top = newNode;
}

void pop(){
	if (top == NULL){
		cout << "List is Empty\n";
		return;
	}else{
		ListNode* temp = top;
		top = top->next;
		delete temp;
	}
}

void peek(){
	if(top == NULL){
		cout << "List is Empty\n";
		return;
	}
	cout << top->val;
}
int main(){
	push(40);

    peek();
    pop();
    peek();
	return 0;
}