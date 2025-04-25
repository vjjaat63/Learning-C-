#include <iostream>
using namespace std;
int main()
{
    int a[5] = {45, 234, 634, -434, 34};
    int ans = a[0];
    for (int i = 0; i < 6; i++)
    {
        if (a[i] < ans)
        {
            ans = a[i];
        }
    }
    cout << "Shortest integer in the array is : " << ans << endl;
    for (int i = 0; i < 6; i++)
    {
        if (a[i] > ans)
        {
            ans = a[i];
        }
    }
    cout<<"Largest integer in the array is : "<<ans;
    
}