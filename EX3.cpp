#include <iostream>
using namespace std;

void echange(int &x, int &b)
{
    int temp = x;
    x = b;
    b = temp;
}

int main()
{
    int a = 5;
    int b = 1;
    cout << "La valeur de a = " << a <<".\nLa valeur de b = " << b <<".\n";
    echange(a,b);
    cout << "La valeur de a = " << a <<".\nLa valeur de b = " << b <<".\n";
    return 0;
}