/*  replaceSubstring Function
Write a function named replaceSubstring. The function should accept three C-
string or string object arguments. Let's call them string1, string2, and string3.
It should search string1 for all occurrences of string2. When it finds an occurrence 
of string2, it should replace it with string3. For example, suppose the three arguments 
have the following values:
string1:  "the dog jumped over the fence"
string2:  "the"
string3:  "that"
With these three arguments, the function would return a string object with the value
"that dog jumped over that fence." Demonstrate the function in a complete program.
*/

#include <iostream>
#include <string>

using namespace std;

string replaceSubstring(string, string, string);

int main()
{
    string str1 = "the dog jumped over the fence";
    string str2 = "the";
    string str3 = "that";

    cout << replaceSubstring(str1, str2, str3) << endl;

    return 0;
}

string replaceSubstring(string str1, string str2, string str3)
{
    int index = 0;

    while (index != -1)
    {
        index = str1.find(str2, index);

        if (index != -1)
        {
            str1.replace(index, str2.length(), str3);
        }
    }

    return str1;
}
