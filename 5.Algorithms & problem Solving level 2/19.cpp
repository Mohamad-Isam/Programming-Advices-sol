#include<bits/stdc++.h>
using namespace std;

int print_random_numbers(int From, int To)
{

    return rand() % (To - From + 1) + From;
}


int main()
{
    srand((unsigned) time(NULL));
    cout << print_random_numbers(20, 240) << endl;
    cout << print_random_numbers(20, 240) << endl;
    cout << print_random_numbers(20, 240) << endl;
    return 0;
}
