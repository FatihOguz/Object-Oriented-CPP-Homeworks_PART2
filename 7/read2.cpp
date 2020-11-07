#include "read2.h"

void rand(int arr[],int number)		/* produce number randomly and assign array */
{
	int line;
	srand (time(NULL));
	for(int i=0;i<10;i++)
	{
		line = rand() % number;
		arr[i]=line;
	}
	
}


void rand(int arr[],int arr1[],int arr2[],int number)		/* produce number randomly and assign array */
{
	int line;
	int index;
	int flag=1,flag1=1,flag2=1;
	srand (time(NULL));
	for(int i=0;i<10;i++)
	{
		line = rand() % number;
		flag=search(arr,i,line,index);
		if(flag==0)
		{
			arr[i]=line;
			flag=1;
		}
		else
		{
			i--;
			flag=1;flag1=1;flag2=1;
		}
		
	}

	for(int i=0;i<10;i++)
	{
		line = rand() % number;
		flag=search(arr,10,line,index);
		flag1=search(arr1,i,line,index);
		if(flag==0 && flag1==0)
		{
			arr1[i]=line;
			flag=1;
			flag1=1;
		}
		else
		{
			i--;
			flag=1;flag1=1;flag2=1;
		}
		
	}
	for(int i=0;i<10;i++)
	{
		line = rand() % number;
		flag=search(arr,10,line,index);
		flag1=search(arr1,10,line,index);
		flag2=search(arr2,i,line,index);
		if(flag==0 && flag1==0 && flag2==0)
		{
			arr2[i]=line;
			flag=1;
			flag1=1;
			flag2=1;
		}
		else
		{
			i--;
			flag=1;flag1=1;flag2=1;
		}
		
	}
	
}

int search(int arr[],int size,int target,int & index)		/*find target in array*/
{
	for(int i=0;i<size;i++)
	{
		if(target==arr[i])
		{
			index=i;
			return 1;
			
		}
	}
	return 0;
}
void init6(int arr[],int arr1[],int arr2[],person p[])
{

	int flag=0,flag1=0,flag2=0;
	int index1,index2,index3;
	ifstream inputStream;
	string a,nameVal,surnameVal;
	inputStream.open("personnellist.txt");
	int count=0;
	while(!inputStream.eof())
	{
		getline(inputStream,a);
		flag=search(arr,10,count,index1);
		flag1=search(arr1,10,count,index2);
		flag2=search(arr2,10,count,index3);
		if(flag==1 )
		{
			istringstream some_stream(a);									
			some_stream>>nameVal>>surnameVal>>a;
			
			p[index1].name=nameVal;
			p[index1].surname=surnameVal;
			flag=0;
			flag1=0;
			flag2=0;
			
		}
		else if(flag1==1 )
		{
			istringstream some_stream(a);									
			some_stream>>nameVal>>surnameVal>>a;
			
			p[index2+10].name=nameVal;
			p[index2+10].surname=surnameVal;
			flag=0;
			flag1=0;
			flag2=0;
			
		}
		else if(flag2==1 )
		{
			istringstream some_stream(a);									
			some_stream>>nameVal>>surnameVal>>a;
			
			p[index3+20].name=nameVal;
			p[index3+20].surname=surnameVal;
			flag=0;
			flag1=0;
			flag2=0;
			
		}
		
		count++;

	}
	inputStream.close();
}
