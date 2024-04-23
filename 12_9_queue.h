#ifndef _12_9_QUEUE_H_
#define _12_9_QUEUE_H_

// this queue will contain customer items
class Customer
{
    private:
    long arrive;
    int processtime;
public:
    Customer() {arrive = processtime = 0;}
    void set(long when);
    long when() const {return arrive;}
    int ptime() const {return processtime;}
};

typedef Customer Item;

class Queue
{
    enum {Q_SIZE = 10};
private:
    // class scope definitions
    // Node is a nested structure definition local to this class
    struct Node {Item item; struct Node *next;};
    Node *front, *rear;
    int items;
    const int qsize;
    Queue(const Queue & q) : qsize(0) {} // 抢占式定义
    Queue & operator=(const Queue &q){return *this;} // 该函数并没有实现，但是防止未来错误调用
public:
    Queue(int qs = Q_SIZE); // create queue with a qs limit
    ~Queue();
    bool isempty() const;
    bool isfull() const;
    int queuecount() const;
    bool enqueue(const Item & item); // add item to end
    bool dequeue(Item & item); // remove item from front
};

#endif