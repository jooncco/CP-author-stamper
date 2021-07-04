#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char *args[]) {

	ofstream outFile;
	outFile.open("main.cpp");

	ifstream inFile;
	inFile.open("template.cpp");
	outFile << "#include <bits/stdc++.h>\n";
	outFile << "using namespace std;\n\n";
	outFile << "#define FAST_IO ios_base::sync_with_stdio(0),cin.tie(0)\n";
	outFile << "typedef pair<int,int> ii;\n";
	outFile << "typedef deque<int> di;\n";
	outFile << "typedef deque<ii> dii;\n";
	outFile << "typedef vector<int> vi;\n";
	outFile << "typedef vector<ii> vii;\n";
	outFile << "typedef priority_queue<int, vi, less<int> > maxHeap;\n";
	outFile << "typedef priority_queue<int, vi, greater<int> > minHeap;\n\n";
	outFile << "int t;\n";
	outFile << "int main() {\n\n";
	outFile << "\tFAST_IO;\n";
	outFile << "\tcin >> t;\n";
	outFile << "\twhile (t--) {\n";
	outFile << "\t\t\n";
	outFile << "\t}\n";
	outFile << "}";

	inFile.close();

	outFile.close();
}
