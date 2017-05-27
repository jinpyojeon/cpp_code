#include <iostream>


// Assuming other things are implemented
template<class T>
class Queue {
    public:
        ~Queue() {
            while (!is_empty()) { // While queue is not empty
                remove(0); // remove the first element
            }
        }
};

int main(void) {
    Queue<int> queue = new Queue<int>;
    
    // Just add 0 to 9
    for (int i = 0; i < 10; i++) {
        queue.add(i);
    }
}
