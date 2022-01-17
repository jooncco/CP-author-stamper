#include <iostream>
#include <fstream>
#include <iomanip>
#include <ctime>
#include <string>
using namespace std;

const string wDay[]= {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
const string myName = "<YOUR_NAME>";

int main(int argc, char *args[]) {

	// problem #
	string prob= (argc > 2 ? args[2] : args[1]);
	
	// time info
	tm curTm;
	time_t curTime= time(nullptr);
	localtime_r(&curTime,&curTm);
	int year= curTm.tm_year+1900;
	int month= curTm.tm_mon+1;
	int day= curTm.tm_mday;
	int hour= curTm.tm_hour;
	int minute= curTm.tm_min;
	int second= curTm.tm_sec;
	int idx= curTm.tm_wday;

	// output stream
	ofstream outFile;
	outFile.open(prob+".cpp");

	// write author info
	outFile << "/**\n";
	outFile << " * written: ";
	outFile << year << ". " << month << ". " << day << ". ";
	outFile << wDay[idx] << ". ";
	outFile << setw(2) << setfill('0') << hour << ":";
	outFile << setw(2) << setfill('0') << minute << ":";
	outFile << setw(2) << setfill('0') << second << " [UTC+9]\n";
#ifdef _WIN32
	outFile << " * " << myName << "의 windows pc에서.\n";
#endif
#ifdef linux
	outFile << " * " << myName << "의 linux pc에서.\n";
#endif
#ifdef __APPLE__
	outFile << " * " << myName << "의 mac에서.\n";
#endif
	outFile << " **/\n\n";

	// copy source code
	string sourceFileName= "main.cpp";
	if (argc > 2) {
		sourceFileName= args[1];
		if (sourceFileName.find(".cpp") == string::npos) {
			sourceFileName += ".cpp";
		}
	}

	ifstream sourceFile;
	sourceFile.open(sourceFileName);
	string line;
	while (getline(sourceFile,line)) {
		outFile << line << "\n";
	}
	sourceFile.close();

	outFile.close();
}
