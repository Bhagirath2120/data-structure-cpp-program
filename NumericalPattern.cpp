#include<iostream>

using namespace std;

int main(){
int r, c;

cout<<"Enter row: ";
cin>>r;
cout<<"Enter Column: ";
cin>> c;

cout<<endl;

for(int i =1; i <=r; i++){

    for(int j =1; j<=i; j++){
        cout<<"_";
    }

    for(int k = c-i ; k >=1 ; k--){
        cout<<"*";
    }

    cout<<endl;

}
}