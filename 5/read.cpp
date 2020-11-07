#include "read.h"

void rand(int arr[],int number)		/* produce number randomly and assign array */
{
	int line;
	int flag=1;
	srand (time(NULL));
	for(int i=0;i<10;i++)
	{
		line = rand() % number+1;
		flag=search(arr,i,line);
		if(flag==0)
		{
			arr[i]=line;
			flag=1;
		}
		else
		{
			i--;
		}
		
	}
	
}

int search(int arr[],int size,int target)		/*find target in array*/
{
	for(int i=0;i<size;i++)
	{
		if(target==arr[i])
		{
			return 1;
		}
	}
	return 0;
}
/* find employyees of size*/
void read(int arr[],Lecturer  * Lecturers,ResearchAsistant  * ResearchAsistants,Secretary  * Secretarys,Officer  * Officers,	
											int & LecturersSize,int & ResearchAsistantsSize,int  & SecretarysSize, int &  OfficersSize,University * Uni)
{

	int flag=0;
	ifstream inputStream;
	string arr1,nameVal,surnameVal;
	inputStream.open("personnellist.txt");
	int count=0;
	while(!inputStream.eof())
	{
		getline(inputStream,arr1);
		flag=search(arr,10,count);
		if(flag==1)
		{
			istringstream some_stream(arr1);									
			some_stream>>arr1>>nameVal>>surnameVal;
			if(arr1=="Lecturer")
			{
				LecturersSize++;
			}
			else if(arr1=="Officer")
			{
				OfficersSize++;
			}
			else if(arr1=="Secretary")
			{
				SecretarysSize++;
			}
			else if(arr1=="ResearchAssistant")
			{
				ResearchAsistantsSize++;
			}
			flag=0;
		}
		
		count++;

	}
	inputStream.close();
	
}
/* initializied employees */
void init(int arr[],Lecturer  * Lecturers,ResearchAsistant  * ResearchAsistants,Secretary  * Secretarys,Officer  * Officers,	
											int LecturersSize,int  ResearchAsistantsSize,int   SecretarysSize, int   OfficersSize,University * Uni)
{

	int flag=0;
	int l=0,r=0,s=0,o=0;
	ifstream inputStream;
	string arr1,nameVal,surnameVal;
	inputStream.open("personnellist.txt");
	int count=0;
	while(!inputStream.eof())
	{
		getline(inputStream,arr1);
		flag=search(arr,10,count);
		if(flag==1)
		{
			istringstream some_stream(arr1);									
			some_stream>>arr1>>nameVal>>surnameVal;
			if(arr1=="Lecturer")
			{
				Lecturers[l].GTU_Contribution(Uni);			/*point one addrees*/
				Lecturers[l].setName(nameVal);
				Lecturers[l].setSurname(surnameVal);
				cout<<Lecturers[l].getName()<<" "<<Lecturers[l].getSurname()<<endl;
				l++;
				
			}
			else if(arr1=="Officer")
			{
				Officers[o].GTU_Contribution(Uni);			/*point one addrees*/
				Officers[o].setName(nameVal);
				Officers[o].setSurname(surnameVal);
				cout<<Officers[o].getName()<<" "<<Officers[o].getSurname()<<endl;
				o++;
				
			}
			else if(arr1=="Secretary")
			{
				Secretarys[s].GTU_Contribution(Uni);			/*point one addrees*/
				Secretarys[s].setName(nameVal);
				Secretarys[s].setSurname(surnameVal);
				cout<<Secretarys[s].getName()<<" "<<Secretarys[s].getSurname()<<endl;
				s++;
				
			}			   
			else if(arr1=="ResearchAssistant")
			{
				ResearchAsistants[r].GTU_Contribution(Uni);			/*point one addrees*/
				ResearchAsistants[r].setName(nameVal);
				ResearchAsistants[r].setSurname(surnameVal);
				cout<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()<<endl;
				r++;
				
			}
			flag=0;
			
		}
		
		count++;

	}
	inputStream.close();
}
