#include <iostream>

using namespace std;
	
	int main()
	{
		int x = 47207;
		int y = 0;
		int digit = 0;

		while(x > 0)
		{
			digit = x%8;
			x /= 8;
			y *= 8;
			y += digit;
		}

		while(y > 0)
		{
			digit = y%8;
			y /= 8;
			cout << digit;
		}
		
	}
