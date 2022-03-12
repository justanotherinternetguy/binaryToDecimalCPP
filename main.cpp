#include <iostream>
#include <cmath>

using namespace std;


void decimalToBinaryInt(int decimal) {
	while (true) {
		if (decimal < 1) {
			break;
		}
		cout << remainder(decimal, 2) << endl;
		decimal = decimal / 2;
	}
}


/* currently broken */
void decimalToBinaryFloat(float decimal) {
	while (true) {
		if (decimal == 1.0) {
			break;
		}

		decimal = decimal * 2;
		cout << decimal << endl;
	}
}

int main() {
	decimalToBinaryInt(6);
	cout << "-------------------------------" << endl;
	/* decimalToBinaryFloat(0.375); */
	return 0;
}
