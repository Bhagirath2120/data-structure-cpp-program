#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int n;
    cout<< "Enter Number : ";
    cin>> n;

    // for(int i=1; i<=n; i++){

    //     if(i %3 == 0) { 
    //         continue;
    //     }
    //     cout<< i<<endl;
    // }
    int num =1;
    while( num <= n){

        if(num%3 ==0){
            num++;
            continue;

        }
        cout<<num<<endl;
        num++;
        cout<<"hello"<<endl;
    }



}