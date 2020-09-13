#include <iostream>
using namespace std;

int main() {
	char value = 126;

	cout << (int) value << endl;

	value++;

	cout << (int) value << endl;

	return 0;
}

/*
 * 3-bit system:
 * 111 = 7 = (2 to the power of 3) - 1 = (2x2x2) -1 = 7
 * 1111111 = (2 pow 8 ) - 1  = 255
 *
 *
 * One's complement
 * 000 = 0
 * 001 = 1
 * 010 = 2
 * 011 = 3
 * 100 = -3
 * 101 = -2
 * 110 = -1
 * 111 = -0
 *
 * 001 (1) +
 * 110 (-1) =
 * 111 (-0 = 0 ) right answer
 *
 * Two's complement
 * 000 = 0
 * 001 = 1
 * 010 = 2
 * 011 = 3
 * 100 = -4
 * 101 = -3
 * 110 = -2
 * 111 = -1
 *
 * 0010 (2) +
 * 0110 (-2) =
 * 1000 -> discard overflow bit -> 000 (right answer)
 *
 * */

