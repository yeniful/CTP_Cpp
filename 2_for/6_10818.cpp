#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N;
    int mx = -1000000;
    int mn = 1000000;

    cin >> N;
    int arr[N];
    for (int i = 0; i < N ; i++)
    {
        cin >> arr[i];
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
    }
    cout << mn << ' ' << mx << '\n';
}
