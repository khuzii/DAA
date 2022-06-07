#include <vector>
#include <iostream>
using namespace std;
void linearsearch(vector<int> v, int n, int s)
{
    int f = 0;
    for (int j = 0; j < n; j++)
    {
        if (v[j] == s)
        {
            cout << "Present " << j + 1 << endl;
            f = 1;
            break;
        }
    }
    if (f == 0)
        cout << "Not Present " << n << endl;
}
int main()
{
    int t, n, temp, s;
    vector<int> v;
    cin >> t;
    while (t)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        cin >> s;
        linearsearch(v, n, s);
        t--;
        v.clear();
    }
}
