#include<iostream>
using namespace std;

int main(){
    int n, f = 1, x = 1, test = 1;

    cout<<"Enter a number: ";
    cin>>n;


    for(int i = 1; i <= n; i++){
            f *= i;
        cout<<"Factorial of " <<  i << " : "<< f<<endl;
        }
         


       // while loop

        f =1;
    //    while(n>=test){

    //        f *=x;

    //        cout<<"Factorial of " << x << " : " << f;
    //        n--;
    //         x++;
    //    }



}