#include <iostream>// zad 1
using namespace std;

float dodajLiczby(float a, float b) {
    return a + b;
}

int porownajLiczby(int a, int b) {
    return a > b ? a : b;
}
int main() {

    cout << "Hello world" << endl;

    float a, b;
    cout << "Podaj 2 liczby do dodania" << endl;
    cin >> a >> b;

    cout << "Wynik dodawania: " << dodajLiczby(a,b) << endl;
    int d,e;

    cout << "Podaj dwie liczby!" << endl;
    cin >> d >> e;

    cout << "Większa liczba to: " << porownajLiczby(d,e) << endl;
    return 0;
}

