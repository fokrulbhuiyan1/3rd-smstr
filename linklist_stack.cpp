#include<iostream>
using namespace std;

typedef struct node{
	int data;
	node *next;
}*nodeptr;


node *head = NULL;
node *curr = NULL;

void push(int data){
	nodeptr newNode = new node;
	newNode->data = data;
	newNode->next = NULL;
	if(head == NULL){
		head = newNode;
	}
	else{
		curr->next = newNode;
	}
	curr = newNode;
}

int pop(){
	nodeptr ptr = head,dptr;
	while(ptr->next->next != NULL){
		ptr = ptr->next;
	}
	dptr = ptr->next;
	ptr->next = NULL;
	delete (dptr);
	//if i use return dptr then it shows error but why?
}
void display(){
	nodeptr ptr = head;
	cout<<" The stack is: ";
	while(ptr != NULL){
		cout<<ptr->data<<" ";
		ptr = ptr->next;
	}
	cout<<endl;
}

int main()
{
	int n,data,idl;
	cout<<" Enter the elements number: ";
	cin>>n;
	cout<<" Enter the elemnts: ";
	for(int i=0;i<n;i++){
		cin>>data;
		push(data);
	}
	display();
    pop();
	display();
}
