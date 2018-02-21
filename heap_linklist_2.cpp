#include<iostream>
using namespace std;

typedef struct node{
    int data;
    node *left;
    node *right;
}*np;

node *root = NULL;
//node *curr = NULL;
int n = 0;

void insert(int data){
    np newnode = new node;
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    if(root == NULL){
        root = newnode;
    }
    else{
        if(data > root->data && root->left == NULL){
            np ptr = root;
            root = newnode;
            root->left=ptr;
        }
        else if(data > root->data && root->left != NULL)
            {
            np ptr = root;
            root = newnode;
            root->right=ptr;
        }
        else if(data <= root->data && root->left == NULL){
            root->left=newnode;
        }
        else if(data <= root->data && root->left != NULL)
            {
            root->right=newnode;
        }
    }
    root = newnode;
    n+=1;
}

void display(node *root){
    if(root!=NULL){
		cout<<root->data<<" ";
		display(root->left);
		display(root->right);
    }
}
int main (){
    int n,data;
    cout<<"Enter number of elements : ";
    cin>>n;
    cout<<"Enter the elements : "<<endl;
    for(int i = 0;i<n;i++){
        cin>>data;
        insert(data);
    }
    display(root);
}
