#include <iostream>
using namespace std;

int main() {
	int x;
	srand(time(0));


	do
	{
		cout << "perulangan denagan Do while" << endl;
		x = rand() % 10;
		cout << "nilai X = " << x << endl;
	} while (x > 4);



	char p;
	do
	{
		string name;

		cout << "masukkan name: ";
		cin >> name;


		cout << "apakah anda ingin mengulangi (y/t)";
		cin >> p;

	} while (p == 'y'|| p == 'Y' );


		return 0;
}
