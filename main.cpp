#include <iostream>
#include "list.h"

using namespace std;

int main()
{
    cout<<"Hello, world!"<<endl;
    Node<int> node(7);
    cout<<node.getValue()<<endl;
    return 0;
}
