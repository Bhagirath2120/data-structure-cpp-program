//incomplete


#include<iostream>
using namespace std;
int main()
{
   int arr; 
    int a[5],b[5],i;
    int n= sizeof(a)/sizeof(a[5]);
    for( i=0;i<5;i++)
    
   cin>>a[i];

cout<<"Enter position to swap: ";
cin>>n;
for(i=4;i>n;i--)
a[i]=a[i-1];
cout<<"Enter new value: ";
cin>>a[n];
a[n]=b[n];
for(i=0;i<4;i++)
cout<<b[i]<<endl;
    



    return 0;

}