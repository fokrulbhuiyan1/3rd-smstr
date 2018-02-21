#include<iostream>
using namespace std;

void heapify(int arr[],int n,int i){
    int large = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left < n && arr[left]>arr[large]){
        large = left;
    }
    if(right < n && arr[right]>arr[large]){
        large = right;
    }
    if(large != i){
    int temp = arr[large];
    arr[large] = arr[i];
    arr[i] = temp ;
    heapify(arr,n,large);
    }

}

void show(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n,arr[100];
    cout<< "Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements "<<endl;
    for(int i = 0;i<n;i++){
    cin>>arr[i];
    }
    for(int i=n/2-1;i>=0;i--){
    heapify(arr,n,i);
    }
    show(arr,n);
}
