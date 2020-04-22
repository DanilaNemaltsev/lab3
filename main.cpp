#include <iostream>

#include "class.h"
using namespace std;

int main()
{
Bus b;
Plane pl(15,1000, "Concord", 200);
b.print();
Manager John;
John.print(&pl);
    return 0;
}
