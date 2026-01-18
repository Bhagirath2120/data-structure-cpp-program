#include<iostream>
using namespace std;

int main(){

    int r;
    cout<<"Enter * value: ";
    cin>>r;

    for(int i = 1; i <= r; i++){

        for(int j = 1; j <= r - i; j++){
            cout<<" ";
        }
        for(int k = 1; k <= i; k++){
            cout<<"* ";
        }

        cout<<endl;

    }

    for(int x = 1; x <= r - 1; x++){

        for(int l = 1; l <= x; l++){
            cout<<" ";
        }
        for(int m = 1; m <= r-x; m++){
            cout<<"* ";
        }

        cout<<endl;

    }







}