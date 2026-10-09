// 15. Count subsequences with given sum K

#include <iostream>
using namespace std;

int countSumK(int arr[], int n, int index, int sum, int K)
{
    if(index == n)
    {
        if(sum == K)
            return 1;

        return 0;
    }

    int include = countSumK(arr, n, index + 1, sum + arr[index], K);

    int exclude = countSumK(arr, n, index + 1, sum, K);

    return include + exclude;
}

int main()
{
    int n, K;

    cout << "Enter array size: ";
    cin >> n;

    int arr[100];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter target sum K: ";
    cin >> K;

    int result = countSumK(arr, n, 0, 0, K);

    cout << "Total subsequences with sum "<< K << " = " << result << endl;

    return 0;
}