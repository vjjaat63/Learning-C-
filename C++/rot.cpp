#include <iostream>
using namespace std;
int main()
{
    int a[5] = {1, 2, 3, 4, 5}, r, temp, j = 0;
    cout << "enter the number of rotations : ";
    cin >> r;
    while (j < r)
    {
        temp=a[4];
        for (int i = 0; i < 4 ; i++)
            {
                a[4-i]=a[3-i];
            }
        a[0]=temp;
        j++;
    }
    cout << "the rotated array is : ";
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<" ";
    }
    
}