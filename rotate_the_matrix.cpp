#include <bits/stdc++.h>
using namespace std;
#define N 4
void rotate90Clockwise(int a[N][N])
{
    for (int i = 0; i < N / 2; i++) {
        for (int j = i; j < N - i - 1; j++) {
            a[i][j] = a[N - 1 - j][i];
            a[N - 1 - j][i] = a[N - 1 - i][N - 1 - j];
            a[N - 1 - i][N - 1 - j] = a[j][N - 1 - i];
            a[j][N - 1 - i] = temp;
        }
    }
}
