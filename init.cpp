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
	outFile << "typedef long long ll;\n";
	outFile << "typedef pair<int,int> ii;\n";
	outFile << "typedef deque<int> di;\n";
	outFile << "typedef deque<ii> dii;\n";
	outFile << "typedef vector<int> vi;\n";
	outFile << "typedef vector<ll> vl;\n";
	outFile << "typedef vector<ii> vii;\n";
	outFile << "typedef priority_queue<int, vi, less<int> > maxHeap;\n";
	outFile << "typedef priority_queue<int, vi, greater<int> > minHeap;\n\n";
	outFile << "void solve() {\n";
	outFile << "\t\n";
	outFile << "}\n\n";
	outFile << "int main() {\n\n";
	outFile << "\tFAST_IO;\n";
	outFile << "\tint t; cin >> t;\n";
	outFile << "\twhile (t--) solve();\n\n";
	outFile << "}";

	inFile.close();

	outFile.close();
}
