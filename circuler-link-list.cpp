//singly circuler link-list

#include<iostream>
using namespace std;

struct SCLL
{
    int data;
    SCLL *next;
};
SCLL *temp, *first, *ttemp,*p;


void hello(){
    first= new SCLL;
    cin>>first->data
    first->next=first;
}

void add_node()
{
    temp=first;
    while(temp->next!=first)
    temp=temp->next;
    ttemp=new SCLL;
    cin>> ttemp->data;
    ttemp->next=first;
    temp->next=ttemp;
}






