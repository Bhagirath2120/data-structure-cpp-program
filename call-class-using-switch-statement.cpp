#include<iostream>
#include<conio.h>
using namespace std;
class Operation{
    public:
    int answer;
    float Answer;

    int Addition(int x,int y){
       answer=x+y;
       cout<<answer;
       return 0;
    }
    int Substraction(int x, int y){
      answer=x-y;
      cout<<answer;
      return 0;
    }
    int Division(int x,int y){
        Answer=(float)x/y;
        cout<<Answer;
        return 0;
    }
    int Multiplication(int x, int y){
        answer=x*y;
        cout<<answer;
        return 0;
    }


};

int main(){
int a,b;
char operation;
cout<<"Enter first Num: ";
cin>> a;
cout<<"Enter second Num:";
cin>>b;
cout<<"Enter operation(+,-,/,*): ";
cin>>operation;
Operation call;
switch(operation){

    case '+': call.Addition(a,b);
              break;

    case '-': call.Substraction(a,b);
              break;

    case '/': call.Division(a,b);
              break;
            
    case '*': call.Multiplication(a,b);        
              break;
    default:
             cout<<"Invalid Input";
              
}

getch();


}

