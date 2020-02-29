#include <iostream>// zad 1
using namespace std;

int porownajLiczby(int a, int b) {
    return a > b ? a : b;
}
int main() {

    cout << "Hello world" << endl;
    int a,b;

    cout << "Podaj dwie liczby!" << endl;
    cin >> a >> b;

    cout << "Większa liczba to: " << porownajLiczby(a,b) << endl;
    return 0;
}

