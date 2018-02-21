#include<iostream>
using namespace std;

int main(){
    int i,noe=5;
    int a[10];
    if(noe<=10)
    {
    for(i=0;i<noe;i++)
        {
        cin>>a[i];
    }
    }
    for(i=noe;i>2;i--)
    {
        a[i] = a[i-1];
    }
    a[i] = a[noe];
    for(i=0;i<noe;i++)
    {
        cout<<a[i]<<endl;
    }
    noe++;
return 0;
}
