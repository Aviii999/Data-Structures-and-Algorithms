#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{0, 1, 0, 1, 2, 0, 1, 0, 1, 2, 0, 2, 0, 2, 2, 1};
    int zero, one, two;
    zero = one = two = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        else if (arr[i] == 1)
        {
            one++;
        }
        else if (arr[i] == 2)
        {
            two++;
        }
    }

    int i = 0;
    while (zero--)
    {
        arr[i] = 0;
        i++;
    }
    while (one--)
    {
        arr[i] = 1;
        i++;
    }
    while (two--)
    {
        arr[i] = 2;
        i++;
    }
    for(int i =0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
