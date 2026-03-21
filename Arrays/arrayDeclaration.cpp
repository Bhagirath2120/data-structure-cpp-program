#include<iostream>
using namespace std;


class showArray{
 public:
    void callShow(int arr1[]){
        for(int i = 0; i < 5; i++){
            cout<<arr1[i]<<endl;
        }
        cout<<endl;
    }


};
int main(){
    showArray obj1;

    int arr[5];

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;

    cout<<"array 1 print"<<endl;
    obj1.callShow(arr);


    int arr_2[5] = {10,20,30,40,50};
    cout<< "array 2 print "<<endl;
    obj1.callShow(arr_2);

   





}