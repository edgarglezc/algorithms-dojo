#include <iostream>
#include "list.h"

using namespace std;

int main() {
    List list;

    list.insertData(1);
    list.insertData(2);
    list.insertData(3);
    list.insertData(4);
    list.insertData(5);

    cout << list.toString() << endl;

    return 0;
}
