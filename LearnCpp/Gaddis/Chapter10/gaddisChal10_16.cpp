/*  Pig Latin
Write a program that reads a sentence as input and converts each word to "Pig 
Latin." In one version, to convert a word to Pig Latin you remove the first letter and 
place that letter at the end of the word. Then you append the string "ay" to the word.
Here is an example:
English:
I SLEPT MOST OF THE NIGHT
Pig Latin:
IAY LEPTSAY OSTMAY FOAY HETAY IGHTNAY
*/

#include <iostream>
#include <string>

using namespace std;

string convertToPigLatin(const string&);
string convertSentenceToPigLatin(const string&);

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << convertSentenceToPigLatin(str) << endl;

    return 0;
}

string convertToPigLatin(const string& word) {
    if (word.length() > 1) {
        return word.substr(1) + word.substr(0, 1) + "ay";
    } else {
        // For single-letter words (like 'I' and 'A'), just append "ay"
        return word + "ay";
    }
}

string convertSentenceToPigLatin(const string& sentence) {
    string word;
    string pigLatinSentence;
    size_t start = 0; // Start of the current word

    for (size_t i = 0; i <= sentence.length(); ++i) {
        // Check if current character is a space or end of sentence
        if (i == sentence.length() || sentence[i] == ' ') {
            if (i > start) {
                word = sentence.substr(start, i - start);
                if (!pigLatinSentence.empty()) {
                    pigLatinSentence += " ";
                }
                pigLatinSentence += convertToPigLatin(word);
            }
            start = i + 1; // Update the start of the next word
        }
    }

    return pigLatinSentence;
}
