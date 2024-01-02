#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
	int units;
	float bill;
	cout<<"enter the units consumed"<<endl;
	cin>>units;
	if(units>500)
	bill=units*7;
	else if(units>300)
	bill=units*5;
	else
	bill=units*2;
	bill=bill+150;
	if(bill>2000)
	bill=bill+(bill*50.0/100.0);
	cout<<"total bill is"<<bill<<endl;
	
}