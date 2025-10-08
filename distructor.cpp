#include<iostream>
using namespace std;
class Demo{

    public:
    int x,y;
    string name_;
    Demo(string name){
        name_ = name;
        cout<<name_<<" created"<<endl;
    }
   ~Demo(){
    cout<<name_<<" destructed"<<endl;

   }
};
int main()
{
// Demo obj1; //static object
// Demo *obj2=new Demo(); // dynamic object

Demo obj1(" static object ");
Demo obj3(" static Obj2 ");
Demo *obj2=new Demo(" Dynamic Object ");

delete obj2;

}