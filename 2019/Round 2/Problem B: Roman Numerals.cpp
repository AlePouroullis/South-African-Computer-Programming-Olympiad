// Solution by Alexandros Pouroullis
#include <bits/stdc++.h>

map<char, int> rom_numeral;

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
    while(sum){
        if(sum >= 1000){
            roman_numeral += "M";
            sum -= 1000;
        }
        else if(sum >= 900){
            roman_numeral += "CM";
            sum -= 900;
        }
        else if(sum >= 500){
            roman_numeral += "D";
            sum -= 500;
        }
        else if(sum >= 400){
            roman_numeral += "CD";
            sum -= 400;
        }
        else if(sum >= 100){
            roman_numeral += "C";
            sum -= 100;
        }
        else if(sum >= 90){
            roman_numeral += "XC";
            sum -= 90;
        }
        else if(sum >= 50){
            roman_numeral += "L";
            sum -= 50;
        }
        else if(sum >= 40){
            roman_numeral += "XL";
            sum -= 40;
        }
        else if(sum >= 10){
            roman_numeral += "X";
            sum -= 10;
        }
        else if(sum >= 9){
            roman_numeral += "IX";
            sum -= 9;
        }
        else if(sum >= 5){
            roman_numeral += "V";
            sum -= 5;
        }
        else if(sum >= 4){
            roman_numeral += "IV";
            sum -= 4;
        }
        else{
            roman_numeral += "I";
            sum -= 1;
        }

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
