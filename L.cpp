#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a, b, t, x0, y0, k, x, y;
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> k;
        int v[n][m];
        memset(v, 0, sizeof(v));
        cin >> a >> b;
        int dr[8][2] = {{a, b}, {a, -b}, {-a, b}, {-a, -b},{b,a},{b,-a},{-b,-a},{-b,a}};
        cin >> x0 >> y0;
        v[x0][y0] = 1;
        for (int i = 1; i <= k; i++)
        {
            cin >> x >> y;
            v[x][y] = 1;
        }
        int flag = 1, i = 0;
        for(int i = 0;i< 8;i++){
            int dx = x0 + dr[i][0],dy = y0 + dr[i][1];
            
        }
        if (i == 0)
            cout << "Alice" << '\n';
        else
            cout << "Bob" << '\n';
    }
    return 0;
}