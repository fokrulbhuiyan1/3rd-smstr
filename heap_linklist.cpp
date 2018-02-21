#include<iostream>
using namespace std;

typedef struct node{
    int data;
    node *left;
    node *right;
}*np;

node *root = NULL;
node *curr = NULL;


void insert(int data){
    np newnode = new node;
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    if(root == NULL){
        root = newnode;
    }
    else{

        if(data > curr->data && curr->left == NULL){
            np ptr = curr;
            curr = newnode;
            curr->left=ptr;

        }
        else if(data > curr->data && curr->left != NULL)
            {
            np ptr = curr;
            curr = newnode;
            curr->right=ptr;
        }
        else if(data <= curr->data && curr->left == NULL){
            curr->left=newnode;

        }
        else if(data <= curr->data && curr->left != NULL)
            {
            curr->right=newnode;

        }
    }
    curr = newnode;

}

void display(node *curr){
    if(curr!=NULL){
		cout<<curr->data<<" ";
		display(curr->left);
		display(curr->right);
    }
}
int main (){
    int noe,data;
    cout<<"Enter number of elements : ";
    cin>>noe;
    cout<<"Enter the elements : "<<endl;
    for(int i = 0;i<noe;i++){
        cin>>data;
        insert(data);
    }
        np ptr = root;
    display(ptr);
}
