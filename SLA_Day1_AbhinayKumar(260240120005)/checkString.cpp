#include <iostream>
using namespace std;

int main()
{
    char str[200];
    int vowels = 0, consonants = 0;

    cout << "Enter a line of text: ";
    cin.getline(str, 200);

    for(int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        // Stop if character is not alphabet or space
        if(!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || ch == ' '))
            break;

        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowels++;
        }
        else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            consonants++;
        }
    }

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;

    return 0;
}