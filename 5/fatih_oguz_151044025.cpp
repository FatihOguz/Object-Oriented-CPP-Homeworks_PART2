#include <iostream>
/* decleration headers */
#include "ResearchAsistant.h"
#include "employee.h"
#include "AcademicPersonnel.h"
#include "AdministrativePersonnel.h"
#include "Lecturer.h"
#include "Secretary.h"
#include "Officer.h"
#include "read.h"
/* decleration  namespace */
using namespace std;
using namespace Employee_name;
using namespace AcademicPersonnel_name;
using namespace AdministrativePersonnel_name;
using namespace Lecturer_name;
using namespace ResearchAsistant_name;
using namespace Secretary_name;
using namespace Officer_name;



/*decleration actions enum*/
enum actions 
{   makeDoc, drinkTea, research, giveLesson, seeSuccessfulStudent, makePublish,manageProcess,giveHW,readHW,receivePetition,submitPetition};


int main()
{
	University * Uni = new University[1];		/*employee has a University class*/

	Lecturer * Lecturers;
	Secretary * Secretarys;
	ResearchAsistant * ResearchAsistants;
	Officer * Officers;

	int ResearchAsistantsSize=0;
	int LecturersSize=0;
	int OfficersSize=0;
	int SecretarysSize=0;

	int arr[10];
	int i = 0;

	rand(arr,20);
	read(arr,Lecturers,ResearchAsistants,Secretarys,Officers,LecturersSize,ResearchAsistantsSize,SecretarysSize, OfficersSize, Uni);
	Lecturers=new Lecturer[LecturersSize];
	ResearchAsistants=new ResearchAsistant[ResearchAsistantsSize];
	Secretarys=new Secretary[SecretarysSize];
	Officers=new Officer[OfficersSize];
	init(arr,Lecturers,ResearchAsistants,Secretarys,Officers,LecturersSize,ResearchAsistantsSize,SecretarysSize,OfficersSize,Uni);
/***********************************************************************************************************************************************************/
	/* if variables(lecturers,researchAsistants,secretary and officers) dont allocate, story scope cordump*/
	if(LecturersSize==0)
	{
		Lecturers=new Lecturer[1];
		LecturersSize=1;
	}
	if(OfficersSize==0)
	{	
		Officers=new Officer[1];
		OfficersSize=1;
	}
	if(SecretarysSize==0)
	{	
		Secretarys=new Secretary[1];
		SecretarysSize=1;
	}
	if(ResearchAsistantsSize==0)
	{
		ResearchAsistants=new ResearchAsistant[1];
		ResearchAsistantsSize=1;
	}
/****************************************************************************************************************************************************************/
	cout<<endl<<endl;
	int ra;
	int l=0,r=0,s=0,o=0;
	srand (time(NULL));		/* producer random number */
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
	cout<<"Contribution of Uni is "<<Lecturers[0].getEmp()<<endl;
	
	
	
	delete [] Lecturers;
	delete [] Officers;
	delete [] ResearchAsistants;
	delete [] Secretarys;
	delete [] Uni;	
	return 0;
}
