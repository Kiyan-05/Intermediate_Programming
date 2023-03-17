#include <iostream>
using namespace std;

int main()
{
	int x = 16;
	int bi = 0;
	int var;
	int i = 1;

	while(x > 0)
	{
		var = x % 2;
		x /= 2;
		bi += var * i;
		i*=10;
	}
	cout<<bi;

}