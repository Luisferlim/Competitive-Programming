#include <iostream>
//preparacao para a maratona de progamacao 2023.1

using namespace std;

int main()
{   
    int V, ordem = 1;
    int i, j, k, l;
    cin >> V; //valor

    //verificacao de parada
    while (V != 0)
    {
        i = 0, j = 0, k = 0, l = 0;
        //para nao dar problema no loop
        
        //algoritmo para separar as notas
        i = V/50;
        V -= i*50;
        j = V/10;
        V -= j*10;
        k = V/5;
        V -= k*5;
        l = V; //o restante ou eh zero ou a quantidade em notas de 1

        //printando o resultado
        cout << "Teste " << ordem << "\n";
        cout << i << " " << j << " " << k << " " << l << " \n";
        ordem++;

        cin >> V;
    }    
    
}