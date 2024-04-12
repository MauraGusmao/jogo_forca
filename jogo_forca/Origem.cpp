#include<iostream>
using namespace std;

int main()
{
    // forca = guarda a palavra secreta,letra = guardar a letra que o usuário digitar, paDesv = medir palavra de acordo quê foi desvendada 
    // tamanho =  armazenar o tamanho , chances = quantas chances o usuário vai ter , acertos = acertos do usuário
    //Variável bool para verificar se a letra é a certa ou nao
    char forca[30], letra[1], paDesv[30];
    int tamanho, chances, acertos;
    bool acerto = false;
    // inicializar minhas variáveis (tam, chances e acertos)

    tamanho = 0;
    chances = 5;
    acertos = 0;

    cout << "           " << "=====================" << endl;
    cout << "               " << "JOGO DA FORCA" << endl;
    cout << "           " << "=====================";

    // pedir ao usuário para digitar uma palavra e usando system para limpar a palavra digitada para que o outro usuário não veja.
    cout << endl << " digite a palavra secreta: ";
    cin >> forca;

    system("cls");


    //obter o tamanho da palavra
    for (int i = 0; forca[i] != '\0'; i++) {
        tamanho++;
    }

    // preencher meu vetor secreto (paDesv)
    for (int i = 0; i < 30; i++) {
        paDesv[i] = '-';
    }

    //informações do jogo, verificar se o usuário acertou ou não.

    while (chances > 0 && (acertos < tamanho)) {
        system("cls");


        cout << "chances restantes : " << chances << endl;
        cout << "palavra secreta: ";

        for (int i = 0; i < tamanho; i++) {
            cout << paDesv[i];
        }
        acerto = false;
        cout << endl;

        cout << "digite uma letra: ";
        cin >> letra[0];

        for (int i = 0; i < tamanho; i++) {
            if (forca[i] == letra[0]) {
                acerto = true;
                paDesv[i] = forca[i];
                acertos++;
            }
        }
        // verificar se houve acerto ou não, se n houver diminuio as chances

        if (!acerto) {
            chances--;
        }

    }

    acerto = false;
    system("cls");

    if (acertos == tamanho) {
        cout << "parabens voce ganhou!!!";
    }
    else {
        cout << "chances perdida, voce perdeu!";
    }

    return 0;
}
