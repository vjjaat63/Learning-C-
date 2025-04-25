#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[5] = {45, 234, 634, -434, 34};
    int ans = a[0], ans2 = a[0],ans3=a[0];
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > ans)
        {
            ans = a[i];
        }
    }
    cout << "Largest integer in the array is : " << ans<<endl;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] != ans)
            ans2 = max(ans2, a[i]);
    }
    cout << "Second Largest integer is :"<< ans2<<endl;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] != ans && a[i]!=ans2)
        ans3=max(a[i],ans3);
    }
    cout<<"The third largest integer in the array is : "<<ans3;

}