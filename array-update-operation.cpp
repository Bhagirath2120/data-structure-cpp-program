#include<iostream>
#include<conio.h>
using namespace std;

int main(){
 int arr[5];
 int i,n;
 for(i=0;i<5;i++)
 cin>>arr[i];
 cout<<"Enter position to update:";
 cin>>n;
 cout<<"Enter New Element:";
 cin>>arr[n];
 for(i=0;i<5;i++)
 cout<<arr[i]<<endl;

 getch();

//return 0;

}