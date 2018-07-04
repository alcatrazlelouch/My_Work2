#include<iostream>
using namespace std;

int main() {

	char value = 4;
	cout << value << endl;
	switch (value) {
	case 4:
		cout << "Value is 4." << endl;
		break;
	case 5:
		cout << "Value is 5" << endl;
		break;
	case 6:
		cout << "Value is 6" << endl;
		break;
	default:
		cout << "unrecognized value." << endl;
	}
	return 0;

}

