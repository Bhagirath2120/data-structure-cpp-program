//incomplete


#include<iostream>
using namespace std;
int main()
{
   int arr; 
    int a[5],b[5],i;
    int n= sizeof(a)/sizeof(a[5]);
    cout<<"Enter elements: ";

    for( i=0;i<5;i++)
    
   cin>>a[i];

cout<<"Enter position to swap: ";
cin>>n;
for(i=4;i>n;i--)
a[i]=a[i-1];
cout<<"Enter new value: ";
cin>>a[i];

for(int j=0;j<4;j++)
cout<<a[j-i]<<endl;
    



    return 0;

}