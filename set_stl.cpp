#include<iostream>
#include<set>
#include<algorithm>
using namespace std;


int main()
{
	set<int> s;
	
	int query,type,num,i;
	cin>>query;
	
	for (i=0;i<query;i++)
	{
		cin>>type>>num;
		
		switch(type){
			case 1: s.insert(num);
			break;
			
			case 2: s.erase(num);
			break;
			
			case 3: cout<<(s.find(num)==s.end()?"No":"Yes")<<endl;
			break;
		}
	}

}
