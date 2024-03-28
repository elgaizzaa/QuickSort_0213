// tugasonlen1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//aray of integers to hold values
int arr[20];
int cmp_count = 0;
int mov_count = 0;
int n;

void input() {
    while (true)
    {
        cout << "masukan panjang elemen array :";
        cin >> n;

        if (n <= 20)
            break;
        else
            cout << "\nMaksimumpanjang aray adalah 20" << endl;
    }

    cout << "\n------------------" << endl;
    cout << "\nEnter Array Element" << endl;
    cout << "\n------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];

    }
}
int main()
{
    std::cout << "Hello World!\n";
}

