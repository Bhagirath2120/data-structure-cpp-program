#include <conio.h>
#include <iostream>
using namespace std;

class bank
{
public:
    int a;
    string Name;

    string customer(string Name)
    {
        this->Name = Name;
        cout << "Customer name:- " << Name << endl;
    }

    int Withdrawal(int Ammount)
    {
        a = Ammount;
        cout << "Withdrawal Ammount:- -" << a;
    }

    int Deposit(int Ammount)
    {
        a = Ammount;
        cout << "Diposit Ammount:- +" << a;
    }
};

int main()
{
    bank obj;
    int option, ammount;
    string  B;
    cout << "Enter your name:- ";
    cin >> B;
    cout << "Press 1 to withdrawal Money " << endl
         << "Press 2 to Deposit Money ";
    
    cin >> option;
    if(option==1){
        goto step;
    }
    else if(option==2){
        goto step;
    }
    else{ cout<<"invalid selaction";
 goto end;
    }
     step:
    cout << "Enter your ammount :-";
    cin >> ammount;

    step2:

    obj.customer(B);
    if (option == 1)
    {
        obj.Withdrawal(ammount);
    }
    else
      obj.Deposit(ammount);
    
end:
    getch();
}