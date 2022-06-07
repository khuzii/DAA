#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t, n, temp, temp1, min, comp = 0, swap = 0;
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
        comp = 0;
        swap = 0;
        for (int i = 0; i < n - 1; i++)
        {

            min = i;
            for (int j = i + 1; j < n; j++)
            {
                if (v[j] < v[min])
                {
                    min = j;
                }
                comp++;
            }
            temp1 = v[min];
            v[min] = v[i];
            v[i] = temp1;
            swap++;
        }
        t--;
        for (int i = 0; i < n; i++)
            cout << v[i] << "  ";
        cout << endl
             << "Comparisions = " << comp;
        cout << endl
             << "Swaps = " << swap<<endl;
        v.clear();
    }
}
