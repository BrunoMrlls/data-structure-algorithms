#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    cout << "Game de advinhação" << endl;

    int chute;
    srand(time(0));
    const int SECRET_NUMBER = rand() % 100; // modulo do valor randomico pro secret number ser de 0 a 99;
    int attempts = 0;
    char level;
    cout << "Escolha o nível de dificuldade [F] [M] [D]:";
    cin >> level;
    int total_number_tried;
    if (level == 'F') {
        total_number_tried = 15;
    }  else if  (level == 'M') {
        total_number_tried = 10;
    } else {
        total_number_tried = 5;
    }

    double score = 1000.00;
    while (chute != SECRET_NUMBER && attempts < total_number_tried) {
        attempts++;
        cout << "Número do chute: ";
        cin >> chute;
        
        double lostScore = abs((chute - SECRET_NUMBER)/2.0);
        score = score - lostScore;

        if (chute == SECRET_NUMBER) {
            cout << "Parabéns, you won !!" << endl;
        } else if (chute > SECRET_NUMBER) {
            cout << "Chute [maior] que o número secreto !" << endl;
        } else {
            cout << "Chute [menor] que o número secreto !" << endl;
        }
        
        printf("Tentativa número [%d] \n", attempts);
    }
    if (chute != SECRET_NUMBER) {
        cout << "Infelizmente você perdeu, tentativas esgotadas!" << endl;
    }
    printf("Total de tentativas [%d] \n", attempts);
    printf("Pontuação foi de [%lf] \n", score);
}
