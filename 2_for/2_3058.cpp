#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    int arr[7];

    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int sum = 0;
        int m = 101;
        for (int j = 0; j < 7; j++)
        {
            cin >> arr[i];
        }
        for (int j = 0; j < 7; j++ )
        {
            if (arr[j] % 2 == 0)
            {
                sum += arr[j];
                m = min(m, arr[j]);
            }
        }
        cout << sum << " " << m << '\n';
        arr[7] = { 0 };
    }
}
