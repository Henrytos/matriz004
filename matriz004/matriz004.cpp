#include <iostream>
//4) Faça um programa em Linguagem C++ que lê uma matriz de 3 x 3 elementos usando um comando 
//for, multiplica cada elemento por 5 e imprime o resultado.
using namespace std;
int main()
{
    double matriz[3][3], multi;
    int lin, col;
    for (lin = 0; lin < 3; lin++) {
        for (col = 0; col < 3; col++) {
            cout << "digite um valor: ";
            cin >> matriz[lin][col];
        }
    }
    for (lin = 0; lin < 3; lin++) {
        for (col = 0; col < 3; col++) {
            multi = matriz[lin][col] * 5;
            cout << matriz[lin][col] << " X " << "5 = " << multi << endl;
        }
    }

}