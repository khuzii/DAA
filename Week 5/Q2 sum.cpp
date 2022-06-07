#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int t, n, temp, key, c = 0;
    vector<int> v;
    cin >> t;
    while (t)
    {
        c = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        cin >> key;
        sort(v.begin(), v.end());
        int left = 0;
        int right = n - 1;
        while (left < right)
        {
            if (v[left] + v[right] == key)
            {
                cout << v[left] << " " << v[right]<<endl;
                c = 1;
                break;
            }
            else if (v[left] + v[right] < key)
                left++;
            else
                right--;
        }
        if (c == 0)
            cout << "No Sequence Found" << endl;
        v.clear();
        t--;
    }
}
