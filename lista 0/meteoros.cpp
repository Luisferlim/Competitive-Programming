#include <iostream>
//preparacao para a maratona de programacao
using namespace std;

int main()
{
    //a ideia eh verificar se os x's e y's estao no range de x e y do retangulo que delimita a fazenda
    //o inervalo eh aberto pois devemos nos atentar a meteorios que cairam exatamente na linha

    int x_r, x_l, y_u, y_d; //coordenadas da fazenda (up and down; left and right)
    int N, qtd, idc = 1;
    int xMet, yMet;

    //lendo coordenadas da fazenda
    cin >> x_l >> y_u; //(x1,y1)
    cin >> x_r >> y_d; //(x2,y2)

    //loop para verificar a entrada da fazenda
    while((x_l, x_r, y_d, y_u != 0))
    {
        qtd = 0;
        
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            xMet = 0, yMet = 0;
            cin >> xMet >> yMet; //dados dos meteroros

            if ((xMet <= x_r) and (xMet >= x_l) and (yMet <= y_u) and (yMet >= y_d))
            {
                qtd++;
            }
        }

        cout << "Teste " << idc << "\n";
        cout << qtd << "\n";   

        cin >> x_l >> y_u; //(x1,y1)
        cin >> x_r >> y_d;

        idc++;
    }

}