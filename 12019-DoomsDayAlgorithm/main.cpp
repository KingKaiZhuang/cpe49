#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;
    int doomsday[13] = {0, 10, 21, 0, 4, 9, 6, 11, 8, 5, 10, 7, 12};
    string days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    while (number--)
    {
        int month, day;
        cin >> month >> day;

        int difference = day - doomsday[month];

        int dayofweek = (difference % 7 + 7) % 7;

        cout << days[dayofweek] << endl;
    }

    return 0;
}