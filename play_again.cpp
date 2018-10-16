// Play Again
// Demonstrate while loops

#include <iostream>
using namespace std;

int main() {

	char again = 'y';
	while(again == 'y')
	{
	   cout << "\n**Played an exciting games**";
	   cout << "\nDo you want to play again? (y/N): ";
	   cin >> again;
	}

	cout << "\nOkay, bye." << endl;
	
	return 0;
}
