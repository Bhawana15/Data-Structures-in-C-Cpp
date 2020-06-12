// DOUBLE SUM

#include <iostream>
using  namespace std;

int inner_sum (int x, int y) {
	if (y <= 0)
		return y;
	return x + y + inner_sum (x, y - 1);
}

int outer_sum (int x, int y) {
	if (x == 0 && y == 0)
		return 0;
	if (x <= 0)
		return x;
	return outer_sum (x - 1, y) + inner_sum (x, y);
}

int main(int argc, char const *argv[])
{
	cout << "######  DOUBLE SUM  #######\n";
	cout << outer_sum (3, 2) << endl;
	return 0;
}