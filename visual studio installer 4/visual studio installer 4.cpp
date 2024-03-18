#include <iostream>
using namespace std;

int nTelor, nMie, nAir, jumlah;
int hTelor = 2000, hMie = 2800, hAir = 3000;
string nama;

void input()
{
	cout << "masukan Nama =";
	cin >> nama;

	cout << "masukan jumlah telor";
	cin >> nTelor;

	cout << "masukan jumlah mie";
	cin >> nMie;

	cout << "masukan jumlah air";
	cin >> nAir;
}

int hitungharga() {
	return (nTelor * nTelor) + (nMie * nMie) + (nAir * nAir);
}

void display() {
	cout << "Nama:" << nama << endl;
	cout << " jumlah telor:" << nTelor << endl;
	cout << " jumlah mie:" << nMie << endl;
	cout << " jumalah air:" << nAir << endl;
	cout << " total harga rp." << hitungharga();

}
int main() {

}