#include<iostream>
#include<conio.h>

using namespace std;

int main(){


int x=5;

//declaring pointer p-----normal var cannot store other var address only pointer can that's why we use pointer to store another var address------
int *p;

p = &x;

//you can also declare and initialize your pointer together like this ------int *p = &x;

cout<<"stored variable address : "<<p;//output var address------

cout<<endl;

cout<<"stored variable value : "<<*p;//output var value-------



getch();


}
