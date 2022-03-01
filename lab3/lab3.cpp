using namespace std;
#include <iostream>
#include<fstream>
#include <string>


int main()
{
	ifstream inf("C:\\1\\input.txt");
	int a;
	inf >> a;
	string* str1 = new string;
	int* mas1 = new int[a]();
	for (int i = 0; i < a; i++) {
		inf >> str1[i];
		if (str1[i] == ",") {
			continue;
		}
		else {
			mas1[i] = stoi(str1[i]);
		}
	}
	int b;
	inf >> b;
	string* str2 = new string;
	int* mas2 = new int[b]();
	for (int i = 0; i < b; i++) {
		inf >> str2[i];
		if (str2[i] == ",") {
			continue;
		}
		else {
			mas2[i] = stoi(str2[i]);
		}
	}
	int c, temp;
	inf >> c;
	int* indices = new int[c];
	string* str3 = new string;
	for (int i = 0; i < c; i++) {
		inf >> str3[i];
		if (str3[i] == ",") {
			continue;
		}
		else {
			indices[i] = stoi(str3[i]);
		}
		if ((indices[i] < a) && (indices[i] < b)) {
				temp = mas1[indices[i]];
				mas1[indices[i]] = mas2[indices[i]];
				mas2[indices[i]] = temp;
		}

	}
	ofstream outf("C:\\1\\output.txt");
	outf << "First massive" << endl;
	outf << "Size of massive: " << a << endl;
	for (int i = 0; i < a; i++) {
		if (i == a - 1) {
			outf << mas1[i];
		}
		else {
			outf << mas1[i] << ", ";
		}
	}
	outf << endl;

	outf << "\n";

	outf << "Second massive" << endl;
	outf << "Size of massive: " << b << endl;
	for (int i = 0; i < b; i++) {
		if (i == b - 1){
			outf << mas2[i];
		}
		else {
			outf << mas2[i] << ", ";
		}
	}
	outf << endl;
}

