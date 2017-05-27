#include <iostream>

using namespace std;

// P1

// Class doesn't mean literal class (you can use it for things like int)
template<class T> 
T sumArray(T arr[], int len) {
    
    T result = (T) 0; // Changing the type of 0 to T
    for (int i = 0; i < len; i++) {
        result += arr[i];
    }

    return result;
}

int main(void) {

    int inum[5] = { 10, 20, 30, 40, 50 };
    double dnum[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };

    cout << "Sum of inum is: " << sumArray(inum, 5) << endl;
    cout << "Sum of dnums is: " << sumArray(dnum, 5) << endl;
}
