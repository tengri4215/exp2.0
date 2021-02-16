#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;

const int INF = 2000000000;
const double pi = 3.14159265358979323846;
const int base = 1000000007;
const int p = 31;

long long n, m, k, ans[1000];


vector <int> bl[10000];

int main()
{
    //ifstream cin ("input.txt");
    //ofstream cout ("output.txt");
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        for (int j = i; j > max(i - m, 1LL * -1); j--)
        {
            bl[j].pb(t);
        }
    }
    for (int i = 0; i < n - m + 1; i++)
    {
//        for (int j = 0; j < bl[i].size(); j++)
//        {
//            cout << bl[i][j] << ' ';
//        }
//        cout << '\n';
        sort(bl[i].begin(), bl[i].end());

    }
    for (int i = 0; i < k; i++)
    {
        int ki, tek = 0;
        cin >> ki;
        ki--;
        for (int j = 0; j < n - m + 1; j++)
        {
            tek = max(tek, bl[j][ki]);
        }
        ans[i] = tek;
    }
    for (int i = 0; i < k; i++)
    {
        cout << ans[i] << ' ';
    }
    return 0;
}

