#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <dos.h>
#include <windows.h>
using namespace std;
float a;
short t;
int main (){
	cout<<"Welcome to my project \nI hope you will enjoy"<<endl;
 	sleep (3);
 	system("CLS");
 	cout<<"Give me a number: ";
 	cin>>a;
 	cout<<"your number is: "<<a<<endl;
 	sleep (3);
 	system("CLS");
 	cout<<"Are you sure? "<<endl<<"1 - yes"<<endl<<"0 - no"<<endl;
 	cin>>t;
	while (t)
		cout<<"Okay i will try to remeber that"<<endl;
	return 0;
}
