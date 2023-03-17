#include <iostream>
using namespace std;

	bool isPrime(int num){
		if(num == 1){
			return false;
		}
		if(num == 2){
			return true;
		}

		for(int i=2; i<num; i++){
			if(num%i == 0){
				return false;
			}
		}
		return true;
	}

	int main(void){
		int num;
		int ctr = 0;

		cout << "Input Number: ";
		cin >> num;

		for(int i=1; i<num; i++){
			if(isPrime(i) == true){
				if(ctr%5 == 0 && ctr !=0){
					cout << "\n";
				}
				cout << i << "\t";
				ctr++;
			}
		}
	}