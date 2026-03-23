//680615028
#include <iostream>
#include "list.h"
using namespace std;

int main() {
    List myList;

    cout << "Testing Push" << endl;
    myList.headPush(10);
    myList.tailPush(20);
    myList.headPush(5);
    myList.display();

    cout << "\nTesting Search" << endl;
    cout << "Is 10 in list? " << (myList.isInList(10) ? "Yes" : "No") << endl;
    cout << "Is 99 in list? " << (myList.isInList(99) ? "Yes" : "No") << endl;

    cout << "\nTesting Pop" << endl;
    cout << "Pop Head: " << myList.headPop() << endl;
    myList.display();
    cout << "Pop Tail: " << myList.tailPop() << endl;
    myList.display();

    return 0;
}