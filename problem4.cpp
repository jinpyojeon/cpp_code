#include <iostream>
#include <list>

using namespace std;

int main() {
	string input;
	list<string> l; 
	list<string>::iterator iter;
	
	cin >> input; 
	while (input.compare("ZZ") != 0) { // Remember to compare string using this comparator
		l.push_back(input);
		cin >> input;
	}

	l.sort();

	for (iter = l.begin(); iter != l.end(); iter++) {
		cout << *iter << " "; 
	}
}
