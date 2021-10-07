#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<cstring>

using std::cout;
using std::cin;
using std::string;
using std::endl;
using namespace std;


int main() {
	setlocale(LC_ALL, "finnish");
	string sana, arvausSana;
	int pituus, toiminto;
	int x = 1;
	int n = 0;
	int lmao = 0;
	int virheet = 0;
	char arvausKirjain = ' ';
	bool peliOhi = false;
	char arvaukset[26]{
		{' '},{' '},{' '},{' '},{' '},{' '},{' '},{' '},{' '},{' '},{' '},{' '},{' '},
		{' '},{' '},{' '},{' '},{' '},{' '},{' '},{' '},{' '},{' '},{' '},{' '},{' '},
	};
	cout << "Anna sana: ";
	cin >> sana;

	n = sana.length();

	char *sanaKirjaimet = new char [n + 1];

	strcpy(sanaKirjaimet, sana.c_str());

	char *viivat = new char[n + 1];
	
	for (int i = 0; n > i; i++) {
		viivat[i] = '_';
	}
	do {
		system("CLS");
		for (int l = 0; l < n; l++) {
			cout << viivat[l] << " ";
		}
		cout << endl;
		if (lmao == n) {
			virheet = virheet + 1;
		}

		cout << "Virheet ATM: " << virheet << endl;
		lmao = 0;
		switch (virheet) {
		case 1:
			cout << "| |_______________________________ \n";
			cout << "|_________________________________| \n";
			break;
		case 2:
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| |_______________________________ \n";
			cout << "|_________________________________| \n";
			break;
		case 3:
			cout << "__________________________________ \n";
			cout << "| ______________________________  | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| |_______________________________ \n";
			cout << "|_________________________________| \n";
			break;
		case 4:
			cout << "__________________________________ \n";
			cout << "| ______________________________  | \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << "| | \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << "| | \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << "| | \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << "| | \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << "\\ / \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << " |	\n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| |_______________________________ \n";
			cout << "|_________________________________| \n";
			break;
		case 5:
			cout << "__________________________________ \n";
			cout << "| ______________________________  | \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << "| | \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << "| | \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << "| | \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << "| | \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << "\\ / \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << " |	\n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << " O	\n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| |_______________________________ \n";
			cout << "|_________________________________| \n";
			break;
		case 6:
			cout << "__________________________________ \n";
			cout << "| ______________________________  | \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << "| | \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << "| | \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << "| | \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << "| | \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << "\\ / \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << " |	\n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << " O	\n";
			cout << "| |" << "\t" << "\t" << "\t" << "       " << "__|__\n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| |_______________________________ \n";
			cout << "|_________________________________| \n";
			break;
		case 7:
			cout << "__________________________________ \n";
			cout << "| ______________________________  | \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << "| | \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << "| | \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << "| | \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << "| | \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << "\\ / \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << " |	\n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << " O	\n";
			cout << "| |" << "\t" << "\t" << "\t" << "       " << "__|__\n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << " |  \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| |_______________________________ \n";
			cout << "|_________________________________| \n";
			break;
		case 8:
			cout << "__________________________________ \n";
			cout << "| ______________________________  | \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << "| | \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << "| | \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << "| | \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << "| | \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << "\\ / \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << " |	\n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << " O	\n";
			cout << "| |" << "\t" << "\t" << "\t" << "       " << "__|__\n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << " |  \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << "/ \\  \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| |_______________________________ \n";
			cout << "|_________________________________| \n";
			break;
		case 9:
			cout << "__________________________________ \n";
			cout << "| ______________________________  | \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << "| | \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << "| | \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << "| | \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << "| | \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << "\\ / \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << " |	\n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << " O	\n";
			cout << "| |" << "\t" << "\t" << "\t" << "       " << "__|__\n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << " |  \n";
			cout << "| |" << "\t" << "\t" << "\t" << "\t" << "/ \\  \n";
			cout << "| |" << "\t" << "\t" << "\t" << "       " << "/   \\  \n";
			cout << "| | HÄVISIT PELIN\n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| | \n";
			cout << "| |_______________________________ \n";
			cout << "|_________________________________| \n";
			return 0;
			break;
		}
		cout << "Arvaukset: ";
		for (int i = 0; i < 25; i++) {
			cout << arvaukset[i] << " ";
		}
		cout << endl << "Jos haluat arvata kirjaimen 1" << endl << "Jos haluat arvata sanan syötä 2: ";
		cin >> toiminto;

		if (toiminto == 2) {
			cin >> arvausSana;
			if (arvausSana == sana) {
				cout << "Arvasit sanan oikein!" << endl;
				cout << "Sana oli: " << sana;
				peliOhi = true;
			}
			else {
				cout << "Arvasit väärin :(" << endl;
				virheet = virheet + 1;
			}
		} else if (toiminto == 1) {
			cin >> arvausKirjain;
			for (int i = 0; i < 25; i++) {
				char arvausTemp = arvaukset[i];
				if (arvausTemp == ' ') {
					arvaukset[i] = arvausKirjain;
					break;
				}
				
			}
			for (int z = 0; z < n; z++) {
				char kirjainTemp = sanaKirjaimet[z];
				if (kirjainTemp == arvausKirjain) {
					viivat[z] = arvausKirjain;
					cout << "Arvasit kirjaimen oikein";
				} else {
					lmao++;
					peliOhi = false;
				}
			}
		} else if (toiminto != 1 && toiminto != 2) {
			peliOhi = false;
			cout << "Annoit virheellisen toiminnon";
		}
	} while (peliOhi == false);
}


/*
cout << "__________________________________ \n";
cout << "| ______________________________  | \n";
cout << "| |"<< "\t" << "\t" << "\t" << "\t"  <<"| | \n";
cout << "| |" << "\t" << "\t" << "\t" << "\t" << "| | \n";
cout << "| |" << "\t" << "\t" << "\t" << "\t" << "| | \n";
cout << "| |" << "\t" << "\t" << "\t" << "\t" << "| | \n";
cout << "| |" << "\t" << "\t" << "\t" << "\t" << "\\ / \n";
cout << "| |" << "\t" << "\t" << "\t" << "\t" << " |	\n";
cout << "| |" << "\t" << "\t" << "\t" << "\t" << " O	\n";
cout << "| |" << "\t" << "\t" << "\t" << "       " << "__|__\n";
cout << "| |" << "\t" << "\t" << "\t" << "\t" << " |  \n";
cout << "| |" << "\t" << "\t" << "\t" << "\t" << "/ \\  \n";
cout << "| |" << "\t" << "\t" << "\t" << "       " << "/   \\  \n";
cout << "| | \n";
cout << "| | \n";
cout << "| | \n";
cout << "| | \n";
cout << "| |_______________________________ \n";
cout << "|_________________________________| \n";
*/