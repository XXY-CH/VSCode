#include <iostream>
#include <cstdio>
using namespace std;
int n, m, xh, yh;
bool chess[25][25];
int dir[8][2] = {
    {1, 2}, {2, 1}, {2, -1}, {1, -2},
    {-1, -2}, {-2, -1}, {-2, 1}, {-1, 2}
};

long long dfs(int x, int y) {
    if (x == n && y == m) {
        return 1;
    }
    if (chess[x][y] == true) {
        return 0;
    }
    else {
        return dfs(x + 1, y) + dfs(x, y + 1);
    }
}

int main() {
    scanf("%d%d%d%d", &n, &m, &xh, &yh);
    //n = 6 , m = 6 , xh = 3 , yh = 3;
    chess[xh][yh] = true;
    for (int i = 0 ; i < 8 ; i++) {
        chess[xh + dir[i][0]][yh + dir[i][1]] = true;
    }
    printf("%lld", dfs(0, 0));
    return 0;
}
