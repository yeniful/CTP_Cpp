#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N, X;
    cin >> N >> X;
    int arr[10001];
    
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        if (arr[i] < X) {
            cout << arr[i] << " ";
        }
    }
}
