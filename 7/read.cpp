#include "read.h"

enum actions 
{   makeDoc, drinkTea, research, giveLesson, seeSuccessfulStudent, makePublish,manageProcess,giveHW,readHW,receivePetition,submitPetition};


/* find employyees of size*/
template<class T>
void read(int arr[],Lecturer<T>  * Lecturers,ResearchAsistant<T>  * ResearchAsistants,Secretary<T>  * Secretarys,Officer<T>  * Officers,	
											int & LecturersSize,int & ResearchAsistantsSize,int  & SecretarysSize, int &  OfficersSize,University<T> * Uni)
{

	int flag=0;
	int index;
	ifstream inputStream;
	string arr1,nameVal,surnameVal;
	inputStream.open("personnellist.txt");
	int count=0;
	while(!inputStream.eof())
	{
		getline(inputStream,arr1);
		flag=search(arr,10,count,index);
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
template<class T>
void init(int arr[],Lecturer<T>  * Lecturers,ResearchAsistant<T>  * ResearchAsistants,Secretary<T>  * Secretarys,Officer<T>  * Officers,	
											int LecturersSize,int  ResearchAsistantsSize,int   SecretarysSize, int   OfficersSize,University<T> * Uni)
{

	int flag=0;
	int index;
	int l=0,r=0,s=0,o=0;
	ifstream inputStream;
	string arr1,nameVal,surnameVal;
	inputStream.open("personnellist.txt");
	int count=0;
	while(!inputStream.eof())
	{
		getline(inputStream,arr1);
		flag=search(arr,10,count,index);
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


template<class T>
void action(Lecturer<T>  * Lecturers,ResearchAsistant<T>  * ResearchAsistants,Secretary<T>  * Secretarys,Officer<T>  * Officers,	
											int LecturersSize,int  ResearchAsistantsSize,int   SecretarysSize, int   OfficersSize,int random)
{
	int ra;
	int l=0,r=0,s=0,o=0;
	srand (random);		/* producer random number */
	for(int i=0;i<50;i++)
	{
		ra= rand() % 11;
		if(ra==makeDoc) /*enum*/
		{
			o=rand()%OfficersSize;
			Officers[o].makeDoc();
			cout<<"Officer have document.Therefore, Officer make document. Happinies of Officer is "<<Officers[o].getHappiness()<<", contribution of uni is "<<Officers[o].getEmp()<<endl;
		
		}
		
		else if(ra==drinkTea)/*enum*/
		{
			ra=rand() % 4;		/*select employee for drinkTea action randomly */
			if(ra==0)
			{
				r=rand()%ResearchAsistantsSize;
				ResearchAsistants[r].drinkTea();
				 cout<<"Research Asistant have slackness. Therefore, Research Asistant drinks tea. Happinies of Research Asistant is "<<ResearchAsistants[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants[r].getEmp()<<endl;
				
			}
			else if(ra==1)
			{
				l=rand()%LecturersSize;
				Lecturers[l].drinkTea();
				 cout<<"Lecturer have slackness. Therefore, Lecturer drinks tea. Happinies of Lecturer is "<<Lecturers[l].getHappiness()<<", contribution of uni is "<<Lecturers[l].getEmp()<<endl;
			}
			else if(ra==2)
			{
				s=rand()%SecretarysSize;
				Secretarys[s].drinkTea();
				 cout<<"Secretary have slackness. Therefore, Secretary drinks tea. Happinies of Secretary is "<<Secretarys[s].getHappiness()<<", contribution of uni is "<<Secretarys[s].getEmp()<<endl;
			}
			else if(ra==3)
			{
				o=rand()%OfficersSize;
				Officers[o].drinkTea();
				 cout<<"Officer have slackness. Therefore, Officer drinks tea. Happinies of Officer is "<<Officers[o].getHappiness()<<", contribution of uni is "<<Officers[o].getEmp()<<endl;
			}
		}
		else if(ra==research)/*enum*/
		{
			r=rand()%ResearchAsistantsSize;
			 ResearchAsistants[r].research();
			 cout<<"Research Asistant have project.Therefore, Research Asistant research. Happinies of Research Asistant is "<<ResearchAsistants[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants[r].getEmp()<<endl;
		}
		else if(ra==giveLesson)/*enum*/
		{
			l=rand()%LecturersSize;
			Lecturers[l].giveLesson();
			cout<<"Lecturer have lesson.Therefore, Lecturer give lesson. Happinies of Lecturer is "<<Lecturers[l].getHappiness()<<", contribution of uni is "<<Lecturers[l].getEmp()<<endl;
		
		}
		else if(ra==seeSuccessfulStudent)/*enum*/
		{
			 ra=rand() % 2;/*select employee for seeSuccessfulStudent action randomly */
			if(ra==0)
			{
				r=rand()%ResearchAsistantsSize;
				ResearchAsistants[r].seeSuccessfulStudent();
				cout<<"Lecturer have seminar.Therefore, Lecturer see successful student. Happinies of Lecturer is "<<Lecturers[l].getHappiness()<<", contribution of uni is "<<Lecturers[l].getEmp()<<endl;
			}
			else if(ra==1)
			{
				l=rand()%LecturersSize;
				Lecturers[l].seeSuccessfulStudent();
				cout<<"ResearchAsistant have seminar.Therefore, ResearchAsistant see successful student. Happinies of ResearchAsistant is "<<ResearchAsistants[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants[r].getEmp()<<endl;
		
			}

		}
		else if(ra==makePublish)/*enum*/
		{
			  ra=rand() % 2;/*select employee for makePublish action randomly */
			if(ra==0)
			{
				r=rand()%ResearchAsistantsSize;
				ResearchAsistants[r].makePublish();
				cout<<"Research Asistant have academic paper.Therefore, Research Asistant make publish. Happinies of Research Asistant is "<<ResearchAsistants[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants[r].getEmp()<<endl;
			}
			else if(ra==1)
			{
				l=rand()%LecturersSize;
				Lecturers[l].makePublish();
				cout<<"Lecturer have academic paper.Therefore, Lecturer make publish. Happinies of Lecturer is "<<Lecturers[l].getHappiness()<<", contribution of uni is "<<Lecturers[l].getEmp()<<endl;
			}
		}
		else if(ra==manageProcess)/*enum*/
		{
			 ra=rand() % 2;/*select employee for manageProcess action randomly */
			if(ra==0)
			{
				s=rand()%SecretarysSize;
				Secretarys[s].manageProcess();
				cout<<"Secretary have administration.Therefore, Secretary make menage process. Happinies of Secretary is "<<Secretarys[s].getHappiness()<<", contribution of uni is "<<Secretarys[s].getEmp()<<endl;
		
			}
			else if(ra==1)
			{
				o=rand()%OfficersSize;
				Officers[o].manageProcess();
				cout<<"Officer have administration.Therefore, Officer make menage process. Happinies of Officer is "<<Officers[o].getHappiness()<<", contribution of uni is "<<Officers[o].getEmp()<<endl;
		
			}
		}
		else if(ra==giveHW)/*enum*/
		{
			l=rand()%LecturersSize;
			Lecturers[l].giveHW();
			cout<<"Lecturer have homework time.Therefore, Lecturer give Homework. Happinies of Lecturer is "<<Lecturers[l].getHappiness()<<", contribution of uni is "<<Lecturers[l].getEmp()<<endl;
		
		}
		else if(ra==readHW)/*enum*/
		{
			r=rand()%ResearchAsistantsSize;
			ResearchAsistants[r].readHW();
			cout<<"Research Asistant have homework time out.Therefore, Research Asistant read homework. Happinies of Research Asistant is "<<ResearchAsistants[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants[r].getEmp()<<endl;
		}
		else if(ra==receivePetition)/*enum*/
		{
			s=rand()%SecretarysSize;
			Secretarys[s].receivePetition();
			cout<<"Secretary have incident.Therefore, Secretary receive petition. Happinies of Secretary is "<<Secretarys[s].getHappiness()<<", contribution of uni is "<<Secretarys[s].getEmp()<<endl;
		}
		else if(ra==submitPetition)/*enum*/
		{
			 ra=rand() % 4;/*select employee for submitPetition action randomly */
			if(ra==0)
			{
				r=rand()%ResearchAsistantsSize;
				ResearchAsistants[r].submitPetition();
				cout<<"ResearchAsistant have solution.Therefore, ResearchAsistant submit petition. Happinies of ResearchAsistant is "<<ResearchAsistants[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants[r].getEmp()<<endl;
			}
			else if(ra==1)
			{
				l=rand()%LecturersSize;
				Lecturers[l].submitPetition();
				cout<<"Lecturer have solution.Therefore, Lecturer submit petition. Happinies of Lecturer is "<<Lecturers[l].getHappiness()<<", contribution of uni is "<<Lecturers[l].getEmp()<<endl;
			}
			else if(ra==2)
			{
				s=rand()%SecretarysSize;
				Secretarys[s].submitPetition();
				cout<<"Secretary have solution.Therefore, Secretary submit petition. Happinies of Secretary is "<<Secretarys[s].getHappiness()<<", contribution of uni is "<<Secretarys[s].getEmp()<<endl;
		

			}
			else if(ra==3)
			{
				o=rand()%OfficersSize;
				Officers[o].submitPetition();
				cout<<"Officer have solution.Therefore, Officer submit petition. Happinies of Officer is "<<Officers[o].getHappiness()<<", contribution of uni is "<<Officers[o].getEmp()<<endl;
		
			}
		}
	}
	cout<<endl;
	/* write name surname happinies of employeers*/
	for(int i=0;i<LecturersSize;i++)
	{ 
		cout<<Lecturers[i].getName()<<" "<<Lecturers[i].getSurname()<<" Happinies of Lecturer is "<<Lecturers[i].getHappiness()<<"."<<endl;
	}
	for(int i=0;i<OfficersSize;i++)
	{
		cout<<Officers[i].getName()<<" "<<Officers[i].getSurname()<<" Happinies of Officer is "<<Officers[i].getHappiness()<<"."<<endl;
	}
	for(int i=0;i<ResearchAsistantsSize;i++)
	{
		cout<<ResearchAsistants[i].getName()<<" "<<ResearchAsistants[i].getSurname()<<" Happinies of ResearchAsistant is "<<ResearchAsistants[i].getHappiness()<<"."<<endl;
	}
	for(int i=0;i<SecretarysSize;i++)
	{
		cout<<Secretarys[i].getName()<<" "<<Secretarys[i].getSurname()<<" Happinies of Secretary is "<<Secretarys[i].getHappiness()<<"."<<endl;
	}
	/* write contribution of Univeersity */
	cout<<"Contribution of Uni is "<<Lecturers[0].getEmp()<<endl<<endl<<endl;
}
