#include<iostream>
using namespace std;


struct ListNode{
	int val;
	ListNode* prev;
	ListNode* next;
	
	ListNode(int data){
		val = data;
		prev = NULL;
		next = NULL;
	}
};

void push_front(ListNode* &head, int val){
	ListNode* newNode = new ListNode(val);
	if (head == NULL){
		head = newNode;
	}else{
		
		newNode->next = head;
		head->prev = newNode;
		head = newNode;
	}
}

void push_back(ListNode* &head, int val){
	ListNode* newNode = new ListNode(val);
	ListNode* temp = head;
	if (head == NULL){
		head = newNode;
	}else{
		while (temp->next != NULL){
			temp = temp->next;
		}
		newNode->prev = temp;
		temp->next = newNode;
	}
	
}

void print(ListNode* &head){
	ListNode* temp = head;
	while(temp != NULL){
		cout << temp->val << " ";
		temp = temp->next;
	}
}

void pop_front(ListNode* &head){
	if(head == NULL){
		cout << "List is Empty\n";
		return;
	}
	ListNode* temp = head;
	
	head = temp->next;
	if (head != NULL){
		head->prev = NULL;
	}
	temp->next = NULL;
	delete temp;
}

void pop_back(ListNode* head){
	if (head == NULL){
		cout << "List is empty\n";
		return;
	}
	if (head->next == NULL){
		delete head;
		head = NULL;
		return;
	}
	ListNode* temp = head;
	
	while(temp->next!= NULL){
		temp = temp->next;
	}
	temp->prev->next = NULL;
	delete temp;
}
int main(){
	ListNode* head = NULL;
	
	push_front(head, 10);
	push_front(head, 20);
	push_front(head, 40);
	push_front(head, 70);
	
	push_back(head, 80);
	push_back(head, 60);
	
	pop_front(head);
	
	pop_back(head);
	print(head);
	
	return 0;
}