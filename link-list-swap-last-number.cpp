// swap last number in link list
#include<iostream>

using namespace std;

void swap()
{
    temp=firstA;
    while(temp->next!=NULL)
    temp=temp->next;
    ttemp=temp->prev;

    p=ttemp->prev;
    p->next=temp;

    temp->prev=p;

    temp->next=ttemp;
   ttemp->prev=temp
    ttemp->next=NULL;

}