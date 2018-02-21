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

bool search(bstNode *root, int data){
	if(root == NULL){
		return false;
	}
	else if(root->data == data){
		return true;
	}
	else if(data <= root->data){
		return search(root->left,data);
	}
	else{
		return search(root->right,data);
	}
}

void inorder(bstNode *root){
	if(root != NULL){
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}

bstNode *findMinNode(bstNode *root){
	while(root->left != NULL){
		root = root->left;
	}
	return root;
}

bstNode *Delete(bstNode *root, int data){
	if(root == NULL){
		return root;
	}
	else if(data < root->data){
		root->left = Delete(root->left,data);
	}
	else if(data > root->data){
		root->right = Delete(root->right,data);
	}
	else{
		if(root->left == NULL && root->right == NULL){
			delete root;
			root = NULL;
		}
		else if(root->left == NULL){
			bstNode *temp = root;
			root = root->right;
			delete temp;
		}
		else if(root->right == NULL){
			bstNode *temp = root;
			root = root->left;
			delete temp;
		}
		else{
			bstNode *temp = findMinNode(root->right);
			root->data = temp->data;
			root->right = Delete(root->right,temp->data);
		}
	}
	return root;
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
	if(search(root,number) == true){
		cout<<"found !!"<<endl;
	}
	else{
		cout<<"not found :("<<endl;
	}

	cout<<"enter the delete elements: ";
	cin>>dm;
	root = Delete(root,dm);
	cout<<"inorder form is: ";
	inorder(root);
}
