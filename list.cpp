//680615028
#include <iostream>
#include "list.h"
using namespace std;

List::~List() {
    for (Node *p; !isEmpty(); ) {
        p = head->next;
        delete head;
        head = p;
    }
}

void List::headPush(int el) {
    if (head != 0) {
        head = new Node(el, head, 0);
        head->next->prev = head;
    } else head = tail = new Node(el);
}

void List::tailPush(int el) {
    if (tail != 0) {
        tail = new Node(el, 0, tail);
        tail->prev->next = tail;
    } else head = tail = new Node(el);
}

int List::headPop() {
    int el = head->info;
    Node *tmp = head;
    if (head == tail) head = tail = 0;
    else {
        head = head->next;
        head->prev = 0;
    }
    delete tmp;
    return el;
}

int List::tailPop() {
    int el = tail->info;
    Node *tmp = tail;
    if (head == tail) head = tail = 0;
    else {
        tail = tail->prev;
        tail->next = 0;
    }
    delete tmp;
    return el;
}

bool List::isInList(int el) {
    Node *tmp;
    for (tmp = head; tmp != 0 && tmp->info != el; tmp = tmp->next);
    return tmp != 0;
}

void List::display() {
    for (Node *tmp = head; tmp != 0; tmp = tmp->next)
        cout << tmp->info << " <-> ";
    cout << "NULL" << endl;
}