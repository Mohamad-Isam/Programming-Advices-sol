#include<bits/stdc++.h>
using namespace std;

int readGrade()
{
    int grade;
    cout << "Enter the student's grade : \n";
    cin >> grade;

    return grade;
}

char grade(int num)
{
    switch(num)
    {
    case 90 ... 100:
        return 'A';
    case 80 ... 89:
        return 'B';
    case 70 ... 79:
        return 'C';
    case 60 ... 69:
        return 'D';
    case 50 ... 59:
        return 'E';
    default:
        return 'F';
    }
}

void printGrade(int num)
{
    cout << "The result = " << grade(num) << "\n";
}

int main()
{
    printGrade(readGrade());

    return 0;
}
