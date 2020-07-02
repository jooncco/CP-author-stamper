#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
using namespace std;

const string wDay[]= {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};

string format(int n) {

    int num= n;
    string str;
    while (num) { str= (char)('0'+num%10)+str, num /= 10; }
    return (n < 10 ? (n == 0 ? "00" : "0"+str) : str);
}

int main(int cnt, char *args[]) {

    // problem #
    string prob= args[1];

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
    outFile.open(".\\"+prob+".cpp");

    // write author info
    outFile << "/**\n";
    outFile << " * author: jooncco\n";
    outFile << " * written: ";
    outFile << year << ". " << month << ". " << day << ". ";
    outFile << wDay[idx] << ". " << format(hour) << ":" << format(minute) << ":" << format(second) << " [UTC+9]\n";
    outFile << " **/\n\n";

    // copy source code
    ifstream sourceFile;
    sourceFile.open(".\\main.cpp");
    string line;
    while (getline(sourceFile,line)) {
        outFile << line << "\n";
    }
    sourceFile.close();

    outFile.close();
}
