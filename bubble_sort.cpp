#include <iostream>
using namespace std;

void swap(int x, int y){
    int temp;
    temp = num[j];
    num[j]= num[j+1];
    num[j+1]=temp;
}

int main (){
    int i, j, n=5,count;
    int num[10]={8,6,4,3,2,9,12,19,15,17};
    for(i=0;i<n;i++){
            count=0;
        for(j = 0;j<n-1;j++){
            if(num[j+1]>num[j]){
                swap(num[j+1],num[j]);
                count = 1;
            }
        }
    if(count = 0) break;
    }
return 0;
}
