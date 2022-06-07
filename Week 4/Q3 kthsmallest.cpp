#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        priority_queue<int> pq;
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int k;
        cin >> k;
        for (int i = 0; i < k; i++)
        {
            pq.push(arr[i]);
        }

        for (int i = k; i < n; i++)
        {
            if (arr[i] < pq.top())
            {
                pq.pop();
                pq.push(arr[i]);
            }
        }
        cout << pq.top() << endl;
    }
}
