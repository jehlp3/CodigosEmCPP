#include <iostream>
#include <stdio.h>
#include <locale>

using namespace std;

void move_disco(int d, char ori, char dest, char aux, int &contador) {
    if (d == 1) {
        contador++;
        cout  << contador << " = Mover disco " << d << " de " << ori << " para " << dest << endl;
    } else {
        move_disco(d - 1, ori, aux, dest, contador);
        contador++;
        cout  << contador << " = Mover disco " << d << " de " << ori << " para " << dest << endl;
        move_disco(d - 1, aux, dest, ori, contador);
    }
}

int main() {
    setlocale(LC_ALL, "portuguese");
    int discos;
    cout << "Digite o número de discos: ";
    cin >> discos;
    int contador = 0;
    move_disco(discos, 'A', 'C', 'B', contador);

    return 0;
}

