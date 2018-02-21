#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int *i;
    i=&arr;
    cout<<*i+1<<endl;
    cout<<*(i+1)<<endl;

}
