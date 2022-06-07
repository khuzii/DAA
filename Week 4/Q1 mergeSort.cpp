#include <iostream>
#include <vector>
using namespace std;

void MergeSortedIntervals(vector<int> &v, int s, int m, int e)
{
    vector<int> temp;
    int i, j;
    i = s;
    j = m + 1;

    while (i <= m && j <= e)
    {

        if (v[i] <= v[j])
        {
            temp.push_back(v[i]);
            ++i;
        }
        else
        {
            temp.push_back(v[j]);
            ++j;
        }
    }

    while (i <= m)
    {
        temp.push_back(v[i]);
        ++i;
    }

    while (j <= e)
    {
        temp.push_back(v[j]);
        ++j;
    }

    for (int i = s; i <= e; ++i)
        v[i] = temp[i - s];
}

void MergeSort(vector<int> &v, int s, int e)
{
    if (s < e)
    {
        int m = (s + e) / 2;
        MergeSort(v, s, m);
        MergeSort(v, m + 1, e);
        MergeSortedIntervals(v, s, m, e);
    }
}
int main()
{
    int t, n, temp;
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
        MergeSort(v, 0, n - 1);
        t--;
        for (int i = 0; i < n; i++)
            cout << v[i] << "  ";
cout<<endl;
        v.clear();
    }
}
