// la problema se poate folosi si o cautare liniara dupa ce se ordoneaza, dar din motive
// de optimizare vom folosi o cautare binara pentru multime/sir/vector

#include <iostream>

using namespace std;

int main() {
    int n;
    cout<<"n="; cin>>n;
    int A[n]; //initalizam vectorul

    int x;
    cout<<"x="; cin>>x; //citim de la tastatura numarul

    for(int i=0;i<n;i++){
        cin>>A[i]; //citim vectorul
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int aux;
            if(A[j]<A[i]){ //ordonam crescator vectorul citit pentru a folosi cautarea binara
                aux = A[j];
                A[j] = A[i];
                A[i] = aux;
            }
        }
    }

    int stanga,dreapta,mid,gasit; //incepem o cautare binara pentru numar

    stanga=1;
    dreapta=n;
    mid= (stanga + dreapta) / 2; //initalizam marginile si mijlocul

    if(A[mid] == x)
        gasit=1; //caz special in care in care gasim fix in mid numarul
    while(stanga <= dreapta && gasit == 0) //in cazul in care nu e mijlocul, executam algoritmul
    {
        if(A[mid] < x)
            stanga= mid + 1; //verificam daca numarul este mai mic decat mijlocul, si il cauta in stanga
        if(A[mid] > x)
            dreapta= mid - 1; //daca e mai mare decat mijlocul, cauta in dreapta
        mid= (stanga + dreapta) / 2; //redefinim mid ul
        if(A[mid] == x)
            gasit=1; //si mai verificam odata daca e la mijloc
    }
    if(gasit==1)
        cout<<"DA ESTE IN MULTIME";
    else
        cout<<"NU ESTE IN MULTIME";
    
    return 0;
}
