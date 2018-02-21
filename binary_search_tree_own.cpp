#include<iostream>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};



node *insert(node *root,int data){
    node *newnode = new node;
    newnode->data = data;
    newnode->left = newnode->right = NULL;
    if(root == NULL){
        root = newnode;
    }
    else if(data < root->data){
        root->left = insert(root->left,data);
    }
    else{
        root->right = insert(root->right,data);
    }
    return root;
}

void inorder(node *root){
	if(root != NULL){
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}

void search(node *root, int data){
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

node *findmin(node *root){
    if(root->left !=NULL){
        root = root->left;
    }
    return root;
}

node *deletenode(node *root, int dn){
    if(root == NULL){
            return root;
    }
    else if(dn<root->data){
        root->left = deletenode(root->left,dn);
    }
    else if(dn>root->data){
        root->right = deletenode(root->right,dn);
    }
    else{
        if(root->left == NULL && root->right ==NULL){
            delete root;
            root=NULL;
        }
        else if(root->left==NULL){
            node *temp = root;
            root = root->left;
            delete temp;
        }
        else if(root->right==NULL){
            node *temp = root;
            root = root->right;
            delete temp;
        }
        else{
            node *temp = findmin(root->right);
            root ->data = temp->data;
            root->right = deletenode(root->right,temp->data);
        }
    }
    return root;
}

int main(){
    node *root = NULL;
    int data,n,sn,dn;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i = 0;i<n;i++){
        cin>>data;
        insert(root,data);
    }

    inorder(root);

    cout<<"Enter search element: ";
    cin>>sn;
    search(root,sn);

    cout<<"Enter the delete element: ";
    cin>>dn;
    deletenode(root,dn);
    inorder(root);
}
