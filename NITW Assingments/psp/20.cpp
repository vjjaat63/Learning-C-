#include <iostream>
using namespace std;
int main() {
    string main, sub;

    // Input the main string and substring
    cout << "Enter the main string: "<<endl;
    cin >> main;
    cout << "Enter the substring: "<<endl;
    cin >> sub;

    int m = main.length();
    int s = sub.length();

    // Search for the substring
    for (int i = 0; i <= m - s; i++)
      {
	bool count=1;
	if(main[i]==sub[0])
	{
            for (int j = 0; j < s; j++)
	 {
		if(main[i+j]!=sub[j])
		{
		count=0;
		break;
		}
	}
       	if(count)
	cout<<"index is : "<<i<<endl;
    }
}
    return 0;
}

