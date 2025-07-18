#ifndef queue_h
#define queue_h

#include<iostream>
using namespace std;

const int size = 100;
int queue[size];
int front = -1, rear = -1;

bool isempty() {
    return front == -1 || front > rear;
}

bool isfull() {
    return rear == size - 1;
}
void enqueue(int val) {
    if (isfull()) {
        cout << "Queue is overflow" << endl;
        return;
    }
    if(front==-1) front = 0; 
    queue[++rear] = val;
}

int dequeue() {
    if (isempty()) {
        cout << "Queue is underflow" << endl;
        return -1;
    }
    int val = queue[front++];
    if (front > rear) {
        front = rear = -1; // reset after last dequeue
    }
    return val;
}

int getfront() {
    if (isempty()) {
        cout << "Queue is underflow" << endl;
        return -1;
    }
    return queue[front];
}

int getrear() {
    if (isempty()) {
        cout << "Queue is underflow" << endl;
        return -1;
    }
    return queue[rear];
}

void display() {
    if (isempty()) {
        cout << "Queue is underflow" << endl;
        return;
    }
    for (int i = front; i <= rear; i++) {
        cout << queue[i] << " ";
    }
    cout << endl;
}

#endif
