#include <iostream>
#include <vector>
using namespace std;

void findmax(vector<char> v, int max, char c)
{
    vector<int> count(256, 0);

    for (int i = 0; i < v.size(); i++)
    {
        int j = v[i];

        count[j]++;
        if (max < count[j])
        {
            max = count[j];
            c = j;
        }
    }
    if (max <= 1)
        cout << "No duplicate found!" << endl;
    else
        cout << c << " - " << max << endl;
}
int main()
{
    int t, n, max = 0;
    char val;
    vector<char> v;
    cin >> t;
    while (t--)
    {
        max = 0;
        char c;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> val;
            v.push_back(val);
        }
        findmax(v, max, c);

        v.clear();
    }
}
