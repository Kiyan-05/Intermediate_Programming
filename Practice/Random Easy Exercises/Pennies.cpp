#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	int x1=0,x2=0,x3=0,x4=0,x5=0,x6=0,x7=0,x8=0;
	cout<<"Input number: ";
	cin>>num;

	while(num>0)
	{
		if(num>=1000)
		{
			num -= 1000;
			x1++;
		}
		else if(num>=500 && num<1000)
		{
			num -= 500;
			x2++;
		}
		else if(num>=200 && num<500)
		{
			num -= 200;
			x3++;
		}
		else if(num>=100 && num<200)
		{
			num -= 100;
			x4++;
		}
		else if(num>=50 && num<100)
		{
			num -= 50;
			x5++;
		}
		else if(num>=20 && num<50)
		{
			num -= 20;
			x6++;
		}
		else if(num>=10 && num<20)
		{
			num -= 10;
			x7++;
		}else if(num < 10)
		{
			num--;
			x8++;
		}

	}
	cout<<"("<<x1<<")"<<"1000"<<", ("<<x2<<")"<<"500"<<", ("<<x3<<")"<<"200"<<", ("<<x4<<")"<<"100"<<", ("<<x5<<")"<<"50"<<", ("<<x6<<")"<<"20"<<", ("<<x7<<")"<<"10"<<", ("<<x8<<")"<< "1";
}