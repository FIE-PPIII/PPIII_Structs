#include <iostream>
#include "list.h"

using namespace std;

int main()
{
    cout<<"Hello, world!"<<endl;
    List<int> list;
    cout<<"Length: "<<list.length()<<endl;
    list.append(1);
    list.append(2);
    cout<<"Length: "<<list.length()<<endl;
    cout<<list.pop()<<endl;
    cout<<list.pop()<<endl;
    cout<<list.pop()<<endl;
    cout<<"Length: "<<list.length()<<endl;
    return 0;
}
