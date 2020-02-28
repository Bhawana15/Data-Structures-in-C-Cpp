// TOWER OF HANOI USING RECURSION IN CPP

#include <iostream>
using namespace std;

void tower_of_Hanoi (int n, char from_peg, char aux_peg, char to_peg) {
	if (n == 1){
		cout << "Move 1 disk from " << from_peg << " to peg " << to_peg << endl;
		return;
	}
	tower_of_Hanoi (n - 1, from_peg, to_peg, aux_peg);
	cout << "Move " << n << " disk from " << from_peg << " to peg " << to_peg << endl;
	tower_of_Hanoi (n - 1, to_peg, from_peg, aux_peg);
	return;
}

int main() {
	int n = 4;
	tower_of_Hanoi (n, 'A', 'B', 'C');
	return 0;
}