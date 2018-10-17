// Die Roller
// Demonstare generating random number

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

	srand(time(0)); // seed random number based on current time
	int randomNumber = rand(); // generate random number

	int die = (randomNumber % 6) + 1; //get a number between 1 and 6
	cout << "You rolled a " << die << endl;
	return 0;
}
