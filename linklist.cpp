#include<iostream>
using namespace std;

typedef struct node{
    int data;
    node *next;
}*nodeptr;


node *head = NULL;
node *curr = NULL;

int add(int data){
	nodeptr newnode = new node;
		newnode->data=data;
		newnode->next=NULL;
		if(head == NULL){
			head = newnode;
		}
		else{
			curr->next = newnode;
		}
		curr = newnode;
}

void display(){
    nodeptr ptr = head;
    cout<<"Display the value ";
    while(ptr != NULL){
        cout<<ptr->data<<"  ";
        ptr = ptr->next;
    }
    cout<<endl;
}

void search(int s_data){
    nodeptr ptr = head;
    while(ptr != NULL){
        if(ptr->data == s_data){
            cout<<s_data<<" Found"<<endl;
            return;
        }
        ptr=ptr->next;
    }
    if(ptr==NULL){
        cout<<"Not Found"<<endl;
    }
}

void firstdata(int f_data){
    nodeptr newnode = new node;
    newnode->data=f_data;
    newnode->next=head;
    head=newnode;
}

void middledata(int m_data,int position){
    nodeptr newnode = new node;
    newnode->data=m_data;
    nodeptr ptr = head;
    int i=0;
    while(i<position-1 ){
        ptr = ptr->next;
        i++;
    }
    nodeptr temp = ptr->next;
    ptr->next=newnode;
    newnode->next = temp;
}

void lastdata(int l_data){
    nodeptr newnode = new node;
    newnode->data=l_data;
    newnode->next = NULL;
    nodeptr ptr = head;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next=newnode;
}

void firstdatadelete(){
    nodeptr ptr = head;
    head = ptr->next;
    delete(ptr);
}

void middledatadelete(int m_num){
	nodeptr ptr = head,dptr;
	while(ptr->next->data != m_num && ptr->next !=NULL ){
        ptr = ptr->next;
	}
	dptr = ptr->next;
	ptr->next = ptr->next->next;
	delete(dptr);
	}

void lastdatadelete(){
    nodeptr ptr = head,dptr;
    while(ptr->next->next != NULL){
        ptr = ptr->next;
    }
    dptr = ptr->next->next;
    ptr->next = NULL;
    delete(dptr);
}


int main(){
    int n,i,data,s_data,f_data,position,m_data,l_data,m_num;
    cout<<"Enter how many elements : ";
    cin>>n;
    for(i=0;i<n;i++){
            cout<<"Enter Value ";
        cin>>data;
        add(data);
    }
    display();
    cout<<"Enter the searching Data ";
    cin>>s_data;
    search(s_data);
    cout<<"Enter the First insert Data : ";
    cin>>f_data;
    firstdata(f_data);
    display();
    cout<<"Enter the Middle insert Data : ";
    cin>>m_data;
    cout<<"Enter position : ";
    cin>>position;
    middledata(m_data,position);
    display();
    cout<<"Enter the Last insert Data : ";
    cin>>l_data;
    lastdata(l_data);
    display();
    cout<<"After 1st node delete : "<<endl;
    firstdatadelete();
    display();
	cout<<"after mid node delete: ";
	cin>>m_num;
	middledatadelete(m_num);
	display();
	cout<<"after last node delete: ";
	lastdatadelete();
	display();

}
