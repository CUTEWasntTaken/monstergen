#include<iostream>
using namespace std;

void MonsterGen();  //decleration

int main() {
	char input;
	while (1) {

		MonsterGen();
		cout << "press any key to continue..." << endl;
		cin >> input;
	}

}

void MonsterGen() { //definition
	int num = rand() % 100; //creates a number between 0-99
	if (num < 15) //15% chance of la llorona to appear
		cout << "La llorona appeared!" << endl;
	else if (num < 20) //5% chance of el cucuy to appear
		cout << "el cucuy appeared!" << endl;
	else if (num < 50) //30% chance of el chucky to appear
		cout << "el chucky appeared!" << endl;
	else if (num < 75) //25% chance of a chupacabra to appear
		cout << "a chupacabra appeared!" << endl;
	else //25% chance of el charro negro to appear
		cout << "el charro negro appeared!" << endl;
}
