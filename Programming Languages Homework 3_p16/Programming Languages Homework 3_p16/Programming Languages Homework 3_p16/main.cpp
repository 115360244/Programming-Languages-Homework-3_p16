#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
    int x;

    for (x = 1; x <= 10; x++)
    {
        cout << sqrt(x) << " ";
    }

    cout << endl;

    system("pause");
    return 0;
}