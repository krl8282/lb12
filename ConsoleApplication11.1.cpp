#include <iostream>
#include <iomanip>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));
    const int n = 3;
    const int m = 4;
    int a[n][m];
    int i, j;
    cout << "Масив а:\t" << endl;
    for (i = 0;i < n;i++) {
        for (j = 0; j < m;j++) {
         a[i][j] = rand() % 20 - 5;
         cout << setw(5) << a[i][j];     
        }
        cout << endl;
    }
    int sum = 0;
    for (i = 0;i < n;i++) {
        int max_znach = a[i][0];

        for (j = 1; j < m; j++) {

            if (a[i][j] > max_znach) {

                max_znach = a[i][j];
            }
        }
        sum += max_znach;
    }
    cout << "Сума найбільших елементів рядків =" << sum << endl;
}


