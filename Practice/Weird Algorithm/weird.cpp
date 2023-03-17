#include <iostream>
using namespace std;

	int main(){
		int num;
		cout << "Input number: ";
		cin >> num;
		cout << "\n" << num << " "; 

		while(num != 1){
			if(num%2 == 0){
				num /=2;
				cout << num << " ";
			}else{
				num = (num*3)+1;
				cout << num << " ";
			}
		}
	}