//680615028
#ifndef LIST
#define LIST

class Node {
public:
    int info;
    Node *next, *prev;
    Node() { next = prev = 0; }
    Node(int el, Node *n = 0, Node *p = 0) { info = el; next = n; prev = p; }
};

class List {
public:
    List() { head = tail = 0; }
    ~List();
    int isEmpty() { return head == 0; }
    void headPush(int);
    void tailPush(int);
    int headPop();
    int tailPop();
    bool isInList(int);
    void display();

private:
    Node *head, *tail;
};

#endif