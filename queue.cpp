#include "queue.h"

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    cout << "Queue contents: ";
    display();

    cout << "Dequeued element: " << dequeue() << endl;

    cout << "After dequeue: ";
    display(); // 

    cout << "Front element: " << getfront() << endl;
    cout << "Rear element: " << getrear() << endl;   

    return 0;
}

