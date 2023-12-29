/*  Morse Code Converter
Morse code is a code where each letter of the English alphabet, each digit, and various 
punctuation characters are represented by a series of dots and dashes. Table 10-8 
shows part of the code.
Write a program that asks the user to enter a string, and then converts that string to 
Morse code. (Use hyphens for dashes and periods for dots.)

Table 10-8 Morse Code
Character Code Character Code Character Code Character Code
A .- N -. 0 -----
B -... O --- 1 .----
C -.-. P .--. 2 ..---
D -.. Q --.- 3 ...--
E . R .-. 4 ....-
F ..-. S ... 5 .....
G --. T - 6 -....
H .... U ..- 7 --...
I .. V ...- 8 ---..
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string morseCode(char);

int main()
{
    string str;
    string morse;

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        morse += morseCode(str[i]);
    }

    cout << morse << endl;

    return 0;
}

string morseCode(char ch)
{
    string code;

    switch (toupper(ch))
    {
        case 'A':
            code = ".-";
            break;
        case 'B':
            code = "-...";
            break;
        case 'C':
            code = "-.-.";
            break;
        case 'D':
            code = "-..";
            break;
        case 'E':
            code = ".";
            break;
        case 'F':
            code = "..-.";
            break;
        case 'G':
            code = "--.";
            break;
        case 'H':
            code = "....";
            break;
        case 'I':
            code = "..";
            break;
        case 'J':
            code = ".---";
            break;
        case 'K':
            code = "-.-";
            break;
        case 'L':
            code = ".-..";
            break;
        case 'M':
            code = "--";
            break;
        case 'N':
            code = "-.";
            break;
        case 'O':
            code = "---";
            break;
        case 'P':
            code = ".--.";
            break;
        case 'Q':
            code = "--.-";
            break;
        case 'R':
            code = ".-.";
            break;
        case 'S':
            code = "...";
            break;
        case 'T':
            code = "-";
            break;
        case 'U':
            code = "..-";
            break;
        case 'V':
            code = "...-";
            break;
        case 'W':
            code = ".--";
            break;
        case 'X':
            code = "-..-";
            break;
        case 'Y':
            code = "-.--";
            break;
        case 'Z':
            code = "--..";
            break;
        case '0':
            code = "-----";
            break;
        case '1':
            code = ".----";
            break;
        case '2':
            code = "..---";
            break;
        case '3':
            code = "...--";
            break;
        case '4':
            code = "....-";
            break;
        case '5':
            code = ".....";
            break;
        case '6':
            code = "-....";
            break;
        case '7':
            code = "--...";
            break;
        case '8':
            code = "---..";
            break;
        case '9':
            code = "----.";
            break;
        case '.':
            code = ".-.-.-";
            break;
        case ',':
            code = "--..--";
            break;
        case '?':
            code = "..--..";
            break;
        case ' ':
            code = " ";
            break;
        default:
            code = " ";
            break;
    }

    return code;
}
