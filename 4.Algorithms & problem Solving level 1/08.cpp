#include <iostream>
using namespace std;

int readMark()
{
    int mark;

    cout << "Please, Enter the mark : " << endl;
    cin >> mark;
    return mark;
}

bool isPass(int mark)
{
    return mark >= 50;
}

void printResult(int mark)
{
    if (isPass(mark))
        cout << "\n PASS" << endl;
    else
        cout << "\n FAIL" << endl;
}

int main()
{

    printResult(readMark());
    return 0;
}
