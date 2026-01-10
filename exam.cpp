#include<iostream>
using namespace std;

class swap{
    public:
 int *x,*y,*z;

 int hello(int a,int b){
    *x=a;
    *y=b;
    *z=*x;
    *x=*y;
    *y=*z;
    cout<<"a="<<*y<<" b="<<x<<endl;
    return 0;

 }

};
int main(){

    swap a1;

    a1.hello(10,23);
    return 0;

}