#include<iostream>
using namespace std;

struct bstNode{
	int data;
	bstNode *left;
	bstNode *right;
};

bstNode *insert(bstNode *root, int data){
    	bstNode *newNode = new bstNode;
	newNode->data = data;
	newNode->left = newNode->right =NULL;
	if(root == NULL){
		root = newNode;
	}
	else if(data <= root->data){
		root->left = insert(root->left,data);
	}
	else{
		root->right = insert(root->right,data);
	}
	return root;
}

void search(bstNode *root, int data){
	if(root!=NULL){
	if(root->data == data){
            cout<<"Found";
    }
    else if(root->data > data){
            search(root->left,data);
    }
    else{
            search(root->right,data);
    }
	}
    else{
        cout<<"Not found";
    }
}

void inorder(bstNode *root){
	if(root != NULL){
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}
int main()
{
	bstNode *root = NULL;
	int n,data,number,dm;
	cout<<"enter the elements number: ";
	cin>>n;
	cout<<"enter the elements: ";
	for(int i=0;i<n;i++){
		cin>>data;
		root=insert(root,data);
	}

	inorder(root);

	cout<<endl<<"enter search elements: ";
	cin>>number;
    search(root,number);


}
