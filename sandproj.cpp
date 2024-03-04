#include <iostream>
#include <ctime>
//dota 2 heros picker
using namespace std;
int main()
{
    setlocale(0, "");
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTVWXYZ";
    string pers[] = {
        'Bulbochka', 'Tolkach' };
    srand(time(NULL));
    int index_alpha = rand() % 25;
    int size_pers = sizeof(pers) / 40;
    cout << "Буква: " << alphabet[index_alpha] << endl;
    cout << "Персонажи:";
    int number = 1;
    for (int i = 0; i < size_pers; i++)
    {
        if (pers[i][0] == alphabet[index_alpha])
        {
            cout << "\n" << number << ") " << pers[i];
            number++;
        }
    }
    cout << "\n";
    ||||||||||||||||jhjbubjkkmk
}