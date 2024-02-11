//programa para cálculo de média de 3 notas do aluno, Aprovado/Recuperação/Reprovado

#include <iostream>
#include <iomanip>
#include <locale> // Incluindo a biblioteca para localização
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    //Configura a localização para português

    double nota1, nota2, nota3;

    cout << "Digite a primeira nota: ";
    cin >> nota1;

    cout << "Digite a segunda nota: ";
    cin >> nota2;

    cout << "Digite a terceira nota: ";
    cin >> nota3;

    double media = (nota1 + nota2 + nota3) / 3;

    cout << "Média: " << fixed << setprecision(2) << media << endl;
        //setprecision(x) faz parte da biblioteca iomanip, controla a precisão de saída para números de ponto flutuante

    if (media >= 6.0) {
        cout << "Aluno aprovado!" << endl;
    } else if (media >= 4.0) {
        cout << "Aluno em recuperação." << endl;
    } else {
        cout << "Aluno reprovado." << endl;
    }

    return 0;
}
