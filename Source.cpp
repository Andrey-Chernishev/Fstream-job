#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	string path = "newTest.txt";
	/*ofstream of;
	of.open(path, ofstream::app);
	if (of.is_open()) {
		cout << "File was opened!\nGo printing:\n";
		string str = "";
		//cin >> str;
		getline(cin, str);
		of << str <<'\n';
		of.close();
	}
	else {
		cout << "Error with opened file!\n";
	}*/
	//ÒÅÏÅÐÜ ×ÈÒÀÒÜ ÈÇ ÔÀÉËÀ!!!
	ifstream ifile;
	ifile.open(path);
	if (ifile.is_open()) {
		cout << "File was opened!\n";
		string line="";
		while (getline(ifile, line)) {
			cout << line << endl;
		}
		ifile.close();
	}
	else
	{
		cout << "File was NOT opened!\n";
	}
	return 0;
}