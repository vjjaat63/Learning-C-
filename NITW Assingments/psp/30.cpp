#include <iostream>
using namespace std;
struct cricket
{
string player_name;
string player_team;
float batting_average;
};
int main()
{
cricket c[50];
//data input
for(int i=0;i<50;i++)
{
cout<<"Enter the information of player "<<i+1<<endl;
cout<<"Enter the player name : ";
cin>>c[i].player_name;
cout<<"Enter the name of the player's team : ";
cin>>c[i].player_team;
cout<<"Enter the batting average of the player : " ;
cin>>c[i].batting_average;
cout<<endl;
}

string team;
cout<<"Enter the name of the team whose data you wants : ";
cin>>team;
for(int i=0;i<50;i++)
{
	if(team==c[i].player_team)
	{
	cout<<"Name : "<<c[i].player_name<<endl;
	cout<<"Batting average : "<<c[i].batting_average<<endl;
	}
}
}
