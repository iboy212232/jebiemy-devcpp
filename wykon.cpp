#include <iostream>
#include <unistd.h>

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
 	cout<<"Are you sure? "<<endl<<"'any' - yes"<<endl<<"'0' - no"<<endl;
 	cin>>t;
	while (t)
		cout<<"Okay i will try to remeber that"<<endl;
	return 0;
}
