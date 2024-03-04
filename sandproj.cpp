#include <iostream>
#include <ctime>
//dota 2 heros picker
using namespace std;
int main()
{
    setlocale(0, "");
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTVWXYZ";
    string pers[] = { "Abaddon", "Alchemist", "Ancient Apparition", "Anti - Mage", "Arc Warden", "Axe",\
                      "Bane", "Batrider", "Beastmaster", "Bloodseeker", "Bounty Hunter", "Brewmaster", "Bristleback", "Broodmother",\
                      "Centaur Warrunner", "Chaos Knight", "Chen", "Clinkz", "Clockwerk", "Crystal Maiden",\
                      "Dark Seer", "Dark Willow", "Dawnbreaker", "Dazzle", "Death Prophet", "Disruptor", "Doom", "Dragon Knight", "Drow Ranger",\
                      "Earth Spirit", "Earthshaker", "Elder Titan", "Ember Spirit", "Enchantress", "Enigma",\
                      "Faceless Void", "Grimstroke", "Gyrocopter", "Hoodwink", "Huskar", "Invoker", "Io", "Jakiro", "Juggernaut",\
                      "Keeper of the Light", "Kunkka", "Legion Commander", "Leshrac", "Lich", "Lifestealer", "Lina", "Lion", "Lone Druid", "Luna", "Lycan",\
        'Bulbochka', 'Tolkach';
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
}