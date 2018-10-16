// Designers Network
// Demonstrate logical operator

#include <iostream>
using namespace std;

int main () {

	cout << "\tGame Designer's Network\n";
	int security = 0;

	string username;
	cout << "\nUsername : ";
	cin >> username;

	string password;
	cout << "\nPassword : ";
	cin >> password;
	
	if (username == "nmfairus" && password == "nmfairus")
	{
		cout << "\nHey Nmfairus. ";
		security = 5;
	}

	if (username == "guest" || password == "guest")
	{
		cout << "\nWelcome Guest. ";
		security = 1;
	}
	
	if (!security)
		cout << "\nYour Login failed. ";

	return 0;
}
