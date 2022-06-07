#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void printCommon(vector<int> v, int n, vector<int> w, int t)
{

    int i = 0, j = 0;

    while (n > i && t > j)
    {

        if (v[i] < w[j])
        {
            i++;
        }
        else if (w[j] < v[i])
        {
            j++;
        }
        else
        {

            cout << v[i] << " ";
            i++;
            j++;
        }
    }
}
int main()
{
    int t, n, temp;
    vector<int> v, w;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> temp;
        w.push_back(temp);
    }
    printCommon(v, n, w, t);
}
