// Solution by Alexandros Pouroullis
#include <bits/stdc++.h>

using namespace std;

map<char, int> rom_numeral;
string numerals[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
int values[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
string roms;

int RomToInt(string rom){
    int sum = 0;
    char prev;
    for(int i = rom.size() - 1; i >= 0; i--){
        if(i == rom.size()-1)
            prev = rom[i];
        if(rom_numeral[prev] > rom_numeral[rom[i]])
            sum -= rom_numeral[rom[i]];
        else{
            prev = rom[i];
            sum += rom_numeral[rom[i]];
        }
    }
    return sum;
}

string IntToRom(int sum){
    string roman_numeral = "";
    int cnt = 0;
    int i = 12;
    while(sum){
        int quotient = sum / values[i];
        while(quotient--)
            roman_numeral += numerals[i];
        sum %= values[i];
        i--;
    }
    return roman_numeral;
}

int main(){
    rom_numeral['I'] = 1;
    rom_numeral['V'] = 5;
    rom_numeral['X'] = 10;
    rom_numeral['L'] = 50;
    rom_numeral['C'] = 100;
    rom_numeral['D'] = 500;
    rom_numeral['M'] = 1000;

    string rom1, rom2;
    cin >> rom1 >> rom2;

    int sum = RomToInt(rom1) + RomToInt(rom2);

    cout << IntToRom(sum) << endl;
}
