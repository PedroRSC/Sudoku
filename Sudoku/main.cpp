
#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    
        int m[9][9], i, j, l, c, n;
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {           //valor inicial geral = 0
            m [i][j] = 0;
        }
    }

    m[0][0] = 8;
    m[1][2] = 3;
    m[2][1] = 7;
    m[3][1] = 5;
    m[1][3] = 6;
    m[2][4] = 9;                //define os numeros inicias
    m[2][6] = 2;
    m[3][5] = 7;
    m[4][4] = 4;
    m[4][5] = 5;
    m[4][6] = 7;
    m[5][3] = 1;
    m[5][7] = 3;
    m[6][2] = 1;
    m[8][1] = 9;
    m[7][2] = 8;
    m[7][3] = 5;
    m[8][6] = 4;
    m[7][7] = 1;
    m[6][7] = 6;
    m[6][8] = 8;

    for (i = 0; i < 9; i++) {
        cout << "\n";
        for (j = 0; j < 9; j++) {       //exibe a tabela inicial
            cout << m[i][j] << " ";

        }
    }
    cout << "\n";
 do{   
     cout << "Digite a linha e a coluna (dÃƒÂª enter para cada um):  ";
     cin >> l >> c;
     cout << "Digite o numero desejado: ";
     cin >> n;                      //pega os valores
     
     if (m[l][c] == 0){
     for (i = 0; i < 9; i++){
         for (j = 0; j < 9; j++){  //verificaria se a posiÃ§Ã£o Ã© ocupada por 0 
         }                          //e sÃ³ entÃ£o atribuiria o valor, mas n dÃ¡ certo
             m[l-1][c-1] = n;
         }
     }
     
     
     for (i = 0; i < 9; i++) {
        cout << "\n";
        for (j = 0; j < 9; j++) {
            cout << m[i][j] << " ";         //exibe a tabela alterada

        }
 
    }
     cout << "\n";
    
    
    
}while(l != 9999);
        

    return 0;
}

