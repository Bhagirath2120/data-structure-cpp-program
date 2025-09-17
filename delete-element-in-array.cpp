#include<iostream>
using namespace std;
int main(){
int n;
int a[5],i;
{
    cout<<"Enter array element: ";
for(i=0;i<5;i++)
cin>>a[i];
cout<<"enter position to delete: ";
cin>>n;
for(i=n;i<4;i++)
a[i]=a[i+1];
for(i=0;i<4;i++)
cout<<a[i]<<endl;




}






}