#include<iostream>
using namespace std;

void sort(int arr[],int n){
    int temp;
    for (int i = 0; i<n;i++){
        for (int j = i+1; j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j]=temp;
            }
        }
    }
}

int binarySearch(int arr[],int b,int n,int sn){
    while(b<=n){
        int m = b+(n-b)/2;
        if(arr[m] == sn){
            return m;
        }
        if(sn>arr[m]){
            b = m + 1;
        }
        else{
            n = m - 1;
        }
    }
    return -1;
}

int main(){
    int n,arr[100],sn,result;
    cout<< "Enter the number of elements ";
    cin>>n;
    cout<< "Enter the elements "<<endl;
    for(int i = 0;i<n;i++){
    cin>>arr[i];
    }
    sort(arr,n);
    for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl<<"Enter the searching element: ";
    cin>>sn;
    result = binarySearch(arr,0,n,sn);
    if(result == -1){
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<"Found at "<<result+1<<endl;
    }
}
