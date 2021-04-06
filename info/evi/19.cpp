#include <iostream>
using namespace std;

int main () {
    int n, m;
    cin >> n >> m;
    int c = n + m;
    int C[c];
    for (int i = 0; i<c; i++) {
        cin >> C[i];
    }
    for (int i = 0; i<c-1; i++) {
        for (int j = i; j<c; j++) {
            if (C[i] < C[j]) {
                int aux = C[i];
                C[i] = C[j];
                C[j] = aux;
            }
        }
    }
    for (int i = 0; i<c; i++) {
        cout << C[i] << ' ';
    }
}
