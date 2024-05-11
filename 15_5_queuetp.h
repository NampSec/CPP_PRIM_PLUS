// queuetp.h -- queue template with a nested class
#ifndef QUEUETP_H_
#define QUEUETP_H_

#include <iostream>

template <class Item>
class Queue
{
private:
    enum { Q_SIZE = 10 };
    // r-value
    class Node
    {
    public:
        Item item;
        Node *next;
        Node(const Item &it) : item(it), next(NULL) {}
    };
    Node *front;
    Node *rear;
    int items;
    const int qsize;
    Queue(const Queue &q) : qsize(0) {}
    Queue &operator=(const Queue &q) {return *this;}
public:
    Queue(int qs = Q_SIZE);
    ~Queue();
    bool isempty() const {return items == 0;};
    bool isfull() const {return items == qsize;};
    int queuecount() const{ return items;};
    bool enqueue(const Item &item); // add item to end
    bool dequeue(Item &item); // remove item from front
};
// Queue methods
template <class Item>
Queue<Item>::Queue(int qs) : qsize(qs)
{
    front = rear = NULL;
    items = 0;
}

template <class Item>
Queue<Item>::~Queue()
{
    Node *temp;
    while (front != NULL)
    {
        temp = front;
        front = front->next;
        delete temp;
    }
}
// add item to queue
template <class Item>
bool Queue<Item>::enqueue(const Item &item)
{
    if (isfull())
        return false;
    Node *add = new Node(item);
    if (add == NULL)
        return false;
    items++;
    if (front == NULL)
        front = add;
    else
        rear->next = add;
    rear = add;
    return true;
}
// remove item from queue
template <class Item>
bool Queue<Item>::dequeue(Item &item)
{
    if (front == NULL)
        return false;
    item = front->item;
    items--;
    Node *temp = front;
    front = front->next;
    delete temp;
    if (items == 0)
        rear = NULL;
    return true;
}
#endif