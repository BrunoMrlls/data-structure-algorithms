#include <iostream>
#include <map>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;

string secret_word = "MELANCIA";
map<char, bool> chutou;
vector<char> wrong_kicks;

bool validateKick(char kick) {
    for (char secret : secret_word) {
        if (toupper(secret) == toupper(kick)) {
            return true;
        }
    }
    return false;
}

void dummyDesign() {
	cout << "  _________" << endl;
	if (wrong_kicks.size() >= 1) {
    		cout << "  __________ " << endl;
    		cout << " |          |" << endl;
    		cout << " |          O " << endl;
	}
	if (wrong_kicks.size() >= 2) {
    		cout << " |         /";
	}
	if (wrong_kicks.size() >= 3) {
    		cout << "|";
	}
	if (wrong_kicks.size() >= 4) {
    		cout << "\\" << endl;
	}
	if (wrong_kicks.size() >= 5) {
    		cout << " |          |" << endl;
	}
	if (wrong_kicks.size() >= 6) {
    		cout << " |         / ";
	}
	if (wrong_kicks.size() >= 7) {
    		cout << "\\" << endl;
	}
	cout << endl;
}

void printHeader() {
        cout << endl << endl;
        if (wrong_kicks.size() > 0) {
            cout << "Chutes errados: ";
            for (char letter : wrong_kicks) {
                cout << letter << " ";
            }
        }
        cout << endl;
        for (char caracter : secret_word) {
            bool isKicked = chutou[caracter];
            if (isKicked) {
                cout << " " << caracter;
            } else {
                cout << " _";
            }
        }
	cout << endl;
}

void printResult(bool acertou) {
	if (acertou) {
		cout << "Parabéns vc ganhou! A palavra secreta era " << "["<< secret_word << "]" << endl;
		return;
	}
	cout << "Voce perdeu, tente novamente!" << endl;
}

vector<string> readFile() {
	string line;
	int line_number = 0;
	ifstream file;
	file.open("words.txt");
	vector<string> words;
	if (file.is_open()) {
		while (!file.eof()) {
			getline(file, line);
			line_number++;
			if (line != "") {
				words.push_back(line);
			}
		}
	} else {
		cout << "Erro ao acessar arquivo [words.txt], crie o arquivo com as palavras secretas separadas por quebra de linha" << endl;
		exit(0);
	}
	file.close();
	return words;
}

string sort_words(vector<string> words) {
	srand(time(NULL));
	int index = rand() % words.size();
	return words[index];
}

void add_word_in_file(vector<string> words) {
	ofstream file;
	file.open("words.txt");
	if (file.is_open()) {
		for (string word : words) {
			file << word << endl;
		}
	} else {
		cout << "Não conseguiu abrir o arquivo [words.txt]" << endl;
	}
	file.close();
}

int main() {
    bool acertou = false;
    
    vector<string> words = readFile();
    secret_word = sort_words(words);
    while( ! acertou && wrong_kicks.size() < 5) {

  	dummyDesign();
	printHeader();

        char chute;
        cout << "\n Entre com o chute:";
        cin >> chute;
        chute = toupper(chute);

        chutou[chute] = true;

        bool isRight = validateKick(chute);
        if (isRight) {
            cout << "Parabéns, você acertou o chute\n";
	    bool acertouTodas = true;
	    for (char letra : secret_word) {
		if (chutou[letra]) {
			acertouTodas = true;
		} else {
			acertouTodas = false;
			break;
		}
	    }
	    acertou = acertouTodas;
        } else {
            cout << "Você errou o chute!\n";
            wrong_kicks.push_back(chute);
        }
    }
    printResult(acertou);
    if (acertou) {
	cout << "Deseja adicionar uma nova palavra no jogo ? (S/N)" << endl;
	char yes_no;
	cin >> yes_no;
	if (toupper(yes_no) == 'S') {
		string new_word;
		cin >> new_word;
		vector<string> words = readFile();
		words.push_back(new_word);
		add_word_in_file(words);
	}
    }
}
