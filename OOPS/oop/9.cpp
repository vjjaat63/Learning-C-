#include <iostream>
using namespace std;
class team{
 public:
 string name;
 static int count;
 int age;
   team(string Name,int Age)
  {
   name = Name;
   age = Age;
   count ++;
  }
  
 void total()
{
cout<<count<<endl;
}
};
int team::count =0;
int main()
{
team p1("A",23) , p2 ("B",12),p3("c",32);
p1.total();
return 0;
}
