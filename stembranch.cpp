/*
Name: Tom Kwok Kei
SID: 1155172220
e-mail: 1155172220@link.cuhk.edu.hk
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    //ask for input
    int y, m, d;
    cout << "Enter a date (D M Y): ";
    cin >> d >> m >> y;

    //year calculation
    int py, qy;
    py = (y - 3) % 10;
    qy = (y - 3) % 12;
    if (py == 0) py = 10;
    if (qy == 0) qy = 12;

    //date calculation
    int t, r, C, a, g, i, z, pd, qd;
    if (m <= 2) {
        t = y - 1;
        r = m + 12;
    }
    else {
        t = y;
        r = m;
    }

    C = abs(t / 100);
    a = t % 100;
    g = 4 * C + abs(C / 4) + 5 * a + abs(a / 4) + abs((3 * (r + 1)) / 5) + d - 3;
    if (r % 2 != 0) i = 6;
    else i = 0;
    z = 8 * C + abs(C / 4) + 5 * a + abs(a / 4) + abs((3 * (r + 1)) / 5) + d + 1 + i;
    pd = g % 10;
    qd = z % 12;
    if (pd == 0) pd = 10;
    if (qd == 0) qd = 12;

    //output
    cout << "Year:  S" << py << "-B" << qy << endl;
    cout << "Month: " << m << endl;
    cout << "Day:   S" << pd << "-B" << qd << endl;

    return 0;
}


