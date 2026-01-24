#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<" Enter a number : ";
    cin>> n;
     int rev = 0;


    //  while(n>0){
    //      rev = (rev * 10)+ (n % 10);
    //      n /= 10;
    //  }


   // for loop

   for(; n>0; n/=10){

    rev = (rev * 10) + ( n % 10);

   }
     
   
   cout<<rev;

}