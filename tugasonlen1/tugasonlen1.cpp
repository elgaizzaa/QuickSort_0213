// tugasonlen1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//aray of integers to hold values
int arr[20];
int cmp_count = 0; // number of comparasion
int mov_count = 0; // number of data movements
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
//swaps the element at index x with the element at index y
void swap(int x, int y)
{
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
    mov_count++;


}
void q_short(int low, int high)
{
int temp;
int pivot, i, j;
if (low > high) {// step 1
    return;
}

int main()
{
    std::cout << "Hello World!\n";
}

