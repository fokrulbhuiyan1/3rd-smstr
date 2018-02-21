#include<iostream>
using namespace std;

int top = -1;
int size = 5;
int stack[5];

void push (int x){
	if (top>=size-1)
	{
		cout<<"stack is full"<<endl;
	}
	else{
		top++;
		stack[top]= x;
	}
}
char pop(){
	if (top<0)
	{
		cout<<"stack is empty"<<endl;
	}
	else{
		char x = stack[top];
		top--;
		return x;
	}
}
void display(){
	int i;
	for(i = top;i>=0;i--){
		cout<<stack[i]<<endl;
	}
}

int main(){
	push (4);
	push (5);
	push (6);
	push (7);
	display();
	cout<<endl;
	pop();
	display();
}
