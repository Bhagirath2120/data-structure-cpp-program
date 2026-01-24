#include<iostream>
 
using namespace std;

int main(){

    int n;
    cout<<" Enter Number: ";
    cin>> n;

    int ans =0;
    int test =1;


    for loop
    for( int i = 0; i <= n; i++){
        if (i % 2 == 0){
            ans -= i;
        }
          else{
                 ans+=i;
        }

    }

    // while loop

    // while(n>=test){
    //     if(n % 2 == 0){
    //         ans -= n;
    //     }
    //     else{
    //         ans += n;
    //     }
    //     n--;
    // }
    cout<< ans;
}
