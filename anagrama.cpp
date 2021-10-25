#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool is_palin(string palavra);
string ask_word(int value);
bool is_anam(string palavra1, string palavra2);

int main()
{
    string palavra1 = ask_word(1), palavra2 = ask_word(2);
    cout<<is_anam(palavra1, palavra2);
    
    return 0;
}

bool is_palin(string palavra)
{
    for (int i = 0; i < palavra.length() / 2; i++)
    {
        if (int(palavra[i]) == int(palavra[palavra.length() - 1 - i])) continue;
        return false;
    }
    return true;
}

bool is_anam(string palavra1, string palavra2)
{
    if (palavra1.length() != palavra2.length()) return false;

    int size = 26;
    vector<int> count1(size, 0);
    vector<int> count2(size, 0);

    for (int i = 0; i < palavra1.length(); i++) {
        count1[int(palavra1[i]) - 97] += 1;
        count2[int(palavra2[i]) - 97] += 1;
    }

    for (int i = 0; i < size; i++) {
        if (count1[i] != count2[i]) return false;
    }

    return true;
}

string ask_word(int value)
{
    string word;
    cout<<"Digite a palavra "<<value<<": ";
    getline (cin, word);
    cout<<"A palavra "<<value<< (is_palin(word) ? " " : " nao ")<<"eh palindromo\n";

    return word;
}