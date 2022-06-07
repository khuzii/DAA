#include <vector>
#include <iostream>
using namespace std;
void binarysearch(vector<int> v, int n, int s)
{
    int max = n;
    int min = 0;
    int mean, f = 0, c = 0;
    while (max > min)
    {
        c++;
        mean = (max + min) / 2;
        if (v[mean] == s)
        {
            cout << "Present " << c + 1 << endl;
            return;
        }
        else if (v[mean] > s)
            max = mean - 1;
        else
            min = mean + 1;
    }
    cout << "Not Present " << c + 1 << endl;
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
        binarysearch(v, n, s);

        t--;
        v.clear();
    }
}
