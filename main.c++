#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(0));
    string pass;

    string data = "abcdefghijklmnopqrstuvwxyz"
                "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                "0987654321";

    for (int i = 1; i <= 8; i++)
    {
        pass = pass + data[rand() % 93 ];
    }
    cout << " Your password is "<< pass;

    return 0;
}