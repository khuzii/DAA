#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int t, n, temp,target,c=0;
    vector<int> v, sol;
    cin >> t;
    while (t)
    {
        c=0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        cin>>target;
        sort(v.begin(),v.end());
        int left = 0;
            int right = 0;
            while (right<n)
            {
                if(v[right]-v[left]==target)
                {
                    c++;
                    right++;
                    left++;
                }
                else if(v[right]-v[left]>target)
                left++;
                else
                right++;
            }
            cout<<c<<endl;
        t--;
    }
}
