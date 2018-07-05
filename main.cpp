#include <iostream>
#include <windows.h>

using namespace std;

int main()
{int a,b,c;
    cout<<"Introduceti numarul a:";
    cin>>a;
    system("cls");
    cout<<"Introduceti numarul b:";
    cin>>b;
    system("cls");
    c=a;
    a=b;
    b=c;
    cout<<endl<<"Rezultate:"<<endl<<endl<<"Numarul a este:"<<a<<endl<<"Numarul b este:"<<b<<endl;
    return 0;
}
