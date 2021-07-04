#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char *args[]) {

	ofstream outFile;
	outFile.open("main.cpp");

	ifstream inFile;
	inFile.open("template.cpp");
	string line;
	while (getline(inFile,line)) {
		outFile << line << "\n";
	}
	inFile.close();

	outFile.close();
}
