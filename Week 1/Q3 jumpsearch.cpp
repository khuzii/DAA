#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int jump_Search(vector<int> array, int size, int key)
{
    int start = 0;
    int end = sqrt(size);
    int c = 0;
    while (array[end] <= key && end < size)
    {
        c++;
        start = end;
        end += sqrt(size);
        if (end > size - 1)
            end = size;
    }

    for (int i = start; i < end; i++)
    {
        c++;
        if (array[i] == key)
            return c;
    }
    return -1;
}

int main()
{
    int n, s, loc, t, temp;
    vector<int> v;
    cin >> t;
    while (t)
    {
        loc = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        cin >> s;
        loc = jump_Search(v, n, s);
        if (loc >= 0)
            cout << "\nPresent " << loc;
        else
            cout << "\nNot Present " << n / 2;
        t--;
        v.clear();
    }
}
