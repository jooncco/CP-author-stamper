#include <iostream>
#include <fstream>
#include <iomanip>
#include <ctime>
#include <string>
using namespace std;

const string USER_NAME= "<YOUR_NAME>";
const string WEEK_DAY[]= {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
const string SOURCE_FILE_NAME= "main.cpp";
#ifdef _WIN32
	const string ENV= "windows pc";
#endif
#ifdef linux
	const string ENV= "linux pc";
#endif
#ifdef __APPLE__
	const string ENV= "mac";
#endif

int main(int argc, char *args[]) {

	// timestamp string
	time_t curTime= time(NULL);
	tm *localTime= localtime(&curTime);
	tzset();
	char buffer[26];
	strftime(buffer, 26, "%Y-%m-%d %H:%M:%S", localTime);
	string timestampStr= string(buffer) + " " + WEEK_DAY[localTime->tm_wday] + " [" + tzname[localTime->tm_isdst] + "]";

	// output file name
	string outFileName;
	if (argc == 1) outFileName= to_string(curTime);
	else if (argc == 2) outFileName= args[1];
	else outFileName= args[argc-1];

	// output stream
	ofstream outFile;
	outFile.open(outFileName+".cpp");

	// write time and author info
	outFile << "/**\n";
	outFile << " * written: " << timestampStr << "\n";
	outFile << " * in " << USER_NAME << "'s " << ENV << ".\n";
	outFile << " **/\n\n";

	// copy source code
	ifstream sourceFile;
	sourceFile.open(SOURCE_FILE_NAME);
	string line;
	while (getline(sourceFile,line)) {
		outFile << line << "\n";
	}
	sourceFile.close();

	outFile.close();
}
