
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter number: ";
    cin>>n;

    int count =0;

//    for loop

    for(; n>0; n/=10 ) {

        count++;
    }

    cout<<"Total Digits = "<<count;

    //while loop
    // while(n>0){
    //     n /=10;
    //     count++;
    // }
    // cout<<"Total Digits = "<<count;





}