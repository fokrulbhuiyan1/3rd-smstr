#include<iostream>
using namespace std;

void selectionsort(int arr[], int n)
{
    int s, mi, mv, i;

    for(s = 0; s < (n-1); s++)
    {
        mi = s;
        mv = arr[s];
        for(int i = s +1;i<n ; i++){
            if(arr[i]<mv){
                mv =arr[i];
                mi = i;
            }
        }
        arr[mi] = arr[s];
        arr[s] = mv;
    }
    for(i =0; i<n; i++ ){
        cout<< arr[i]<<"\t";
    }
}

int main()
{
    int arr[100],n,i,x;
    cout<< "enter size ";
    cin>> n;
    for(i = 0;i<n;i++){
        cout<<"enter value ";
        cin>>arr[i];
        cout<<endl;
    }
    selectionsort(arr,n);


}
