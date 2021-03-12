#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int arr[10];
    int mx = 0;
    int mx_index;
    for (int i = 0; i < 9 ; i++)
    {
        cin >> arr[i];
        mx = max(mx, arr[i]);
        if (arr[i] == mx) mx_index = i + 1;
    }
    cout << mx << '\n' << mx_index << '\n';
}
