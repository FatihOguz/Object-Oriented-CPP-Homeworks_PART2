#include "story.h"
int main()
{

	int a;
	while(a!=0)
	{
		cout<<endl;
		cout<<"exit       ->   0"<<endl;
		cout<<"Liberal    ->   1"<<endl;
		cout<<"Communist  ->   2"<<endl;
		cout<<"Capitalist ->   3"<<endl;
		cout<<endl;
		cin>>a;
		if(a==1)
		{
			liberal();
		}
		else if(a==2)
		{
			communist();
		}
		else if(a==3)
		{
			capitalist(); 
		}
		else
		{
			
		}
	}
	
	
	
	return 0;
}
