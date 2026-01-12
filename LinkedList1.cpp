#include <iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
	
	Node(int val){
		data = val;
		next = NULL;
	}
};

void push_front(Node* &head, int val){
	Node* newNode = new Node(val);
	newNode->next = head;
	head = newNode;
}

void push_back(Node* &head, int val){
	Node* newNode = new Node(val);
	Node* temp = head;
	
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = newNode;
	newNode->next = NULL;
}
void print(Node* head){
	Node* temp = head;
	while(temp!= NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
}

void pos(Node* head, int val){
	int index = 0;
	Node* temp = head;
	
	while(temp != NULL){
		if(temp->data == val){
			cout << index << endl;
			return;
		}
		
		temp = temp->next;
		index++;
	}
	cout << -1;
}
void pop_front(Node* &head){
	Node* temp = head;
	head = temp->next;
	temp->next = NULL;
	delete temp;
}

void pop_back(Node* &head){
	Node* temp = head;
	while(temp->next->next!= NULL){
		temp = temp->next;
	}
	temp->next = NULL;
}

int middle(Node* &head){
	Node* slow = head;
	Node* fast = head;
	
	while(fast!= NULL && fast->next!= NULL){
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow->data;
}

void reverse(Node* &head){
	Node* prev = NULL;
	Node* curr = head;
	Node* next = NULL;
	
	while(curr != NULL){
		next = curr->next;
		curr->next = prev;
		
		prev = curr;
		curr = next;
		
	}
	head = prev;
	print(curr);
}

void insert(Node* &head, int val, int pos){
	Node* newNode = new Node(val);
	
}
int main(){
	Node* head = NULL;
	
	push_front(head, 10);
	push_front(head, 20);
	push_front(head, 30);
	
	push_back(head, 40);
	push_back(head, 50);
	
	pop_front(head);
	
	push_front(head, 80);
	pop_back(head);
	
	push_front(head,100);
	push_back(head, 30);
	
	cout << middle(head) << endl;
	print(head);
	cout << endl;
	pos(head, 40);
	
	reverse(head);
	print(head);

	return 0;
}
