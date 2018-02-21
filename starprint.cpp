#include<iostream>
using namespace std;

int main()
{
int i,j,k;
for(i=5;i>=1;i--)
{
for(j=5;j>i;j--)
{
cout<<" ";
}
for(k=1;k<(i*2);k++)
{
cout<<"*";
}
cout<<"\n";
}

for(i=1; i<=5; i++)
{
for(j=4; j>=i; j--)
{
cout<<" ";
}
for(k=1; k<=(2*i-1); k++)
{
cout<<"*";
}
cout<<"\n";
}


return 0;
}
