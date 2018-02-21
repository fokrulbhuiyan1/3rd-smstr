#include<iostream>
using namespace std;

int front=-1;
int rear=-1;
const int size=5;
int queue[size];

int enqueue(int x){
	int next_rear=(rear+1)%size;
	if(next_rear == front){
		cout<<" queue is full. "<<endl;
	}
	else{
        rear++;
		queue[rear]=x;
		rear=next_rear;
	}
}
int dequeue(){
	if(front == rear){
		cout<<" queue is empty."<<endl;
	}
	else{
	if(front==-1){
        front++;}
		front=(front+1)%size;
		cout<<" front: "<<front<<endl;
	}
	return front;
}
void display(){
cout<<" the queue elements are: ";
	for(int i=front;i!=rear;i=(i+1)%size){
		cout<<queue[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	enqueue(3);
	display();
	enqueue(4);
	display();
	enqueue(7);
	display();
	enqueue(2);
	display();
	enqueue(5);
	display();

    dequeue();
	display();
    dequeue();
	display();
    dequeue();
	display();
    dequeue();
	display();
    dequeue();
	display();
    dequeue();
	display();
	enqueue(111);
	display();


}
