#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> nums, int n, int target, int searchFirst)
{
    int low = 0, high = n - 1;
    int result = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (target == nums[mid])
        {
            result = mid;
            if (searchFirst)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else if (target < nums[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return result;
}

int main(void)
{
    int temp, t, n, target;
    vector<int> v;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        cin >> target;
        int first = binarySearch(v, n, target, 1);
        int last = binarySearch(v, n, target, 0);
        int count = last - first + 1;
        if (first != -1)
        {
            cout << target << " - " << count<<endl;
        }
        else
        {
            cout << "Key not present";
        }
v.clear();
    }
    return 0;
}
