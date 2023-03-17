#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	cout<<"Input number: ";
	cin>>num;
	cout<<num<<endl;
	
	while(num > 0)
	{
		cout<<"("<<num/1000<<")"<<" 1000 ";
		num = num%1000;

		cout<<"("<<num/500<<")"<<"500 ";
		num =  num%500;

		cout<<"("<<num/200<<")"<<"200 ";
		num = num%200;

		cout<<"("<<num/100<<")"<<"100 ";
		num = num%100;

		cout<<"("<<num/50<<")"<<"50 ";
		num = num%50;

		cout<<"("<<num/20<<")"<<"20 ";
		num =  num%20;

		cout<<"("<<num/10<<")"<<"10 ";
		num = num%10;

		cout<<"("<<num<<")"<<"1 ";
		if(num==1) break;
	}
}