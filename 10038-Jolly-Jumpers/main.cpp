#include <iostream>
using namespace std;

int main()
{
    string numbers;
    int current_number, next_number;
    int record1, record2;

    while (cin >> numbers)
    {
        for (int i = 1; i < numbers.size(); i++)
        {
            current_number = numbers[i - 1] - '0';
            next_number = numbers[i] - '0';
            // cout << "curent : " << current_number << endl;
            // cout << "next_number : " << next_number << endl;
            record1 = abs(current_number - next_number);
        }
    }
}