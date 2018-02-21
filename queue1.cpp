#include<iostream>
using namespace std;

int front = -1;
int rear = -1;
int size = 5;
int element = 0;
int queue[5];

void enqueue(int x){
	if (rear>=size-1)
	{
		cout<<"queue is full"<<endl;
	}
	else{
		rear++;
		queue[rear]= x;
		if (front== -1){
			front++;

		}
        element++;
	}
}

int dequeue(){
	if (front == -1/* || front>rear*/){
		cout<<"Queue is empty"<<endl;
	}
	else{
		int x = queue[front];
		front ++;
		element--;
		return x;
	}
}
void display(){
	int i;
	for(i = front;i<=rear;i++){
		cout<<queue[i]<<endl;
	}
}

int main(){
		enqueue(2);
		enqueue(3);
	enqueue(4);
		enqueue(5);
			enqueue(6);
		display();
		cout<<endl;
	dequeue();
		dequeue();
	display();
}
