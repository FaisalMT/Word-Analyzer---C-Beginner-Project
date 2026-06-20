#include <iostream>
#include <string>
using namespace std;

int main()
{
    char confirm;
    do {
    string word;
    bool contains = false;
    char charsearch;
    cout << "Enter a word: ";
    cin >> word;
    cout <<"Enter a character to search: ";
    cin >> charsearch;
    
    cout << "Length: " << word.length() << endl;
    cout << "First letter: " << word.front() << endl;
    cout <<"Last letter: " << word.back() << endl;
    for(int i = 0; i<word.length();i++)
    {
        if(word[i] == charsearch)
        {
        contains = true;
        break;
        }
    }
    if(contains)
    {
        cout << "Contains '" << charsearch <<"': Yes" << endl;
    }
    else
    cout << "Contains '" << charsearch <<"': No" << endl;
    cout << endl;
    cout << "Would you like to repeat the process again?\n";
    cout <<"if Yes type Y, if No type N: ";
    cin >> confirm;
    } while(confirm == 'Y'|| confirm=='y');
    cout <<"Thank you for using my processor\n";
    cout <<"Best regards,\n Faisal Althaqeb";
}