#include<iostream>
using namespace std;
class ZohoMail{
   public: 
 int inbox;
 int allMail;
 display(){
 cout<<inbox<<" "<<allMail<<endl;
 }
};

class ZohoBr: public ZohoMail{
    
  public:  
 int ZohoMeet;
 int Zohodrive;
 
print()
{

    
cout<<ZohoMeet<<endl;
cout<<Zohodrive<<endl;
cout<<allMail<<endl;
display(); // again call ZohoMail, in B1 object
}

};

int main(){
ZohoMail a1;
ZohoBr B1;

a1.inbox=111;
a1.allMail=222;

B1.ZohoMeet=333;
B1.Zohodrive=444;
B1.inbox=777;
B1.allMail=999;
B1.print();
a1.display();

}

