#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    vector<int> vec2 = {1, 2, 3, 4, 5};

    vector<int> vec3(5, 0);

    for (int x : vec2)
    {
        cout << x << " ";
    }
}