#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int ID;
    cout << "Enter number from 0 to 9999: ";
    cin >> ID;

    int Serial = 3*(2*ID + 1968) - 1;

    cout << "Serial: " << Serial << '\n';

    system("pause");
    return 0;
}
