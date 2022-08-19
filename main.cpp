#include <iostream>
#include "list.h"

using namespace std;

int main()
{
    cout<<"Hello, world!"<<endl;
    List<string> list;
    cout<<"Length: "<<list.length()<<endl;
    list.append("Mundo");
    list.append("Hola");
    cout<<"Length: "<<list.length()<<endl;
    cout<<list.pop()<<endl;
    cout<<list.pop()<<endl;
    cout<<"Length: "<<list.length()<<endl;
    return 0;
}
