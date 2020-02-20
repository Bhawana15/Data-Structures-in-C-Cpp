// ALPHABETICAL SORTING 

// Header files
#include <iostream>
#include <cstring>
using namespace std;

// Function to print the names
void print (string names[], int len) {
	for (int i = 0 ; i < len ; i++) 
		cout << names[i] << endl;
}

// Function for Aplhabetical Sorting
void alphabetical_sorting (string names[], int len) {
	string temp;
	for (int i = 0 ; i < len ; i ++){
		for (int j = 0 ; j < len ; j++) {
			if ((names[j - 1] > names[j] )) {
				temp = names[j - 1];
				names[j- 1] = names[j];
				names[j] = temp;
			}
		}
	}
	return;
}

// Driver function
int main () {
	int len;
	cout << "$$$$$$$$ ALPHABETICAL SORTING $$$$$$$$\n";
	cout << "Enter the number of names you want to input :  ";
	cin >> len;
	string names[len];
	cout << "Enter " << len << " names :\n";
	for (int i = 0 ; i < len ; i++)
		cin >> names[i];

	cout << "\nBEFORE SORTING  :" << endl;
	print (names, len);

	alphabetical_sorting (names, len);

	cout << "\nAFTER SORTING :" << endl;
	print (names, len);

	return 0;
}