#include<iostream>
#include<conio.h>
using namespace std;
int main(){

    int i;
    int a[5];
cout<<" Enter 5 ints\n";
for(i=0;i<5;i++){
    cin>>a[i];
    for(i=0;i<5;i++){
        cout<<endl<<i<<a[i]<<i<<a[i];
    }
    getch();
cout<< "hello world"<<endl;
}
cout<<endl<<endl;
for(i=4;i>0;i--){
    cout<<i<<a[i];
    getch();
}



return 0;


}
