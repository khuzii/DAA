#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int t, n, temp;
    vector<int> v, sol;
    cin >> t;
    while (t)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        for (int i = 0; i < n - 2; i++)
        {
            int left = 0;
            int right = n - 1;
            while (left < right)
            {
                if (v[left] + v[right] == v[i])
                {
                    sol.push_back(left + 1);
                    sol.push_back(right + 1);
                    sol.push_back(i + 1);
                    break;
                }
                else if (v[left] + v[right] < v[i])
                    left++;
                else
                    right--;
            }
        }
        if (sol.empty())
            cout << "NO Sequence Found" << endl;
        else
        {
            sort(v.begin(), v.end());
            for (int i = 0; i < sol.size(); i++)
                cout << sol[i] << " , ";
        }
        cout << endl;
        v.clear();
        sol.clear();
        t--;
    }
}
