#include <iostream>
#include <vector>
using namespace std;

int Partition(vector<int> &v, int start, int end)
{

    int pivot = end;
    int j = start;
    for (int i = start; i < end; ++i)
    {
        if (v[i] < v[pivot])
        {
            swap(v[i], v[j]);
            ++j;
        }
    }
    swap(v[j], v[pivot]);
    return j;
}

void Quicksort(vector<int> &v, int start, int end)
{

    if (start < end)
    {
        int p = Partition(v, start, end);
        Quicksort(v, start, p - 1);
        Quicksort(v, p + 1, end);
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
        Quicksort(v, 0, n - 1);
        t--;
        for (int i = 0; i < n; i++)
            cout << v[i] << "  ";
cout<<endl;
        v.clear();
    }
}
