// Finicky Counter
// Demonstrate break and continue statements

#include <iostream>
using namespace std;

int main() {

	int count = 0;
	while (true) {
		count += 1;
		
		//end loop if count greater than 10

		if (count > 10)
			break;

		//skil number 5
		if (count == 5)
			continue;

		cout << count << endl;
	}

	return 0;
}
