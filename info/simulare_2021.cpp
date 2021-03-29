#include <iostream>
#include <fstream>
using namespace std;

int main () {
    int fr[100000];
    fr[10]=0;
    ifstream in("bac.in");
    int x;
    int sum = 0;
    while (in>>x) {
        fr[x]++;
    }
    in.close();
    for (int i = 1; i<=10; i++) {
        if (fr[i]!=0){
            sum = sum + 10 + fr[i]*(i*i);
        }
    }
    cout << sum;
}
