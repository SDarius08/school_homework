// Un tren de marfă poate avea cel mult 20 de vagoane. Fiecare vagon poate transporta o încărcătură de maxim 5000kg. Să se realizeze un program care să rezolve următoarele cerințe:
// a) Introducerea și afișarea încărcăturii fiecărui vagon
// b) Afișarea vagoanelor încărcate la întreaga capacitate
// c) Afișarea vagoanelor cu cea mai mică încărcătură.

#include<iostream>

using namespace std;

int main() {
    int i, n, min;

    cout << "Număr vagoane: "; cin >> n;
    cout<<endl;

    int vag[n];

    //citire incarcatura vagoane
    cout << "Incarcaturile sunt (max 5000): " << endl;
    for(i = 0; i < n; i++) {
        cout << "Vagonul[" << i + 1 << "]= ";
        cin >> vag[i];
    }

    cout<<endl;
    //afisare incarcatura
    for(i = 0; i < n; i++){
        cout << "Vagonul" << i + 1 << " are incarcatura de " << vag[i] << " kg" << endl;
    }

    cout<<endl;
    //afisare vagoane incarcatura maxima
    for(i = 0; i < n; i++){
        if (vag[i] == 5000)
            cout << "Vagonul" << i + 1 << "are incarcatura maxima" << vag[i] << "kg" << endl;
    }

    //afisare vagoane incarcatura minima
    min = 9999;
    for(i = 1; i < n; i++){
        if (vag[i] < min){
            min = vag[i];
        }
    }

    cout<<endl;
    for(i = 0; i < n; i++){
        if (vag[i] == min)
            cout << "Vagonul [" << i + 1 << "] are incarcatura minima " << min << endl;
    }
}
