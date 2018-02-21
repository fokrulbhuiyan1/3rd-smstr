#include <iostream>
using namespace std;

void swap(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main (){
    int i, j, n=10,count,temp;
    int num[10]={8,6,4,3,2,9,12,19,15,17};
    for(i=0;i<n;i++){
            count=0;
        for(j = i+1;j<n;j++){
            if(num[i]>num[j]){
                temp = num[i];
                num[i]=num[j];
                num[j]=temp;
                count = 1;
            }
        }
    if(count = 0) break;
    }
for(i =0;i<n;i++){
    cout<<num[i]<<" ";
}
return 0;
}
