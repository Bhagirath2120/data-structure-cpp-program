#include<iostream>
using namespace std;

int main(){

int n ; 
cout<<"Enter Number : ";
cin>> n;
int count = 0;
int ans =0;


// while loop 
// while(n>0){

//       ans += n%10;
//       n /= 10;
  
//     count++;
// }


// for loop
for(; n>0; n/=10)
{
    ans += n % 10;
    count++;

}
cout<<"total digits : "<<count<<endl;
cout<<"Sum of digits: "<<ans;



}