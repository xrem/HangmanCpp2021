#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <time.h>
#include "Graphics.h"

using namespace std;

string dictionary_path = "C:\\Users\\Admin\\Desktop\\russian_nouns.txt";
vector<string> words = vector<string>();

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    ifstream dict(dictionary_path);

    while (!dict.eof())
    {
        string word;
        getline(dict, word);
        words.push_back(word);
    }
    dict.close();

    string selected_word = words[rand() % words.size()];
    string display_word = "";
    
    int attempts = 6;
    while (attempts >= 0) {
        system("cls"); // clear для Mac/*nix
        Graphics::print(attempts);
        cout << selected_word << endl;
        string tmp;
        getline(cin, tmp);
        attempts--;
    }
}