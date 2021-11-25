#include<iostream>
#include<conio.h>
using namespace std;

int main(){


int num1, num2;

cout<<"enter you first int number : ";

cin>>num1;

cout<<endl<<endl;

cout<<"enter your second int number : ";

cin>>num2;

cout<<endl<<endl;



int *p1, *p2;

p1 = &num1;

p2 = &num2;


int sum = *p1 + *p2;


cout<<"sum : "<<sum;









getch();

}
