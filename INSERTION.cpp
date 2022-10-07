#include <iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;

    int arr[k];
    for (int i = 0; i < k; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < k; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}