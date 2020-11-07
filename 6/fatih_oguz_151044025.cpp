#include <iostream>
/* decleration headers */
#include "ResearchAsistant.cpp"
#include "employee.cpp"
#include "University.cpp"
#include "AcademicPersonnel.cpp"
#include "AdministrativePersonnel.cpp"
#include "Lecturer.cpp"
#include "Secretary.cpp"
#include "Officer.cpp"
#include "read.cpp"
#include "yok.cpp"
#include "read2.h"
/* decleration  namespace */
using namespace std;
using namespace University_name;
using namespace Employee_name;
using namespace AcademicPersonnel_name;
using namespace AdministrativePersonnel_name;
using namespace Lecturer_name;
using namespace ResearchAsistant_name;
using namespace Secretary_name;
using namespace Officer_name;
using namespace Yok_name;

int main()
{
	
	UniversityType uniType;
	/**********************************************************/
	Yok<int> * Y =new Yok<int>;
	University<int> * Uni  ;		/*employee has a University class*/
	Lecturer<int> * Lecturers;
	Secretary<int> * Secretarys;
	ResearchAsistant<int> * ResearchAsistants;
	Officer<int> * Officers;

			/*employee has a University class*/
	Lecturer<int> * Lecturers1;
	Secretary<int> * Secretarys1;
	ResearchAsistant<int> * ResearchAsistants1;
	Officer<int> * Officers1;

			/*employee has a University class*/
	Lecturer<int> * Lecturers2;
	Secretary<int> * Secretarys2;
	ResearchAsistant<int> * ResearchAsistants2;
	Officer<int> * Officers2;

	/*********************************************/
	int ResearchAsistantsSize=0;
	int LecturersSize=0;
	int OfficersSize=0;
	int SecretarysSize=0;
	int UniSize=0;

	int ResearchAsistantsSize1=0;
	int LecturersSize1=0;
	int OfficersSize1=0;
	int SecretarysSize1=0;


	int ResearchAsistantsSize2=0;
	int LecturersSize2=0;
	int OfficersSize2=0;
	int SecretarysSize2=0;

	/*********************************************/
	//int arr[10],arr1[10],arr2[10];
	int * arr = new int [10];
	int * arr1 = new int [10];
	int * arr2 = new int [10];
	rand(arr,arr1,arr2,30);
	
/*********************************************************/
	int i = 0;
	person  p[30]; 
	init6(arr,arr1,arr2,p);
	string name="caner";
	string surname ="akin";
/*************************************************************/
	Uni[0]=Y->foundUni(Uni,UniSize,Uresearch);		
	Uni[0]=Y->foundUni(Uni,UniSize,Ulinguistic);	
	Uni[0]=Y->foundUni(Uni,UniSize,Utechnical);	
	Uni[2].setName("YTU");
	Uni[0].setName("GTU");
	Uni[1].setName("ITU");
/*********************************************************************************************************************************************************************************/	
int emp[10];
rand(emp,4);

/**********************************************************************************************************************************************************************************/

	cout<<endl<<endl;
	cout<<"										"<<Uni[0].getName()<<"   UNIVERSITY";
	cout<<endl<<endl;


for(int i=0;i<10;i++)
{
	if(emp[i]==Emp_Lecturer)
	{
		cout<<Uni[0].getName()<<" requests Lecturer"<<endl;
		Y->giveJob(Uni,Uresearch,p[i].name,p[i].surname,Emp_Lecturer,Lecturers,Officers,Secretarys,ResearchAsistants,LecturersSize,OfficersSize,ResearchAsistantsSize,SecretarysSize);
		cout<<"YOK give job to "<<p[i].name<<" "<<p[i].surname<<" as lecturer."<<endl;
	}
	else if(emp[i]==Emp_Officer)
	{
		cout<<Uni[0].getName()<<" requests Officer"<<endl;
		Y->giveJob(Uni,Uresearch,p[i].name,p[i].surname,Emp_Officer,Lecturers,Officers,Secretarys,ResearchAsistants,LecturersSize,OfficersSize,ResearchAsistantsSize,SecretarysSize);
		cout<<"YOK give job to "<<p[i].name<<" "<<p[i].surname<<" as officer."<<endl;
	}
	else if(emp[i]==Emp_ResearchAsistant)
	{
		cout<<Uni[0].getName()<<" requests ResearchAsistant"<<endl;
		Y->giveJob(Uni,Uresearch,p[i].name,p[i].surname,Emp_ResearchAsistant,Lecturers,Officers,Secretarys,ResearchAsistants,LecturersSize,OfficersSize,ResearchAsistantsSize,SecretarysSize);
		cout<<"YOK give job to "<<p[i].name<<" "<<p[i].surname<<" as research asistant."<<endl;
	}
	else if(emp[i]==Emp_Secretary)
	{
		cout<<Uni[0].getName()<<" requests Secretary"<<endl;
		Y->giveJob(Uni,Uresearch,p[i].name,p[i].surname,Emp_Secretary,Lecturers,Officers,Secretarys,ResearchAsistants,LecturersSize,OfficersSize,ResearchAsistantsSize,SecretarysSize);
		cout<<"YOK give job to "<<p[i].name<<" "<<p[i].surname<<" as secretary."<<endl;
	}
	
}
cout<<endl;

rand(emp,4);

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
			cout<<Officers[o].getName()<<" "<<Officers[o].getSurname()
				<<" have document.Therefore, "<<Officers[o].getName()<<" "<<Officers[o].getSurname()
				<<" make document. Happinies of "<<Officers[o].getName()<<" "<<Officers[o].getSurname()
				<<" is "<<Officers[o].getHappiness()<<", contribution of uni is "<<Officers[o].getEmp()<<endl;
		}
		else if(ra==drinkTea)/*enum*/
		{
			ra=rand() % 4;		/*select employee for drinkTea action randomly */
			if(ra==0)
			{
				r=rand()%ResearchAsistantsSize;
				ResearchAsistants[r].drinkTea();
				 cout<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				 	<<" have slackness. Therefore, "<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				 	<<" drinks tea. Happinies of "<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				 	<<" is "<<ResearchAsistants[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants[r].getEmp()<<endl;
			}
			else if(ra==1)
			{
				l=rand()%LecturersSize;
				Lecturers[l].drinkTea();
				 cout<<Lecturers[l].getName()<<" "<<Lecturers[l].getSurname()
				 	<<" have slackness. Therefore, "<<Lecturers[l].getName()<<" "<<Lecturers[l].getSurname()
				 	<<" drinks tea. Happinies of "<<Lecturers[l].getName()<<" "<<Lecturers[l].getSurname()
				 	<<"is "<<Lecturers[l].getHappiness()<<", contribution of uni is "<<Lecturers[l].getEmp()<<endl;
			}
			else if(ra==2)
			{
				s=rand()%SecretarysSize;
				Secretarys[s].drinkTea();
				 cout<<Secretarys[s].getName()<<" "<<Secretarys[s].getSurname()
				 	<<" have slackness. Therefore,"<<Secretarys[s].getName()<<" "<<Secretarys[s].getSurname()
				 	<<"  drinks tea. Happinies of "<<Secretarys[s].getName()<<" "<<Secretarys[s].getSurname()
				 	<<"is "<<Secretarys[s].getHappiness()<<", contribution of uni is "<<Secretarys[s].getEmp()<<endl;
			}
			else if(ra==3)
			{
				o=rand()%OfficersSize;
				Officers[o].drinkTea();
				 cout<<Officers[o].getName()<<" "<<Officers[o].getSurname()
				 	<<" have slackness. Therefore, "<<Officers[o].getName()<<" "<<Officers[o].getSurname()
				 	<<"drinks tea. Happinies of Officer "<<Officers[o].getName()<<" "<<Officers[o].getSurname()
				 	<<"is "<<Officers[o].getHappiness()<<", contribution of uni is "<<Officers[o].getEmp()<<endl;
			}
		}
		else if(ra==research)/*enum*/
		{
			r=rand()%ResearchAsistantsSize;
			 ResearchAsistants[r].research();
			 cout<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
			 <<" have project.Therefore, "<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
			 <<" research. Happinies of "<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
			 <<"is "<<ResearchAsistants[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants[r].getEmp()<<endl;
		}
		else if(ra==giveLesson)/*enum*/
		{
			l=rand()%LecturersSize;
			Lecturers[l].giveLesson();
			cout<<Lecturers[l].getName()<<" "<<Lecturers[l].getSurname()
				<<" have lesson.Therefore, "<<Lecturers[l].getName()<<" "<<Lecturers[l].getSurname()
				<<" give lesson. Happinies of "<<Lecturers[l].getName()<<" "<<Lecturers[l].getSurname()
				<<" is "<<Lecturers[l].getHappiness()<<", contribution of uni is "<<Lecturers[l].getEmp()<<endl;
		
		}
		else if(ra==seeSuccessfulStudent)/*enum*/
		{
			 ra=rand() % 2;/*select employee for seeSuccessfulStudent action randomly */
			if(ra==0)
			{
				r=rand()%ResearchAsistantsSize;
				ResearchAsistants[r].seeSuccessfulStudent();
				cout<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				<<" have seminar.Therefore, "<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				<<" see successful student. Happinies of"<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				<<" is "<<ResearchAsistants[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants[r].getEmp()<<endl;
			}
			else if(ra==1)
			{
				l=rand()%LecturersSize;
				Lecturers[l].seeSuccessfulStudent();
				cout<<Lecturers[l].getName()<<" "<<Lecturers[l].getSurname()
				<<" have seminar.Therefore, "<<Lecturers[l].getName()<<" "<<Lecturers[l].getSurname()
				<<" see successful student. Happinies of"<<Lecturers[l].getName()<<" "<<Lecturers[l].getSurname()
				<<" is "<<Lecturers[l].getHappiness()<<", contribution of uni is "<<Lecturers[l].getEmp()<<endl;
		
			}

		}
		else if(ra==makePublish)/*enum*/
		{
			  ra=rand() % 2;/*select employee for makePublish action randomly */
			if(ra==0)
			{
				r=rand()%ResearchAsistantsSize;
				ResearchAsistants[r].makePublish();
				cout<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				<<" have academic paper.Therefore, "<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				<<" make publish. Happinies of "<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				<<" is "<<ResearchAsistants[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants[r].getEmp()<<endl;
			}
			else if(ra==1)
			{
				l=rand()%LecturersSize;
				Lecturers[l].makePublish();
				cout<<Lecturers[l].getName()<<" "<<Lecturers[l].getSurname()
				<<" have academic paper.Therefore, "<<Lecturers[l].getName()<<" "<<Lecturers[l].getSurname()
				<<" make publish. Happinies of "<<Lecturers[l].getName()<<" "<<Lecturers[l].getSurname()
				<<" is "<<Lecturers[l].getHappiness()<<", contribution of uni is "<<Lecturers[l].getEmp()<<endl;

			}
		}
		else if(ra==manageProcess)/*enum*/
		{
			 ra=rand() % 2;/*select employee for manageProcess action randomly */
			if(ra==0)
			{
				s=rand()%SecretarysSize;
				Secretarys[s].manageProcess();
				cout<<Secretarys[s].getName()<<" "<<Secretarys[s].getSurname()
				<<" have administration.Therefore, "<<Secretarys[s].getName()<<" "<<Secretarys[s].getSurname()
				<<" make menage process. Happinies of "<<Secretarys[s].getName()<<" "<<Secretarys[s].getSurname()
				<<" is "<<Secretarys[s].getHappiness()<<", contribution of uni is "<<Secretarys[s].getEmp()<<endl;
		
			}
			else if(ra==1)
			{
				o=rand()%OfficersSize;
				Officers[o].manageProcess();
				cout<<Officers[o].getName()<<" "<<Officers[o].getSurname()
				<<" have administration.Therefore, "<<Officers[o].getName()<<" "<<Officers[o].getSurname()
				<<" make menage process. Happinies of "<<Officers[o].getName()<<" "<<Officers[o].getSurname()
				<<" is "<<Officers[o].getHappiness()<<", contribution of uni is "<<Officers[o].getEmp()<<endl;
		
			}
		}
		else if(ra==giveHW)/*enum*/
		{
			l=rand()%LecturersSize;
			Lecturers[l].giveHW();
			cout<<Lecturers[l].getName()<<" "<<Lecturers[l].getSurname()
			<<" have homework time.Therefore, "<<Lecturers[l].getName()<<" "<<Lecturers[l].getSurname()
			<<" give Homework. Happinies of "<<Lecturers[l].getName()<<" "<<Lecturers[l].getSurname()
			<<" is "<<Lecturers[l].getHappiness()<<", contribution of uni is "<<Lecturers[l].getEmp()<<endl;
		
		}
		else if(ra==readHW)/*enum*/
		{
			r=rand()%ResearchAsistantsSize;
			ResearchAsistants[r].readHW();
			cout<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
			<<" have homework time out.Therefore, "<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
			<<" read homework. Happinies of "<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
			<<" is "<<ResearchAsistants[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants[r].getEmp()<<endl;
		}
		else if(ra==receivePetition)/*enum*/
		{
			s=rand()%SecretarysSize;
			Secretarys[s].receivePetition();
			cout<<Secretarys[s].getName()<<" "<<Secretarys[s].getSurname()
			<<" have incident.Therefore, "<<Secretarys[s].getName()<<" "<<Secretarys[s].getSurname()
			<<" receive petition. Happinies of "<<Secretarys[s].getName()<<" "<<Secretarys[s].getSurname()
			<<" is "<<Secretarys[s].getHappiness()<<", contribution of uni is "<<Secretarys[s].getEmp()<<endl;
		}
		else if(ra==submitPetition)/*enum*/
		{
			 ra=rand() % 4;/*select employee for submitPetition action randomly */
			if(ra==0)
			{
				r=rand()%ResearchAsistantsSize;
				ResearchAsistants[r].submitPetition();
				cout<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				<<" have solution.Therefore, "<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				<<" submit petition. Happinies of "<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				<<" is "<<ResearchAsistants[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants[r].getEmp()<<endl;
			}
			else if(ra==1)
			{
				l=rand()%LecturersSize;
				Lecturers[l].submitPetition();
				cout<<Lecturers[l].getName()<<" "<<Lecturers[l].getSurname()
				<<" have solution.Therefore, "<<Lecturers[l].getName()<<" "<<Lecturers[l].getSurname()
				<<" submit petition. Happinies of "<<Lecturers[l].getName()<<" "<<Lecturers[l].getSurname()
				<<" is "<<Lecturers[l].getHappiness()<<", contribution of uni is "<<Lecturers[l].getEmp()<<endl;
			}
			else if(ra==2)
			{
				s=rand()%SecretarysSize;
				Secretarys[s].submitPetition();
				cout<<Secretarys[s].getName()<<" "<<Secretarys[s].getSurname()
				<<" have solution.Therefore, "<<Secretarys[s].getName()<<" "<<Secretarys[s].getSurname()
				<<" submit petition. Happinies of "<<Secretarys[s].getName()<<" "<<Secretarys[s].getSurname()
				<<" is "<<Secretarys[s].getHappiness()<<", contribution of uni is "<<Secretarys[s].getEmp()<<endl;
		

			}
			else if(ra==3)
			{
				o=rand()%OfficersSize;
				Officers[o].submitPetition();
				cout<<Officers[o].getName()<<" "<<Officers[o].getSurname()
				<<" have solution.Therefore, "<<Officers[o].getName()<<" "<<Officers[o].getSurname()
				<<" submit petition. Happinies of "<<Officers[o].getName()<<" "<<Officers[o].getSurname()
				<<" is "<<Officers[o].getHappiness()<<", contribution of uni is "<<Officers[o].getEmp()<<endl;
		
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

	
	/****************************************************************************************************************************************************************/
	cout<<endl<<endl;
	cout<<"										"<<Uni[1].getName()<<"   UNIVERSITY";
	cout<<endl<<endl;

for(int i=0;i<10;i++)
{
	if(emp[i]==Emp_Lecturer)
	{
		cout<<Uni[1].getName()<<" requests Lecturer"<<endl;
		Y->giveJob(Uni,Ulinguistic,p[i+10].name,p[i+10].surname,Emp_Lecturer,Lecturers1,Officers1,Secretarys1,ResearchAsistants1,LecturersSize1,OfficersSize1,ResearchAsistantsSize1,SecretarysSize1);
		cout<<"YOK give job to "<<p[i+10].name<<" "<<p[i+10].surname<<" as lecturer."<<endl;

	}
	else if(emp[i]==Emp_Officer)
	{
		cout<<Uni[1].getName()<<" requests Officer"<<endl;
		Y->giveJob(Uni,Ulinguistic,p[i+10].name,p[i+10].surname,Emp_Officer,Lecturers1,Officers1,Secretarys1,ResearchAsistants1,LecturersSize1,OfficersSize1,ResearchAsistantsSize1,SecretarysSize1);
		cout<<"YOK give job to "<<p[i+10].name<<" "<<p[i+10].surname<<" as lecturer."<<endl;
		
	}
	else if(emp[i]==Emp_ResearchAsistant)
	{
		cout<<Uni[1].getName()<<" requests ResearchAsistant"<<endl;
		Y->giveJob(Uni,Ulinguistic,p[i+10].name,p[i+10].surname,Emp_ResearchAsistant,Lecturers1,Officers1,Secretarys1,ResearchAsistants1,LecturersSize1,OfficersSize1,ResearchAsistantsSize1,SecretarysSize1);
		cout<<"YOK give job to "<<p[i+10].name<<" "<<p[i+10].surname<<" as research asistant."<<endl;

	}
	else if(emp[i]==Emp_Secretary)
	{
		cout<<Uni[1].getName()<<" requests Secretary"<<endl;	
		Y->giveJob(Uni,Ulinguistic,p[i+10].name,p[i+10].surname,Emp_Secretary,Lecturers1,Officers1,Secretarys1,ResearchAsistants1,LecturersSize1,OfficersSize1,ResearchAsistantsSize1,SecretarysSize1);
		cout<<"YOK give job to "<<p[i+10].name<<" "<<p[i+10].surname<<" as secretary."<<endl;
	}
	
}cout<<endl;
rand(emp,4);
	
	srand (time(NULL)+50);		/* producer random number */
	for(int i=0;i<50;i++)
	{
		ra= rand() % 11;
		if(ra==makeDoc) /*enum*/
		{
			o=rand()%OfficersSize1;
			Officers1[o].makeDoc();
			cout<<Officers[o].getName()<<" "<<Officers1[o].getSurname()
				<<" have document.Therefore, "<<Officers1[o].getName()<<" "<<Officers1[o].getSurname()
				<<" make document. Happinies of "<<Officers1[o].getName()<<" "<<Officers1[o].getSurname()
				<<" is "<<Officers1[o].getHappiness()<<", contribution of uni is "<<Officers1[o].getEmp()<<endl;
		
		}
		
		else if(ra==drinkTea)/*enum*/
		{
			ra=rand() % 4;		/*select employee for drinkTea action randomly */
			if(ra==0)
			{
				r=rand()%ResearchAsistantsSize1;
				ResearchAsistants1[r].drinkTea();
				 cout<<ResearchAsistants1[r].getName()<<" "<<ResearchAsistants1[r].getSurname()
				 	<<" have slackness. Therefore, "<<ResearchAsistants1[r].getName()<<" "<<ResearchAsistants1[r].getSurname()
				 	<<" drinks tea. Happinies of "<<ResearchAsistants1[r].getName()<<" "<<ResearchAsistants1[r].getSurname()
				 	<<" is "<<ResearchAsistants1[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants1[r].getEmp()<<endl;
				
			}
			else if(ra==1)
			{
				l=rand()%LecturersSize1;
				Lecturers1[l].drinkTea();
				 cout<<Lecturers1[l].getName()<<" "<<Lecturers1[l].getSurname()
				 	<<" have slackness. Therefore, "<<Lecturers1[l].getName()<<" "<<Lecturers1[l].getSurname()
				 	<<" drinks tea. Happinies of "<<Lecturers1[l].getName()<<" "<<Lecturers1[l].getSurname()
				 	<<"is "<<Lecturers1[l].getHappiness()<<", contribution of uni is "<<Lecturers1[l].getEmp()<<endl;
			}
			else if(ra==2)
			{
				s=rand()%SecretarysSize1;
				Secretarys1[s].drinkTea();
				 cout<<Secretarys1[s].getName()<<" "<<Secretarys1[s].getSurname()
				 	<<" have slackness. Therefore,"<<Secretarys1[s].getName()<<" "<<Secretarys1[s].getSurname()
				 	<<"  drinks tea. Happinies of "<<Secretarys1[s].getName()<<" "<<Secretarys1[s].getSurname()
				 	<<"is "<<Secretarys1[s].getHappiness()<<", contribution of uni is "<<Secretarys1[s].getEmp()<<endl;
			}
			else if(ra==3)
			{
				o=rand()%OfficersSize1;
				Officers1[o].drinkTea();
				 cout<<Officers1[o].getName()<<" "<<Officers1[o].getSurname()
				 	<<" have slackness. Therefore, "<<Officers1[o].getName()<<" "<<Officers1[o].getSurname()
				 	<<"drinks tea. Happinies of Officer "<<Officers1[o].getName()<<" "<<Officers1[o].getSurname()
				 	<<"is "<<Officers1[o].getHappiness()<<", contribution of uni is "<<Officers1[o].getEmp()<<endl;
			}
		}
		else if(ra==research)/*enum*/
		{
			r=rand()%ResearchAsistantsSize1;
			 ResearchAsistants1[r].research();
			 cout<<ResearchAsistants1[r].getName()<<" "<<ResearchAsistants1[r].getSurname()
			 <<" have project.Therefore, "<<ResearchAsistants1[r].getName()<<" "<<ResearchAsistants1[r].getSurname()
			 <<" research. Happinies of "<<ResearchAsistants1[r].getName()<<" "<<ResearchAsistants1[r].getSurname()
			 <<"is "<<ResearchAsistants1[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants1[r].getEmp()<<endl;
		}
		else if(ra==giveLesson)/*enum*/
		{
			l=rand()%LecturersSize1;
			Lecturers1[l].giveLesson();
			cout<<Lecturers1[l].getName()<<" "<<Lecturers1[l].getSurname()
				<<" have lesson.Therefore, "<<Lecturers1[l].getName()<<" "<<Lecturers1[l].getSurname()
				<<" give lesson. Happinies of "<<Lecturers1[l].getName()<<" "<<Lecturers1[l].getSurname()
				<<" is "<<Lecturers1[l].getHappiness()<<", contribution of uni is "<<Lecturers1[l].getEmp()<<endl;
		
		}
		else if(ra==seeSuccessfulStudent)/*enum*/
		{
			 ra=rand() % 2;/*select employee for seeSuccessfulStudent action randomly */
			if(ra==0)
			{
				r=rand()%ResearchAsistantsSize1;
				ResearchAsistants1[r].seeSuccessfulStudent();
				cout<<ResearchAsistants1[r].getName()<<" "<<ResearchAsistants1[r].getSurname()
				<<" have seminar.Therefore, "<<ResearchAsistants1[r].getName()<<" "<<ResearchAsistants1[r].getSurname()
				<<" see successful student. Happinies of"<<ResearchAsistants1[r].getName()<<" "<<ResearchAsistants1[r].getSurname()
				<<" is "<<ResearchAsistants1[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants1[r].getEmp()<<endl;
			}
			else if(ra==1)
			{
				l=rand()%LecturersSize1;
				Lecturers1[l].seeSuccessfulStudent();
				cout<<Lecturers1[l].getName()<<" "<<Lecturers1[l].getSurname()
				<<" have seminar.Therefore, "<<Lecturers1[l].getName()<<" "<<Lecturers1[l].getSurname()
				<<" see successful student. Happinies of"<<Lecturers1[l].getName()<<" "<<Lecturers1[l].getSurname()
				<<" is "<<Lecturers1[l].getHappiness()<<", contribution of uni is "<<Lecturers1[l].getEmp()<<endl;
		
			}

		}
		else if(ra==makePublish)/*enum*/
		{
			  ra=rand() % 2;/*select employee for makePublish action randomly */
			if(ra==0)
			{
				r=rand()%ResearchAsistantsSize1;
				ResearchAsistants1[r].makePublish();
				cout<<ResearchAsistants1[r].getName()<<" "<<ResearchAsistants1[r].getSurname()
				<<" have academic paper.Therefore, "<<ResearchAsistants1[r].getName()<<" "<<ResearchAsistants1[r].getSurname()
				<<" make publish. Happinies of "<<ResearchAsistants1[r].getName()<<" "<<ResearchAsistants1[r].getSurname()
				<<" is "<<ResearchAsistants1[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants1[r].getEmp()<<endl;
			}
			else if(ra==1)
			{
				l=rand()%LecturersSize1;
				Lecturers1[l].makePublish();
				cout<<Lecturers1[l].getName()<<" "<<Lecturers1[l].getSurname()
				<<" have academic paper.Therefore, "<<Lecturers1[l].getName()<<" "<<Lecturers1[l].getSurname()
				<<" make publish. Happinies of "<<Lecturers1[l].getName()<<" "<<Lecturers1[l].getSurname()
				<<" is "<<Lecturers1[l].getHappiness()<<", contribution of uni is "<<Lecturers1[l].getEmp()<<endl;

			}
		}
		else if(ra==manageProcess)/*enum*/
		{
			 ra=rand() % 2;/*select employee for manageProcess action randomly */
			if(ra==0)
			{
				s=rand()%SecretarysSize1;
				Secretarys1[s].manageProcess();
				cout<<Secretarys1[s].getName()<<" "<<Secretarys1[s].getSurname()
				<<" have administration.Therefore, "<<Secretarys1[s].getName()<<" "<<Secretarys1[s].getSurname()
				<<" make menage process. Happinies of "<<Secretarys1[s].getName()<<" "<<Secretarys1[s].getSurname()
				<<" is "<<Secretarys1[s].getHappiness()<<", contribution of uni is "<<Secretarys1[s].getEmp()<<endl;
		
			}
			else if(ra==1)
			{
				o=rand()%OfficersSize1;
				Officers1[o].manageProcess();
				cout<<Officers1[o].getName()<<" "<<Officers1[o].getSurname()
				<<" have administration.Therefore, "<<Officers1[o].getName()<<" "<<Officers1[o].getSurname()
				<<" make menage process. Happinies of "<<Officers1[o].getName()<<" "<<Officers1[o].getSurname()
				<<" is "<<Officers1[o].getHappiness()<<", contribution of uni is "<<Officers1[o].getEmp()<<endl;
		
			}
		}
		else if(ra==giveHW)/*enum*/
		{
			l=rand()%LecturersSize1;
			Lecturers1[l].giveHW();
			cout<<Lecturers1[l].getName()<<" "<<Lecturers1[l].getSurname()
			<<" have homework time.Therefore, "<<Lecturers1[l].getName()<<" "<<Lecturers1[l].getSurname()
			<<" give Homework. Happinies of "<<Lecturers1[l].getName()<<" "<<Lecturers1[l].getSurname()
			<<" is "<<Lecturers1[l].getHappiness()<<", contribution of uni is "<<Lecturers1[l].getEmp()<<endl;
		
		}
		else if(ra==readHW)/*enum*/
		{
			r=rand()%ResearchAsistantsSize1;
			ResearchAsistants1[r].readHW();
			cout<<ResearchAsistants1[r].getName()<<" "<<ResearchAsistants1[r].getSurname()
			<<" have homework time out.Therefore, "<<ResearchAsistants1[r].getName()<<" "<<ResearchAsistants1[r].getSurname()
			<<" read homework. Happinies of "<<ResearchAsistants1[r].getName()<<" "<<ResearchAsistants1[r].getSurname()
			<<" is "<<ResearchAsistants1[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants1[r].getEmp()<<endl;
		}
		else if(ra==receivePetition)/*enum*/
		{
			s=rand()%SecretarysSize1;
			Secretarys1[s].receivePetition();
			cout<<Secretarys1[s].getName()<<" "<<Secretarys1[s].getSurname()
			<<" have incident.Therefore, "<<Secretarys1[s].getName()<<" "<<Secretarys1[s].getSurname()
			<<" receive petition. Happinies of "<<Secretarys1[s].getName()<<" "<<Secretarys1[s].getSurname()
			<<" is "<<Secretarys1[s].getHappiness()<<", contribution of uni is "<<Secretarys1[s].getEmp()<<endl;
		}
		else if(ra==submitPetition)/*enum*/
		{
			 ra=rand() % 4;/*select employee for submitPetition action randomly */
			if(ra==0)
			{
				r=rand()%ResearchAsistantsSize1;
				ResearchAsistants1[r].submitPetition();
				cout<<ResearchAsistants1[r].getName()<<" "<<ResearchAsistants1[r].getSurname()
				<<" have solution.Therefore, "<<ResearchAsistants1[r].getName()<<" "<<ResearchAsistants1[r].getSurname()
				<<" submit petition. Happinies of "<<ResearchAsistants1[r].getName()<<" "<<ResearchAsistants1[r].getSurname()
				<<" is "<<ResearchAsistants1[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants1[r].getEmp()<<endl;
			}
			else if(ra==1)
			{
				l=rand()%LecturersSize1;
				Lecturers1[l].submitPetition();
				cout<<Lecturers1[l].getName()<<" "<<Lecturers1[l].getSurname()
				<<" have solution.Therefore, "<<Lecturers1[l].getName()<<" "<<Lecturers1[l].getSurname()
				<<" submit petition. Happinies of "<<Lecturers1[l].getName()<<" "<<Lecturers1[l].getSurname()
				<<" is "<<Lecturers1[l].getHappiness()<<", contribution of uni is "<<Lecturers1[l].getEmp()<<endl;
			}
			else if(ra==2)
			{
				s=rand()%SecretarysSize1;
				Secretarys1[s].submitPetition();
				cout<<Secretarys1[s].getName()<<" "<<Secretarys1[s].getSurname()
				<<" have solution.Therefore, "<<Secretarys1[s].getName()<<" "<<Secretarys1[s].getSurname()
				<<" submit petition. Happinies of "<<Secretarys1[s].getName()<<" "<<Secretarys1[s].getSurname()
				<<" is "<<Secretarys1[s].getHappiness()<<", contribution of uni is "<<Secretarys1[s].getEmp()<<endl;
		

			}
			else if(ra==3)
			{
				o=rand()%OfficersSize1;
				Officers1[o].submitPetition();
				cout<<Officers1[o].getName()<<" "<<Officers1[o].getSurname()
				<<" have solution.Therefore, "<<Officers1[o].getName()<<" "<<Officers1[o].getSurname()
				<<" submit petition. Happinies of "<<Officers1[o].getName()<<" "<<Officers1[o].getSurname()
				<<" is "<<Officers1[o].getHappiness()<<", contribution of uni is "<<Officers1[o].getEmp()<<endl;
		
			}
		}
	}

	/* write name surname happinies of employeers*/
	for(int i=0;i<LecturersSize1;i++)
	{ 
		cout<<Lecturers1[i].getName()<<" "<<Lecturers1[i].getSurname()<<" Happinies of Lecturer is "<<Lecturers1[i].getHappiness()<<"."<<endl;
	}
	for(int i=0;i<OfficersSize1;i++)
	{
		cout<<Officers1[i].getName()<<" "<<Officers1[i].getSurname()<<" Happinies of Officer is "<<Officers1[i].getHappiness()<<"."<<endl;
	}
	for(int i=0;i<ResearchAsistantsSize1;i++)
	{
		cout<<ResearchAsistants1[i].getName()<<" "<<ResearchAsistants1[i].getSurname()<<" Happinies of ResearchAsistant is "<<ResearchAsistants1[i].getHappiness()<<"."<<endl;
	}
	for(int i=0;i<SecretarysSize1;i++)
	{
		cout<<Secretarys1[i].getName()<<" "<<Secretarys1[i].getSurname()<<" Happinies of Secretary is "<<Secretarys1[i].getHappiness()<<"."<<endl;
	}
	/* write contribution of Univeersity */
	cout<<"Contribution of Uni is "<<Lecturers1[0].getEmp()<<endl;

	cout<<endl<<endl;
	cout<<"										"<<Uni[2].getName()<<"   UNIVERSITY";
	cout<<endl<<endl;

for(int i=0;i<10;i++)
{
	if(emp[i]==Emp_Lecturer)
	{
		cout<<Uni[2].getName()<<" requests Lecturer"<<endl;
		Y->giveJob(Uni,Utechnical,p[i+20].name,p[i+20].surname,Emp_Lecturer,Lecturers2,Officers2,Secretarys2,ResearchAsistants2,LecturersSize2,OfficersSize2,ResearchAsistantsSize2,SecretarysSize2);
		cout<<"YOK give job to "<<p[i+20].name<<" "<<p[i+20].surname<<" as lecturer."<<endl;
		
	}
	else if(emp[i]==Emp_Officer)
	{
		cout<<Uni[2].getName()<<" requests Officer"<<endl;
		Y->giveJob(Uni,Utechnical,p[i+20].name,p[i+20].surname,Emp_Officer,Lecturers2,Officers2,Secretarys2,ResearchAsistants2,LecturersSize2,OfficersSize2,ResearchAsistantsSize2,SecretarysSize2);
		cout<<"YOK give job to "<<p[i+20].name<<" "<<p[i+20].surname<<" as lecturer."<<endl;
		
	}
	else if(emp[i]==Emp_ResearchAsistant)
	{
		cout<<Uni[2].getName()<<" requests ResearchAsistant"<<endl;
		Y->giveJob(Uni,Utechnical,p[i+20].name,p[i+20].surname,Emp_ResearchAsistant,Lecturers2,Officers2,Secretarys2,ResearchAsistants2,LecturersSize2,OfficersSize2,ResearchAsistantsSize2,SecretarysSize2);
		cout<<"YOK give job to "<<p[i+20].name<<" "<<p[i+20].surname<<" as research asistant."<<endl;

	}
	else if(emp[i]==Emp_Secretary)	
	{
		cout<<Uni[2].getName()<<" requests Secretary"<<endl;
		Y->giveJob(Uni,Utechnical,p[i+20].name,p[i+20].surname,Emp_Secretary,Lecturers2,Officers2,Secretarys2,ResearchAsistants2,LecturersSize2,OfficersSize2,ResearchAsistantsSize2,SecretarysSize2);
		cout<<"YOK give job to "<<p[i+20].name<<" "<<p[i+20].surname<<" as secretary."<<endl;
	}
	
}
cout<<endl;



	srand (time(NULL)+20);		/* producer random number */
	for(int i=0;i<50;i++)
	{
		ra= rand() % 11;
		if(ra==makeDoc) /*enum*/
		{
			o=rand()%OfficersSize2;
			Officers2[o].makeDoc();
			cout<<Officers2[o].getName()<<" "<<Officers2[o].getSurname()
				<<" have document.Therefore, "<<Officers2[o].getName()<<" "<<Officers2[o].getSurname()
				<<" make document. Happinies of "<<Officers2[o].getName()<<" "<<Officers2[o].getSurname()
				<<" is "<<Officers2[o].getHappiness()<<", contribution of uni is "<<Officers2[o].getEmp()<<endl;
		
		}
		
		else if(ra==drinkTea)/*enum*/
		{
			ra=rand() % 4;		/*select employee for drinkTea action randomly */
			if(ra==0)
			{
				r=rand()%ResearchAsistantsSize2;
				ResearchAsistants2[r].drinkTea();
				 cout<<ResearchAsistants2[r].getName()<<" "<<ResearchAsistants2[r].getSurname()
				 	<<" have slackness. Therefore, "<<ResearchAsistants2[r].getName()<<" "<<ResearchAsistants2[r].getSurname()
				 	<<" drinks tea. Happinies of "<<ResearchAsistants2[r].getName()<<" "<<ResearchAsistants2[r].getSurname()
				 	<<" is "<<ResearchAsistants2[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants2[r].getEmp()<<endl;
				
			}
			else if(ra==1)
			{
				l=rand()%LecturersSize2;
				Lecturers2[l].drinkTea();
				 cout<<Lecturers2[l].getName()<<" "<<Lecturers2[l].getSurname()
				 	<<" have slackness. Therefore, "<<Lecturers2[l].getName()<<" "<<Lecturers2[l].getSurname()
				 	<<" drinks tea. Happinies of "<<Lecturers2[l].getName()<<" "<<Lecturers2[l].getSurname()
				 	<<"is "<<Lecturers2[l].getHappiness()<<", contribution of uni is "<<Lecturers2[l].getEmp()<<endl;
			}
			else if(ra==2)
			{
				s=rand()%SecretarysSize2;
				Secretarys2[s].drinkTea();
				 cout<<Secretarys2[s].getName()<<" "<<Secretarys2[s].getSurname()
				 	<<" have slackness. Therefore,"<<Secretarys2[s].getName()<<" "<<Secretarys2[s].getSurname()
				 	<<"  drinks tea. Happinies of "<<Secretarys2[s].getName()<<" "<<Secretarys2[s].getSurname()
				 	<<"is "<<Secretarys2[s].getHappiness()<<", contribution of uni is "<<Secretarys2[s].getEmp()<<endl;
			}
			else if(ra==3)
			{
				o=rand()%OfficersSize2;
				Officers2[o].drinkTea();
				 cout<<Officers2[o].getName()<<" "<<Officers2[o].getSurname()
				 	<<" have slackness. Therefore, "<<Officers2[o].getName()<<" "<<Officers2[o].getSurname()
				 	<<"drinks tea. Happinies of Officer "<<Officers2[o].getName()<<" "<<Officers2[o].getSurname()
				 	<<"is "<<Officers2[o].getHappiness()<<", contribution of uni is "<<Officers2[o].getEmp()<<endl;
			}
		}
		else if(ra==research)/*enum*/
		{
			r=rand()%ResearchAsistantsSize2;
			 ResearchAsistants2[r].research();
			 cout<<ResearchAsistants2[r].getName()<<" "<<ResearchAsistants2[r].getSurname()
			 <<" have project.Therefore, "<<ResearchAsistants2[r].getName()<<" "<<ResearchAsistants2[r].getSurname()
			 <<" research. Happinies of "<<ResearchAsistants2[r].getName()<<" "<<ResearchAsistants2[r].getSurname()
			 <<"is "<<ResearchAsistants2[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants2[r].getEmp()<<endl;
		}
		else if(ra==giveLesson)/*enum*/
		{
			l=rand()%LecturersSize2;
			Lecturers2[l].giveLesson();
			cout<<Lecturers2[l].getName()<<" "<<Lecturers2[l].getSurname()
				<<" have lesson.Therefore, "<<Lecturers2[l].getName()<<" "<<Lecturers2[l].getSurname()
				<<" give lesson. Happinies of "<<Lecturers2[l].getName()<<" "<<Lecturers2[l].getSurname()
				<<" is "<<Lecturers2[l].getHappiness()<<", contribution of uni is "<<Lecturers2[l].getEmp()<<endl;
		
		}
		else if(ra==seeSuccessfulStudent)/*enum*/
		{
			 ra=rand() % 2;/*select employee for seeSuccessfulStudent action randomly */
			if(ra==0)
			{
				r=rand()%ResearchAsistantsSize2;
				ResearchAsistants2[r].seeSuccessfulStudent();
				cout<<ResearchAsistants2[r].getName()<<" "<<ResearchAsistants2[r].getSurname()
				<<" have seminar.Therefore, "<<ResearchAsistants2[r].getName()<<" "<<ResearchAsistants2[r].getSurname()
				<<" see successful student. Happinies of"<<ResearchAsistants2[r].getName()<<" "<<ResearchAsistants2[r].getSurname()
				<<" is "<<ResearchAsistants2[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants2[r].getEmp()<<endl;
			}
			else if(ra==1)
			{
				l=rand()%LecturersSize2;
				Lecturers2[l].seeSuccessfulStudent();
				cout<<Lecturers2[l].getName()<<" "<<Lecturers2[l].getSurname()
				<<" have seminar.Therefore, "<<Lecturers2[l].getName()<<" "<<Lecturers2[l].getSurname()
				<<" see successful student. Happinies of"<<Lecturers2[l].getName()<<" "<<Lecturers2[l].getSurname()
				<<" is "<<Lecturers2[l].getHappiness()<<", contribution of uni is "<<Lecturers2[l].getEmp()<<endl;
		
			}

		}
		else if(ra==makePublish)/*enum*/
		{
			  ra=rand() % 2;/*select employee for makePublish action randomly */
			if(ra==0)
			{
				r=rand()%ResearchAsistantsSize2;
				ResearchAsistants2[r].makePublish();
				cout<<ResearchAsistants2[r].getName()<<" "<<ResearchAsistants2[r].getSurname()
				<<" have academic paper.Therefore, "<<ResearchAsistants2[r].getName()<<" "<<ResearchAsistants2[r].getSurname()
				<<" make publish. Happinies of "<<ResearchAsistants2[r].getName()<<" "<<ResearchAsistants2[r].getSurname()
				<<" is "<<ResearchAsistants2[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants2[r].getEmp()<<endl;
			}
			else if(ra==1)
			{
				l=rand()%LecturersSize2;
				Lecturers2[l].makePublish();
				cout<<Lecturers2[l].getName()<<" "<<Lecturers2[l].getSurname()
				<<" have academic paper.Therefore, "<<Lecturers2[l].getName()<<" "<<Lecturers2[l].getSurname()
				<<" make publish. Happinies of "<<Lecturers2[l].getName()<<" "<<Lecturers[l].getSurname()
				<<" is "<<Lecturers2[l].getHappiness()<<", contribution of uni is "<<Lecturers2[l].getEmp()<<endl;

			}
		}
		else if(ra==manageProcess)/*enum*/
		{
			 ra=rand() % 2;/*select employee for manageProcess action randomly */
			if(ra==0)
			{
				s=rand()%SecretarysSize2;
				Secretarys2[s].manageProcess();
				cout<<Secretarys2[s].getName()<<" "<<Secretarys2[s].getSurname()
				<<" have administration.Therefore, "<<Secretarys2[s].getName()<<" "<<Secretarys2[s].getSurname()
				<<" make menage process. Happinies of "<<Secretarys2[s].getName()<<" "<<Secretarys2[s].getSurname()
				<<" is "<<Secretarys2[s].getHappiness()<<", contribution of uni is "<<Secretarys2[s].getEmp()<<endl;
		
			}
			else if(ra==1)
			{
				o=rand()%OfficersSize2;
				Officers2[o].manageProcess();
				cout<<Officers2[o].getName()<<" "<<Officers2[o].getSurname()
				<<" have administration.Therefore, "<<Officers2[o].getName()<<" "<<Officers2[o].getSurname()
				<<" make menage process. Happinies of "<<Officers2[o].getName()<<" "<<Officers2[o].getSurname()
				<<" is "<<Officers2[o].getHappiness()<<", contribution of uni is "<<Officers2[o].getEmp()<<endl;
		
			}
		}
		else if(ra==giveHW)/*enum*/
		{
			l=rand()%LecturersSize2;
			Lecturers2[l].giveHW();
			cout<<Lecturers2[l].getName()<<" "<<Lecturers2[l].getSurname()
			<<" have homework time.Therefore, "<<Lecturers2[l].getName()<<" "<<Lecturers2[l].getSurname()
			<<" give Homework. Happinies of "<<Lecturers2[l].getName()<<" "<<Lecturers2[l].getSurname()
			<<" is "<<Lecturers2[l].getHappiness()<<", contribution of uni is "<<Lecturers2[l].getEmp()<<endl;
		
		}
		else if(ra==readHW)/*enum*/
		{
			r=rand()%ResearchAsistantsSize2;
			ResearchAsistants2[r].readHW();
			cout<<ResearchAsistants2[r].getName()<<" "<<ResearchAsistants2[r].getSurname()
			<<" have homework time out.Therefore, "<<ResearchAsistants2[r].getName()<<" "<<ResearchAsistants2[r].getSurname()
			<<" read homework. Happinies of "<<ResearchAsistants2[r].getName()<<" "<<ResearchAsistants2[r].getSurname()
			<<" is "<<ResearchAsistants2[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants2[r].getEmp()<<endl;
		}
		else if(ra==receivePetition)/*enum*/
		{
			s=rand()%SecretarysSize2;
			Secretarys2[s].receivePetition();
			cout<<Secretarys2[s].getName()<<" "<<Secretarys2[s].getSurname()
			<<" have incident.Therefore, "<<Secretarys2[s].getName()<<" "<<Secretarys2[s].getSurname()
			<<" receive petition. Happinies of "<<Secretarys2[s].getName()<<" "<<Secretarys2[s].getSurname()
			<<" is "<<Secretarys2[s].getHappiness()<<", contribution of uni is "<<Secretarys2[s].getEmp()<<endl;
		}
		else if(ra==submitPetition)/*enum*/
		{
			 ra=rand() % 4;/*select employee for submitPetition action randomly */
			if(ra==0)
			{
				r=rand()%ResearchAsistantsSize2;
				ResearchAsistants2[r].submitPetition();
				cout<<ResearchAsistants2[r].getName()<<" "<<ResearchAsistants2[r].getSurname()
				<<" have solution.Therefore, "<<ResearchAsistants2[r].getName()<<" "<<ResearchAsistants2[r].getSurname()
				<<" submit petition. Happinies of "<<ResearchAsistants2[r].getName()<<" "<<ResearchAsistants2[r].getSurname()
				<<" is "<<ResearchAsistants2[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants2[r].getEmp()<<endl;
			}
			else if(ra==1)
			{
				l=rand()%LecturersSize2;
				Lecturers2[l].submitPetition();
				cout<<Lecturers2[l].getName()<<" "<<Lecturers2[l].getSurname()
				<<" have solution.Therefore, "<<Lecturers2[l].getName()<<" "<<Lecturers2[l].getSurname()
				<<" submit petition. Happinies of "<<Lecturers2[l].getName()<<" "<<Lecturers2[l].getSurname()
				<<" is "<<Lecturers2[l].getHappiness()<<", contribution of uni is "<<Lecturers2[l].getEmp()<<endl;
			}
			else if(ra==2)
			{
				s=rand()%SecretarysSize2;
				Secretarys2[s].submitPetition();
				cout<<Secretarys2[s].getName()<<" "<<Secretarys2[s].getSurname()
				<<" have solution.Therefore, "<<Secretarys2[s].getName()<<" "<<Secretarys2[s].getSurname()
				<<" submit petition. Happinies of "<<Secretarys2[s].getName()<<" "<<Secretarys2[s].getSurname()
				<<" is "<<Secretarys2[s].getHappiness()<<", contribution of uni is "<<Secretarys2[s].getEmp()<<endl;
		

			}
			else if(ra==3)
			{
				o=rand()%OfficersSize2;
				Officers2[o].submitPetition();
				cout<<Officers2[o].getName()<<" "<<Officers2[o].getSurname()
				<<" have solution.Therefore, "<<Officers2[o].getName()<<" "<<Officers2[o].getSurname()
				<<" submit petition. Happinies of "<<Officers2[o].getName()<<" "<<Officers2[o].getSurname()
				<<" is "<<Officers2[o].getHappiness()<<", contribution of uni is "<<Officers2[o].getEmp()<<endl;
		
			}
		}
	}

	/* write name surname happinies of employeers*/
	for(int i=0;i<LecturersSize2;i++)
	{ 
		cout<<Lecturers2[i].getName()<<" "<<Lecturers2[i].getSurname()<<" Happinies of Lecturer is "<<Lecturers2[i].getHappiness()<<"."<<endl;
	}
	for(int i=0;i<OfficersSize2;i++)
	{
		cout<<Officers2[i].getName()<<" "<<Officers2[i].getSurname()<<" Happinies of Officer is "<<Officers2[i].getHappiness()<<"."<<endl;
	}
	for(int i=0;i<ResearchAsistantsSize2;i++)
	{
		cout<<ResearchAsistants2[i].getName()<<" "<<ResearchAsistants2[i].getSurname()<<" Happinies of ResearchAsistant is "<<ResearchAsistants2[i].getHappiness()<<"."<<endl;
	}
	for(int i=0;i<SecretarysSize1;i++)
	{
		cout<<Secretarys2[i].getName()<<" "<<Secretarys2[i].getSurname()<<" Happinies of Secretary is "<<Secretarys2[i].getHappiness()<<"."<<endl;
	}
	/* write contribution of Univeersity */
	cout<<"Contribution of Uni is "<<Lecturers2[0].getEmp()<<endl;


	delete Y;
	delete [] Uni;
	delete [] arr;
	delete [] arr1;
	delete [] arr2;
	return 0;
}
