#include <iostream>
using namespace std;
#include "Template.h"

template <class T>
Queue <T> ::Queue(int s) {
    SIZE = s > 0 ? s : 10;
    head = -1;
    tail = -1;
    qPtr = new T[SIZE];

}
template <class T>
bool Queue <T> ::isFull() {
    if (head == 0 && tail == SIZE - 1) {
        return true;
    }
    return false;
}
template <class T>
bool Queue <T> ::isEmpty() {
    if (head == -1)
        return true;
    else
        return false;
}
template <class T>
bool Queue <T> :: enQueue (const T& element) {
    if (!isFull()) {
        if (head == -1) head = 0;
        tail++;
        qPtr[tail] = element;
        cout << endl;
        return true;
    }
    return false;
}

template <class T>
bool Queue <T> ::deQueue(T& element) {

    if (!isEmpty()) {
        element = qPtr[head];
        head++;
        if (head > tail) {

            head = -1;
            tail = -1;
            
        }
        cout << endl;
        return true;
    }
    return false;
}

int main() {
    Queue <int> myQueue(8);
    int x = 1;
    
    cout << "Enqueue elements: " << endl;

    while (myQueue.enQueue(x)) {
        cout << x << " ";
        x += 1;
    }
    cout << " Queue is full. Cannot push " << x << "\n\nDequeue elements:\n";
    while (myQueue.deQueue(x)) {
        cout << x << " ";
        x -= 1;
    }
    cout << "\nQueue is empty. Cannot pop.\n\n";

    Queue <double> myQueue1(4);
    double y = 1.1;

    cout << "Enqueue elements: " << endl;

    while (myQueue1.enQueue(y)) {
        cout << y << " ";
        y += 1;
    }
    cout << " Queue is full. Cannot push " << y << "\n\nDequeue elements:\n";

    while (myQueue1.deQueue(y)) {
        cout << y << " ";
        y -= 1;
    }
    cout << "\nQueue is empty. Cannot pop.\n\n";
    return 0;

}
