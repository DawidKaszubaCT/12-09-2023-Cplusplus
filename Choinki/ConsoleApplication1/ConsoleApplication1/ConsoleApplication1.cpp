
#include <iostream>
using namespace std;
int main()
{
    int tablicaXY[4][5] = {
        {1,2,3,4,1},
        {4,5,6,7,1},
        {8,9,10,11,1},
        {12,13,14,15,1}

    };

    cout << tablicaXY[1][2] << endl;
    cout << tablicaXY[3][3] << endl;
    cout << "--------------------" << endl;
    int wiersze = sizeof(tablicaXY) / sizeof(tablicaXY[0]);
    int elementow = sizeof(tablicaXY[0]) / sizeof(tablicaXY[0][0]);
    cout << wiersze << " " << elementow << endl;
    return 0;
}