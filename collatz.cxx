#include <iostream>
#include <stdint.h>
using namespace std;

//WARNING!
//The part of this program that determines the largest function takes a long
//time to calculate. Don't expect it to get anywhere close to the max as asigned by default.

int collatz(uint64_t input);
void regular();

int main(){
	int c = 0;
	int y = 0;
	int num = 0;
	//Uncomment this out if you want to beable to have a normal collatz program and
	//comment out the stuff under regular to have the largest number checker.
	regular();
	/*uint64_t big = 0;
	uint64_t x;
	uint64_t max = 18446744073709551614ull;
	for(x=1;x < max; x++){
		
		c = collatz(x);
		if(c > y){
			big = x;
			y = c;
			num++;
			if(num % 2 == 0) cout << num << endl;
			if(num % 50 == 0) cout << big << " " << y << " " << num << endl;
		}
		
		
	}
	cout << "The final number is: " << big << endl;*/

	return 0;
}

void regular(){
	uint64_t input;
	cout << "What number do you want to determine the sequence of?" << endl;
	cin >> input;
	int output = collatz(input);
	cout << "The number: " << input << " takes " << output << " steps to reach 1" << endl;

}

int collatz(uint64_t input){
	uint64_t x;
	uint64_t y = 0;
	x = input;
	while(x != 1){
			if(x % 2 == 0){
				x = x / 2;
				//comment out below if don't want to show the steps.
				cout << "Step " << y + 1 << " is: " << x << endl;

			}
			else {
				x = (3 * x) + 1;
				//same thing as above comment
				cout << "Step " << y + 1 << " is: " << x << endl;

			}
			//cout << x << endl;
			y++;

	}
	return y;

}