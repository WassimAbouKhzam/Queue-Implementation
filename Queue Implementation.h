#ifndef TEMPLATE_H
#define TEMPLATE_H
#include <iostream>
using namespace std;

template <class T>
class Queue {
private:
    int SIZE;
    T* qPtr;
    int head;
    int tail;
public:
    Queue(int);
    ~Queue() { delete[]qPtr; }
    bool enQueue(const T&);
    bool deQueue(T&);
    T peek() {
        return qPtr[head];
    }
    bool isFull();
    bool isEmpty();
};
#endif
