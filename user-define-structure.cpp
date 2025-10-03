// #include <iostream>
// using namespace std;
// class Product
// {

//     string ProductName;
//     int Value;

// public:
//     int product(string name, int value)
//     {

//         Value = value;
//         ProductName = name;
//         return 0;
//     }
//     void display()
//     {
//         cout << ProductName << " | " << Value;
//     }
// };

// #include <iostream>
// using namespace std;
// class Product
// {

//     string ProductName;
//     int Value;

// public:
//     int product(string name, int value)
//     {

//         Value = value;
//         ProductName = name;
//         return 0;
//     }
//     void display()
//     {
//         cout << ProductName << " | " << Value;
//     }
// };

// #include <iostream>
// using namespace std;
// class Product
// {

//     string ProductName;
//     int Value;

// public:
//     int product(string name, int value)
//     {

//         Value = value;
//         ProductName = name;
//         return 0;
//     }
//     void display()
//     {
//         cout << ProductName << " | " << Value;
//     }
// };

// int main()
// {
//     string Name_of_Product;
//     int Prize_of_Product;

//     cin >> Name_of_Product >> Prize_of_Product;
//     Product obj1;
//     obj1.product(Name_of_Product, Prize_of_Product);
//     obj1.display();

//     return 0;
// }
// #include <iostream>
// using namespace std;
// class Product


//     string ProductName;
//     int Value;

// public:
//     int product(string name, int value)
//     {

//         Value = value;
//         ProductName = name;
//         return 0;
//     }
//     void display()
//     {
//         cout << ProductName << " | " << Value;
//     }
// };




// {
//     string Name_of_Product;
//     int Prize_of_Product;

//     cin >> Name_of_Product >> Prize_of_Product;
//     Product obj1;
//     obj1.product(Name_of_Product, Prize_of_Product);
//     obj1.display();

//     return 0;
// }







#include <iostream>
using namespace std;
class Product
{

    string Name;
    int Price;
public:
    int Show_price()
    {
     cout<<Name<<" | "<<Price;
        
    }
};

int main()
{
Product p;
cin >>p.Name>>p.Price;
p.Show_price();
}