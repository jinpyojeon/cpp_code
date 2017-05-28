#include <iostream>
#include <deque>

using namespace std;
int main() {	
	deque<int> d;
	deque<int>::iterator iter; 

	for (int i = 5; i <= 500; i += 5) {
		d.push_back(i); // Since it's dequeue, you can push top 
	}
	
	int count = 0;
	for (iter = d.begin(); iter != d.end(); iter++) {
		cout << *iter << " ";  // Getting value at the iterator
		count++; 
		if (count == 10) {
			cout << endl;
			count = 0; 
		}
	}
}
