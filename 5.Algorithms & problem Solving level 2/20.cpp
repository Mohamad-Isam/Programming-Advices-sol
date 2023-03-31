#include<bits/stdc++.h>
using namespace std;

int randomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

enum enCharType {SMALL_LETTER = 1, CAPITAL_LETTER = 2,
 SPECIAL_CHAR = 3, DIGIT = 4};
char getRandomChar(enCharType charType)
{
    switch(charType)
    {
    case enCharType::SMALL_LETTER:
        return randomNumber(97, 122);
    case enCharType::CAPITAL_LETTER:
        return randomNumber(65, 90);
    case enCharType::SPECIAL_CHAR:
        return randomNumber(33, 47);
    case enCharType::DIGIT:
        return randomNumber(48, 57);
    }
}

int main()
{
    srand((unsigned) time(NULL));
    cout << getRandomChar(enCharType::SMALL_LETTER) << '\n';
    cout << getRandomChar(enCharType::CAPITAL_LETTER) << '\n';
    cout << getRandomChar(enCharType::SPECIAL_CHAR) << '\n';
    cout << getRandomChar(enCharType::DIGIT) << '\n';
    return 0;
}
