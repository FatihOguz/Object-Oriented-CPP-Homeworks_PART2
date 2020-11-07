#include "story.h"



void liberal()
{

	int gtm;
	UniversityType uniType;
	/**********************************************************/
	LiberalEducation<int> * Y =new LiberalEducation<int>;
	University<int> * Uni  ;		/*employee has a University class*/
	Lecturer<int> * Lecturers;
	Secretary<int> * Secretarys;
	ResearchAsistant<int> * ResearchAsistants;
	Officer<int> * Officers;

	/*********************************************/
	int ResearchAsistantsSize=0;
	int LecturersSize=0;
	int OfficersSize=0;
	int SecretarysSize=0;
	int UniSize=0;


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
	Uni[0].setName("GTU");
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
		cout<<"EducationSystem give job to "<<p[i].name<<" "<<p[i].surname<<" as lecturer."<<endl;
	}
	else if(emp[i]==Emp_Officer)
	{
		cout<<Uni[0].getName()<<" requests Officer"<<endl;
		Y->giveJob(Uni,Uresearch,p[i].name,p[i].surname,Emp_Officer,Lecturers,Officers,Secretarys,ResearchAsistants,LecturersSize,OfficersSize,ResearchAsistantsSize,SecretarysSize);
		cout<<"EducationSystem give job to "<<p[i].name<<" "<<p[i].surname<<" as officer."<<endl;
	}
	else if(emp[i]==Emp_ResearchAsistant)
	{
		cout<<Uni[0].getName()<<" requests ResearchAsistant"<<endl;
		Y->giveJob(Uni,Uresearch,p[i].name,p[i].surname,Emp_ResearchAsistant,Lecturers,Officers,Secretarys,ResearchAsistants,LecturersSize,OfficersSize,ResearchAsistantsSize,SecretarysSize);
		cout<<"EducationSystem give job to "<<p[i].name<<" "<<p[i].surname<<" as research asistant."<<endl;
	}
	else if(emp[i]==Emp_Secretary)
	{
		cout<<Uni[0].getName()<<" requests Secretary"<<endl;
		Y->giveJob(Uni,Uresearch,p[i].name,p[i].surname,Emp_Secretary,Lecturers,Officers,Secretarys,ResearchAsistants,LecturersSize,OfficersSize,ResearchAsistantsSize,SecretarysSize);
		cout<<"EducationSystem give job to "<<p[i].name<<" "<<p[i].surname<<" as secretary."<<endl;
	}
	
}
cout<<endl;

rand(emp,4);

int act[14];
srand (time(NULL));
int lec_cont=0,of_cont=0,sec_cont=0,res_cont=0;
int lec_hap=0,of_hap=0,sec_hap=0,res_hap=0;
int a;
int ra=0;
for(int i=0;i<14;i++)
{
	a=rand() % 11+1;
	act[i]=a;
	if(a==1)
	{
		of_cont = of_cont + 3;
		of_hap = of_hap -2 ;
	}
	else if(a==2)
	{
		lec_cont=lec_cont-2;
		of_cont= of_cont - 2 ;
		sec_cont= sec_cont -2 ;
		res_cont=  res_cont -2;

		lec_hap=lec_hap+5;
		of_hap= of_hap +5 ;
		sec_hap= sec_hap +5 ;
		res_hap=  res_hap +5;
	}
	else if(a==3)
	{
		res_cont=  res_cont +4;
		res_hap=  res_hap +3;
	}
	else if(a==4)
	{
		lec_cont=lec_cont+1;
		lec_hap=lec_hap+1;
	}
	else if(a==5)
	{
			lec_hap=lec_hap+10;
			res_hap=  res_hap +10;
	}
	else if(a==6)
	{
		lec_cont=lec_cont+5;
		res_cont=  res_cont +5;

		lec_hap=lec_hap+2;
		res_hap=  res_hap +2;

	}
	else if(a==7)
	{
		of_cont= of_cont + 2 ;
		sec_cont= sec_cont +2 ;

		of_hap= of_hap -1;
		sec_hap= sec_hap -1;
	}
	else if(a==8)
	{
		lec_cont=lec_cont+1;
		lec_hap=lec_hap-2;
	}
	else if(a==9)
	{
		res_cont=  res_cont +2;
		res_hap=  res_hap -3;
	}
	else if(a==10)
	{
		sec_cont= sec_cont -1; 
		sec_hap= sec_hap -1;
	}
	else
	{
		lec_cont=lec_cont-2;
		of_cont= of_cont - 2 ;
		sec_cont= sec_cont -2 ;
		res_cont=  res_cont -2;

		lec_hap=lec_hap+1;
		of_hap= of_hap +1 ;
		sec_hap= sec_hap +1 ;
		res_hap=  res_hap +1;
	}
}
int max=-999;
int max_hap=0;

	if(max<lec_cont)
		max=lec_cont;
	if(max<of_cont)
		max=of_cont;
	if(max<sec_cont)
		max=sec_cont;
	if(max<res_cont)
		max=res_cont;

int l=0,r=0,s=0,o=0;
if(max==lec_cont)
{
			cout<<"I see that there is an opportunity for being lecturer "<<Uni[0].getName()<<" in the university.  So I am lecturer."<<endl;
			cout<< "University has makeDoc, drinkTea, research, giveLesson, seeSuccessfulStudent, makePublish, manageProcess, giveHW, readHW, receivePetition, submitPetition "<<endl;
			cout<<"I did drinkTea,giveLesson,seeSuccessfulStudent,makePublish,giveHW,submitPetition."<<endl;
			cout<<"My happiness is 0 and my money is 0. I contribute to 0 " <<Uni[0].getName()<<" . "<<endl;
			cout<<" University has makeDoc,research ,manageProcess,readHW, receivePetition, I cannot do that"<<endl;
	
for(int i=0;i<14;i++)
	{
		ra= act[i];
		
		 if(ra==drinkTea)/*enum*/
		{
					/*select employee for drinkTea action randomly */
			
			
			
				//l=rand()%LecturersSize;
				Lecturers[0].drinkTea();
				 cout<<Lecturers[0].getName()<<" "<<Lecturers[0].getSurname()
				 	<<" have slackness. Therefore, "<<Lecturers[0].getName()<<" "<<Lecturers[0].getSurname()
				 	<<" drinks tea. Happinies of "<<Lecturers[l].getName()<<" "<<Lecturers[0].getSurname()
				 	<<"is "<<Lecturers[0].getHappiness()<<", contribution of uni is "<<Lecturers[0].getEmp()<<endl;
			
			
		}
		
		else if(ra==giveLesson)/*enum*/
		{
			//l=rand()%LecturersSize;
			Lecturers[0].giveLesson();
			cout<<Lecturers[0].getName()<<" "<<Lecturers[0].getSurname()
				<<" have lesson.Therefore, "<<Lecturers[0].getName()<<" "<<Lecturers[0].getSurname()
				<<" give lesson. Happinies of "<<Lecturers[0].getName()<<" "<<Lecturers[0].getSurname()
				<<" is "<<Lecturers[0].getHappiness()<<", contribution of uni is "<<Lecturers[0].getEmp()<<endl;
		
		}
		else if(ra==seeSuccessfulStudent)/*enum*/
		{
			
			
				//l=rand()%LecturersSize;
				Lecturers[0].seeSuccessfulStudent();
				cout<<Lecturers[0].getName()<<" "<<Lecturers[0].getSurname()
				<<" have seminar.Therefore, "<<Lecturers[0].getName()<<" "<<Lecturers[0].getSurname()
				<<" see successful student. Happinies of"<<Lecturers[l].getName()<<" "<<Lecturers[0].getSurname()
				<<" is "<<Lecturers[0].getHappiness()<<", contribution of uni is "<<Lecturers[0].getEmp()<<endl;
		
			

		}
		else if(ra==makePublish)/*enum*/
		{
			 
				//l=rand()%LecturersSize;
				Lecturers[0].makePublish();
				cout<<Lecturers[0].getName()<<" "<<Lecturers[0].getSurname()
				<<" have academic paper.Therefore, "<<Lecturers[0].getName()<<" "<<Lecturers[0].getSurname()
				<<" make publish. Happinies of "<<Lecturers[0].getName()<<" "<<Lecturers[0].getSurname()
				<<" is "<<Lecturers[0].getHappiness()<<", contribution of uni is "<<Lecturers[0].getEmp()<<endl;

			
		}
	
		
		else if(ra==giveHW)/*enum*/
		{
			//l=rand()%LecturersSize;
			Lecturers[0].giveHW();
			cout<<Lecturers[0].getName()<<" "<<Lecturers[0].getSurname()
			<<" have homework time.Therefore, "<<Lecturers[0].getName()<<" "<<Lecturers[0].getSurname()
			<<" give Homework. Happinies of "<<Lecturers[0].getName()<<" "<<Lecturers[0].getSurname()
			<<" is "<<Lecturers[0].getHappiness()<<", contribution of uni is "<<Lecturers[0].getEmp()<<endl;
		
		}
		
		
		else if(ra==submitPetition)/*enum*/
		{
			
				//l=rand()%LecturersSize;
				Lecturers[0].submitPetition();
				cout<<Lecturers[0].getName()<<" "<<Lecturers[0].getSurname()
				<<" have solution.Therefore, "<<Lecturers[0].getName()<<" "<<Lecturers[0].getSurname()
				<<" submit petition. Happinies of "<<Lecturers[0].getName()<<" "<<Lecturers[0].getSurname()
				<<" is "<<Lecturers[0].getHappiness()<<", contribution of uni is "<<Lecturers[0].getEmp()<<endl;
			
		}
	}
			i=0;cout<<endl;
			
			cout<<"After all my happiness is "<<Lecturers[i].getHappiness();
			cout<<" and my money is 100000 dolars.  I contribute "<<Lecturers[i].get_e_cont()<<" to university. "<<endl;
			//	cout<<endl<<Lecturers[1].getEmp()<<endl;
}	

if(max==of_cont)
{
	l=0;r=0;s=0;o=0;
	cout<<"I see that there is an opportunity for being officer "<<Uni[0].getName()<<" in the university.  So I am officer."<<endl;
			cout<< "University has makeDoc, drinkTea, research, giveLesson, seeSuccessfulStudent, makePublish, manageProcess, giveHW, readHW, receivePetition, submitPetition "<<endl;
			cout<<"I did makeDoc,drinkTea,manageProcess,submitPetition."<<endl;
			cout<<"My happiness is 0 and my money is 0. I contribute to 0 " <<Uni[0].getName()<<" . "<<endl;
			cout<<"University has research,giveLesson,seeSuccessfulStudent,makePublish,giveHW,readHW,receivePetition, I cannot do that."<<endl;
for(int i=0;i<14;i++)
	{
		ra= act[i];
		if(ra==makeDoc) /*enum*/
		{
			//o=rand()%OfficersSize;
			Officers[o].makeDoc();
			cout<<Officers[o].getName()<<" "<<Officers[o].getSurname()
				<<" have document.Therefore, "<<Officers[o].getName()<<" "<<Officers[o].getSurname()
				<<" make document. Happinies of "<<Officers[o].getName()<<" "<<Officers[o].getSurname()
				<<" is "<<Officers[o].getHappiness()<<", contribution of uni is "<<Officers[o].getEmp()<<endl;
		}
		else if(ra==drinkTea)/*enum*/
		{
			
			
				//o=rand()%OfficersSize;
				Officers[o].drinkTea();
				 cout<<Officers[o].getName()<<" "<<Officers[o].getSurname()
				 	<<" have slackness. Therefore, "<<Officers[o].getName()<<" "<<Officers[o].getSurname()
				 	<<"drinks tea. Happinies of Officer "<<Officers[o].getName()<<" "<<Officers[o].getSurname()
				 	<<"is "<<Officers[o].getHappiness()<<", contribution of uni is "<<Officers[o].getEmp()<<endl;
			
		}
		
		
		
		
		else if(ra==manageProcess)/*enum*/
		{
		
				//o=rand()%OfficersSize;
				Officers[o].manageProcess();
				cout<<Officers[o].getName()<<" "<<Officers[o].getSurname()
				<<" have administration.Therefore, "<<Officers[o].getName()<<" "<<Officers[o].getSurname()
				<<" make menage process. Happinies of "<<Officers[o].getName()<<" "<<Officers[o].getSurname()
				<<" is "<<Officers[o].getHappiness()<<", contribution of uni is "<<Officers[o].getEmp()<<endl;
		
			
		}
		
		
		
		else if(ra==submitPetition)/*enum*/
		{
			
				//o=rand()%OfficersSize;
				Officers[o].submitPetition();
				cout<<Officers[o].getName()<<" "<<Officers[o].getSurname()
				<<" have solution.Therefore, "<<Officers[o].getName()<<" "<<Officers[o].getSurname()
				<<" submit petition. Happinies of "<<Officers[o].getName()<<" "<<Officers[o].getSurname()
				<<" is "<<Officers[o].getHappiness()<<", contribution of uni is "<<Officers[o].getEmp()<<endl;
		
			
		}
	}
	i=0;cout<<endl;
			
			cout<<"After all my happiness is "<<Officers[0].getHappiness();
			cout<<" and my money is 100000 dolars.  I contribute "<<Officers[0].get_e_cont()<<" to university. "<<endl;
				//cout<<endl<<Lecturers[1].getEmp()<<endl;
}			

if(max==sec_cont)
{

		l=0;r=0;s=0;o=0;
		cout<<"I see that there is an opportunity for being officer "<<Uni[0].getName()<<" in the university.  So I am officer."<<endl;
			cout<< "University has makeDoc, drinkTea, research, giveLesson, seeSuccessfulStudent, makePublish, manageProcess, giveHW, readHW, receivePetition, submitPetition "<<endl;
			cout<<"I did drinkTea,manageProcess,receivePetition,submitPetition."<<endl;
			cout<<"My happiness is 0 and my money is 0. I contribute to 0 " <<Uni[0].getName()<<" . "<<endl;
			cout<<"University has makeDoc,research,giveLesson,seeSuccessfulStudent,makePublish,giveHW,readHW, I cannot do that."<<endl;
for(int i=0;i<14;i++)
	{
		ra= act[i];
		
		 if(ra==drinkTea)/*enum*/
		{
			
				//s=rand()%SecretarysSize;
				Secretarys[s].drinkTea();
				 cout<<Secretarys[s].getName()<<" "<<Secretarys[s].getSurname()
				 	<<" have slackness. Therefore,"<<Secretarys[s].getName()<<" "<<Secretarys[s].getSurname()
				 	<<"  drinks tea. Happinies of "<<Secretarys[s].getName()<<" "<<Secretarys[s].getSurname()
				 	<<"is "<<Secretarys[s].getHappiness()<<", contribution of uni is "<<Secretarys[s].getEmp()<<endl;
			
			
		}
		else if(ra==manageProcess)/*enum*/
		{
			
				//s=rand()%SecretarysSize;
				Secretarys[s].manageProcess();
				cout<<Secretarys[s].getName()<<" "<<Secretarys[s].getSurname()
				<<" have administration.Therefore, "<<Secretarys[s].getName()<<" "<<Secretarys[s].getSurname()
				<<" make menage process. Happinies of "<<Secretarys[s].getName()<<" "<<Secretarys[s].getSurname()
				<<" is "<<Secretarys[s].getHappiness()<<", contribution of uni is "<<Secretarys[s].getEmp()<<endl;
		
			
		}
		else if(ra==receivePetition)/*enum*/
		{
			//s=rand()%SecretarysSize;
			Secretarys[s].receivePetition();
			cout<<Secretarys[s].getName()<<" "<<Secretarys[s].getSurname()
			<<" have incident.Therefore, "<<Secretarys[s].getName()<<" "<<Secretarys[s].getSurname()
			<<" receive petition. Happinies of "<<Secretarys[s].getName()<<" "<<Secretarys[s].getSurname()
			<<" is "<<Secretarys[s].getHappiness()<<", contribution of uni is "<<Secretarys[s].getEmp()<<endl;
		}
		else if(ra==submitPetition)/*enum*/
		{
			
				//s=rand()%SecretarysSize;
				Secretarys[s].submitPetition();
				cout<<Secretarys[s].getName()<<" "<<Secretarys[s].getSurname()
				<<" have solution.Therefore, "<<Secretarys[s].getName()<<" "<<Secretarys[s].getSurname()
				<<" submit petition. Happinies of "<<Secretarys[s].getName()<<" "<<Secretarys[s].getSurname()
				<<" is "<<Secretarys[s].getHappiness()<<", contribution of uni is "<<Secretarys[s].getEmp()<<endl;
		

		}
	}
	i=0;cout<<endl;
			
			cout<<"After all my happiness is "<<Secretarys[i].getHappiness()<<endl;
			cout<<" and my money is 100000 dolars.  I contribute "<<Secretarys[i].get_e_cont()<<" to university. "<<endl;
				//cout<<endl<<Lecturers[1].getEmp()<<endl;
}
if(max==res_cont)
{
			l=0;r=0;s=0;o=0;
			cout<<"I see that there is an opportunity for being officer "<<Uni[0].getName()<<" in the university.  So I am officer."<<endl;
			cout<< "University has makeDoc, drinkTea, research, giveLesson, seeSuccessfulStudent, makePublish, manageProcess, giveHW, readHW, receivePetition, submitPetition "<<endl;
			cout<<"I did drinkTea,research,seeSuccessfulStudent,makePublish,readHW,submitPetition."<<endl;
			cout<<"My happiness is 0 and my money is 0. I contribute to 0 " <<Uni[0].getName()<<" . "<<endl;
			cout<<"University has makeDoc,giveLesson, manageProcess,giveHW, receivePetition, I cannot do that."<<endl;


	for(int i=0;i<14;i++)
	{
		ra= act[i];
	
		 if(ra==drinkTea)/*enum*/
		{
			
				//r=rand()%ResearchAsistantsSize;
				ResearchAsistants[r].drinkTea();
				 cout<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				 	<<" have slackness. Therefore, "<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				 	<<" drinks tea. Happinies of "<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				 	<<" is "<<ResearchAsistants[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants[r].getEmp()<<endl;
		
		}
		else if(ra==research)/*enum*/
		{
			//r=rand()%ResearchAsistantsSize;
			 ResearchAsistants[r].research();
			 cout<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
			 <<" have project.Therefore, "<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
			 <<" research. Happinies of "<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
			 <<"is "<<ResearchAsistants[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants[r].getEmp()<<endl;
		}
		
		else if(ra==seeSuccessfulStudent)/*enum*/
		{
				//r=rand()%ResearchAsistantsSize;
				ResearchAsistants[r].seeSuccessfulStudent();
				cout<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				<<" have seminar.Therefore, "<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				<<" see successful student. Happinies of"<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				<<" is "<<ResearchAsistants[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants[r].getEmp()<<endl;
			

		}
		else if(ra==makePublish)/*enum*/
		{
				//r=rand()%ResearchAsistantsSize;
				ResearchAsistants[r].makePublish();
				cout<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				<<" have academic paper.Therefore, "<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				<<" make publish. Happinies of "<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				<<" is "<<ResearchAsistants[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants[r].getEmp()<<endl;
			
		}
		
		
		else if(ra==readHW)/*enum*/
		{
			//r=rand()%ResearchAsistantsSize;
			ResearchAsistants[r].readHW();
			cout<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
			<<" have homework time out.Therefore, "<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
			<<" read homework. Happinies of "<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
			<<" is "<<ResearchAsistants[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants[r].getEmp()<<endl;
		}
		
		else if(ra==submitPetition)/*enum*/
		{
			
				//r=rand()%ResearchAsistantsSize;
				ResearchAsistants[r].submitPetition();
				cout<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				<<" have solution.Therefore, "<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				<<" submit petition. Happinies of "<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				<<" is "<<ResearchAsistants[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants[r].getEmp()<<endl;
			
		}
	}
	i=0;cout<<endl;
			
			cout<<"After all my happiness is "<<ResearchAsistants[i].getHappiness();
			cout<<" and my money is 100000 dolars.  I contribute "<<ResearchAsistants[i].get_e_cont()<<" to university. "<<endl;
			//cout<<endl<<Lecturers[1].getEmp()<<endl;


}

/*************************************LIBERAL FINISH*****************************************************************************************/





	/*delete [] Lecturers;
	delete [] Officers;
	delete [] ResearchAsistants;
	delete [] Secretarys;
	delete Y;
	delete [] Uni;
	delete [] arr;
	delete [] arr1;
	delete [] arr2;*/

}





void communist()
{
	UniversityType uniType;
	/**********************************************************/
	LiberalEducation<int> * Y =new LiberalEducation<int>;
	University<int> * Uni  ;		/*employee has a University class*/
	Lecturer<int> * Lecturers;
	Secretary<int> * Secretarys;
	ResearchAsistant<int> * ResearchAsistants;
	Officer<int> * Officers;

	/*********************************************/
	int ResearchAsistantsSize=0;
	int LecturersSize=0;
	int OfficersSize=0;
	int SecretarysSize=0;
	int UniSize=0;

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
/*************************************************************/
	Uni[0]=Y->foundUni(Uni,UniSize,Uresearch);	
	Uni[0].setName("Sankt-Peterburg Devlet Üniversitesi");
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
		cout<<"EducationSystem give job to "<<p[i].name<<" "<<p[i].surname<<" as lecturer."<<endl;
	}
	else if(emp[i]==Emp_Officer)
	{
		cout<<Uni[0].getName()<<" requests Officer"<<endl;
		Y->giveJob(Uni,Uresearch,p[i].name,p[i].surname,Emp_Officer,Lecturers,Officers,Secretarys,ResearchAsistants,LecturersSize,OfficersSize,ResearchAsistantsSize,SecretarysSize);
		cout<<"EducationSystem give job to "<<p[i].name<<" "<<p[i].surname<<" as officer."<<endl;
	}
	else if(emp[i]==Emp_ResearchAsistant)
	{
		cout<<Uni[0].getName()<<" requests ResearchAsistant"<<endl;
		Y->giveJob(Uni,Uresearch,p[i].name,p[i].surname,Emp_ResearchAsistant,Lecturers,Officers,Secretarys,ResearchAsistants,LecturersSize,OfficersSize,ResearchAsistantsSize,SecretarysSize);
		cout<<"EducationSystem give job to "<<p[i].name<<" "<<p[i].surname<<" as research asistant."<<endl;
	}
	else if(emp[i]==Emp_Secretary)
	{
		cout<<Uni[0].getName()<<" requests Secretary"<<endl;
		Y->giveJob(Uni,Uresearch,p[i].name,p[i].surname,Emp_Secretary,Lecturers,Officers,Secretarys,ResearchAsistants,LecturersSize,OfficersSize,ResearchAsistantsSize,SecretarysSize);
		cout<<"EducationSystem give job to "<<p[i].name<<" "<<p[i].surname<<" as secretary."<<endl;
	}
	
}
cout<<endl;

rand(emp,4);

int act[14];
srand (time(NULL));
int lec_cont=0,of_cont=0,sec_cont=0,res_cont=0;
int lec_hap=0,of_hap=0,sec_hap=0,res_hap=0;
int a;
int ra=0;
for(int i=0;i<14;i++)
{
	a=rand() % 11+1;
	act[i]=a;
	if(a==1)
	{
		of_cont = of_cont + 3;
		of_hap = of_hap -2 ;
	}
	else if(a==2)
	{
		lec_cont=lec_cont-2;
		of_cont= of_cont - 2 ;
		sec_cont= sec_cont -2 ;
		res_cont=  res_cont -2;

		lec_hap=lec_hap+5;
		of_hap= of_hap +5 ;
		sec_hap= sec_hap +5 ;
		res_hap=  res_hap +5;
	}
	else if(a==3)
	{
		res_cont=  res_cont +4;
		res_hap=  res_hap +3;
	}
	else if(a==4)
	{
		lec_cont=lec_cont+1;
		lec_hap=lec_hap+1;
	}
	else if(a==5)
	{
			lec_hap=lec_hap+10;
			res_hap=  res_hap +10;
	}
	else if(a==6)
	{
		lec_cont=lec_cont+5;
		res_cont=  res_cont +5;

		lec_hap=lec_hap+2;
		res_hap=  res_hap +2;

	}
	else if(a==7)
	{
		of_cont= of_cont + 2 ;
		sec_cont= sec_cont +2 ;

		of_hap= of_hap -1;
		sec_hap= sec_hap -1;
	}
	else if(a==8)
	{
		lec_cont=lec_cont+1;
		lec_hap=lec_hap-2;
	}
	else if(a==9)
	{
		res_cont=  res_cont +2;
		res_hap=  res_hap -3;
	}
	else if(a==10)
	{
		sec_cont= sec_cont -1; 
		sec_hap= sec_hap -1;
	}
	else
	{
		lec_cont=lec_cont-2;
		of_cont= of_cont - 2 ;
		sec_cont= sec_cont -2 ;
		res_cont=  res_cont -2;

		lec_hap=lec_hap+1;
		of_hap= of_hap +1 ;
		sec_hap= sec_hap +1 ;
		res_hap=  res_hap +1;
	}
}
int max=-999;
int max_hap=0;

	if(max<lec_cont)
		max=lec_cont;
	if(max<of_cont)
		max=of_cont;
	if(max<sec_cont)
		max=sec_cont;
	if(max<res_cont)
		max=res_cont;



int l=0,r=0,s=0,o=0;


cout<<endl<<endl;
	
	l=0;r=0;s=0;o=0;
	srand (time(NULL));		/* producer random number */
	for(int i=0;i<120;i++)
	{
		ra= rand() % 11;
		if(ra==makeDoc) /*enum*/
		{
			//o=rand()%OfficersSize;
			Officers[o].makeDoc();
			cout<<"Officer have document.Therefore, Officer make document. Happinies of Officer is "<<Officers[o].getHappiness()<<", contribution of uni is "<<Officers[o].getEmp()<<endl;
		
		}
		
		else if(ra==drinkTea)/*enum*/
		{
			ra=rand() % 4;		/*select employee for drinkTea action randomly */
			if(ra==0)
			{
				//r=rand()%ResearchAsistantsSize;
				ResearchAsistants[r].drinkTea();
				 cout<<"Research Asistant have slackness. Therefore, Research Asistant drinks tea. Happinies of Research Asistant is "<<ResearchAsistants[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants[r].getEmp()<<endl;
				
			}
			else if(ra==1)
			{
				//l=rand()%LecturersSize;
				Lecturers[l].drinkTea();
				 cout<<"Lecturer have slackness. Therefore, Lecturer drinks tea. Happinies of Lecturer is "<<Lecturers[l].getHappiness()<<", contribution of uni is "<<Lecturers[l].getEmp()<<endl;
			}
			else if(ra==2)
			{
				//s=rand()%SecretarysSize;
				Secretarys[s].drinkTea();
				 cout<<"Secretary have slackness. Therefore, Secretary drinks tea. Happinies of Secretary is "<<Secretarys[s].getHappiness()<<", contribution of uni is "<<Secretarys[s].getEmp()<<endl;
			}
			else if(ra==3)
			{
				//o=rand()%OfficersSize;
				Officers[o].drinkTea();
				 cout<<"Officer have slackness. Therefore, Officer drinks tea. Happinies of Officer is "<<Officers[o].getHappiness()<<", contribution of uni is "<<Officers[o].getEmp()<<endl;
			}
		}
		else if(ra==research)/*enum*/
		{
			//r=rand()%ResearchAsistantsSize;
			 ResearchAsistants[r].research();
			 cout<<"Research Asistant have project.Therefore, Research Asistant research. Happinies of Research Asistant is "<<ResearchAsistants[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants[r].getEmp()<<endl;
		}
		else if(ra==giveLesson)/*enum*/
		{
			//l=rand()%LecturersSize;
			Lecturers[l].giveLesson();
			cout<<"Lecturer have lesson.Therefore, Lecturer give lesson. Happinies of Lecturer is "<<Lecturers[l].getHappiness()<<", contribution of uni is "<<Lecturers[l].getEmp()<<endl;
		
		}
		else if(ra==seeSuccessfulStudent)/*enum*/
		{
			 ra=rand() % 2;/*select employee for seeSuccessfulStudent action randomly */
			if(ra==0)
			{
				//r=rand()%ResearchAsistantsSize;
				ResearchAsistants[r].seeSuccessfulStudent();
				cout<<"Lecturer have seminar.Therefore, Lecturer see successful student. Happinies of Lecturer is "<<Lecturers[l].getHappiness()<<", contribution of uni is "<<Lecturers[l].getEmp()<<endl;
			}
			else if(ra==1)
			{
				//l=rand()%LecturersSize;
				Lecturers[l].seeSuccessfulStudent();
				cout<<"ResearchAsistant have seminar.Therefore, ResearchAsistant see successful student. Happinies of ResearchAsistant is "<<ResearchAsistants[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants[r].getEmp()<<endl;
		
			}

		}
		else if(ra==makePublish)/*enum*/
		{
			  ra=rand() % 2;/*select employee for makePublish action randomly */
			if(ra==0)
			{
				//r=rand()%ResearchAsistantsSize;
				ResearchAsistants[r].makePublish();
				cout<<"Research Asistant have academic paper.Therefore, Research Asistant make publish. Happinies of Research Asistant is "<<ResearchAsistants[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants[r].getEmp()<<endl;
			}
			else if(ra==1)
			{
				//l=rand()%LecturersSize;
				Lecturers[l].makePublish();
				cout<<"Lecturer have academic paper.Therefore, Lecturer make publish. Happinies of Lecturer is "<<Lecturers[l].getHappiness()<<", contribution of uni is "<<Lecturers[l].getEmp()<<endl;
			}
		}
		else if(ra==manageProcess)/*enum*/
		{
			 ra=rand() % 2;/*select employee for manageProcess action randomly */
			if(ra==0)
			{
				//s=rand()%SecretarysSize;
				Secretarys[s].manageProcess();
				cout<<"Secretary have administration.Therefore, Secretary make menage process. Happinies of Secretary is "<<Secretarys[s].getHappiness()<<", contribution of uni is "<<Secretarys[s].getEmp()<<endl;
		
			}
			else if(ra==1)
			{
				//o=rand()%OfficersSize;
				Officers[o].manageProcess();
				cout<<"Officer have administration.Therefore, Officer make menage process. Happinies of Officer is "<<Officers[o].getHappiness()<<", contribution of uni is "<<Officers[o].getEmp()<<endl;
		
			}
		}
		else if(ra==giveHW)/*enum*/
		{
			//l=rand()%LecturersSize;
			Lecturers[l].giveHW();
			cout<<"Lecturer have homework time.Therefore, Lecturer give Homework. Happinies of Lecturer is "<<Lecturers[l].getHappiness()<<", contribution of uni is "<<Lecturers[l].getEmp()<<endl;
		
		}
		else if(ra==readHW)/*enum*/
		{
			//r=rand()%ResearchAsistantsSize;
			ResearchAsistants[r].readHW();
			cout<<"Research Asistant have homework time out.Therefore, Research Asistant read homework. Happinies of Research Asistant is "<<ResearchAsistants[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants[r].getEmp()<<endl;
		}
		else if(ra==receivePetition)/*enum*/
		{
			//s=rand()%SecretarysSize;
			Secretarys[s].receivePetition();
			cout<<"Secretary have incident.Therefore, Secretary receive petition. Happinies of Secretary is "<<Secretarys[s].getHappiness()<<", contribution of uni is "<<Secretarys[s].getEmp()<<endl;
		}
		else if(ra==submitPetition)/*enum*/
		{
			 ra=rand() % 4;/*select employee for submitPetition action randomly */
			if(ra==0)
			{
				//r=rand()%ResearchAsistantsSize;
				ResearchAsistants[r].submitPetition();
				cout<<"ResearchAsistant have solution.Therefore, ResearchAsistant submit petition. Happinies of ResearchAsistant is "<<ResearchAsistants[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants[r].getEmp()<<endl;
			}
			else if(ra==1)
			{
				//l=rand()%LecturersSize;
				Lecturers[l].submitPetition();
				cout<<"Lecturer have solution.Therefore, Lecturer submit petition. Happinies of Lecturer is "<<Lecturers[l].getHappiness()<<", contribution of uni is "<<Lecturers[l].getEmp()<<endl;
			}
			else if(ra==2)
			{
				//s=rand()%SecretarysSize;
				Secretarys[s].submitPetition();
				cout<<"Secretary have solution.Therefore, Secretary submit petition. Happinies of Secretary is "<<Secretarys[s].getHappiness()<<", contribution of uni is "<<Secretarys[s].getEmp()<<endl;
		

			}
			else if(ra==3)
			{
				//o=rand()%OfficersSize;
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



Lecturer<int> * lm = new Lecturer<int>[1]; 

for(int i=0;i<LecturersSize;i++)
{
	if(Lecturers[i].get_e_cont()>lm[0].get_e_cont())
	{
		lm[0] = Lecturers[i];
		
	}
}
Secretary<int> * sm = new Secretary<int>[1];

for(int i=0;i< SecretarysSize ;i++)
{
	if(Secretarys[i].get_e_cont()>sm[0].get_e_cont())
	{
		sm[0] = Secretarys[i];
		
	}
}

ResearchAsistant<int> * rm = new ResearchAsistant<int>[1];

for(int i=0;i< ResearchAsistantsSize ;i++)
{
	if(ResearchAsistants[i].get_e_cont()>rm[0].get_e_cont())
	{
		rm[0] = ResearchAsistants[i];
		
	}
}


Officer<int> * om = new Officer<int>[1] ;

for(int i=0;i< OfficersSize ;i++)
{
	if(Officers[i].get_e_cont()>om[0].get_e_cont())
	{
		om[0] = Officers[i];
		
	}
}




if(om[0].get_e_cont() > rm[0].get_e_cont())
{
	if( om[0].get_e_cont() > sm[0].get_e_cont() )
	{
		if( om[0].get_e_cont() > lm[0].get_e_cont() )
		{
			
			cout<<"After all my happiness is "<<om[0].getHappiness();
			cout<<" and my money is 100000 dolars.  I contribute "<<om[0].get_e_cont()<<" to university. "<<endl;
		}
	}

}

if(lm[0].get_e_cont() > rm[0].get_e_cont())
{
	if( lm[0].get_e_cont() > sm[0].get_e_cont() )
	{
		if( lm[0].get_e_cont() > om[0].get_e_cont() )
		{
			cout<<"After all my happiness is "<<lm[0].getHappiness();
			cout<<" and my money is 100000 dolars.  I contribute "<<lm[0].get_e_cont()<<" to university. "<<endl;

		}
	}

}



if(rm[0].get_e_cont() > om[0].get_e_cont())
{
	if( rm[0].get_e_cont() > sm[0].get_e_cont() )
	{
		if( rm[0].get_e_cont() > lm[0].get_e_cont() )
		{
			cout<<"After all my happiness is "<<rm[0].getHappiness();
			cout<<" and my money is 100000 dolars.  I contribute "<<rm[0].get_e_cont()<<" to university. "<<endl;

		}
	}

}


if(sm[0].get_e_cont() > rm[0].get_e_cont())
{
	if( sm[0].get_e_cont() > om[0].get_e_cont() )
	{
		if( sm[0].get_e_cont() > lm[0].get_e_cont() )
		{
			cout<<"After all my happiness is "<<sm[0].getHappiness();
			cout<<" and my money is 100000 dolars.  I contribute "<<sm[0].get_e_cont()<<" to university. "<<endl;

		}
	}

}

/*

	delete [] Lecturers;
	delete [] Officers;
	delete [] ResearchAsistants;
	delete [] Secretarys;

	delete Y;
	delete [] Uni;
	delete [] arr;
	delete [] arr1;
	delete [] arr2;
	*/
}


void capitalist()
{


	UniversityType uniType;
	/**********************************************************/
	LiberalEducation<int> * Y =new LiberalEducation<int>;
	University<int> * Uni  ;		/*employee has a University class*/
	Lecturer<int> * Lecturers;
	Secretary<int> * Secretarys;
	ResearchAsistant<int> * ResearchAsistants;
	Officer<int> * Officers;



	/*********************************************/
	int ResearchAsistantsSize=0;
	int LecturersSize=0;
	int OfficersSize=0;
	int SecretarysSize=0;
	int UniSize=0;


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
/*************************************************************/
	Uni[0]=Y->foundUni(Uni,UniSize,Uresearch);	
	Uni[0].setName("Washington");
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
		cout<<"EducationSystem give job to "<<p[i].name<<" "<<p[i].surname<<" as lecturer."<<endl;
	}
	else if(emp[i]==Emp_Officer)
	{
		cout<<Uni[0].getName()<<" requests Officer"<<endl;
		Y->giveJob(Uni,Uresearch,p[i].name,p[i].surname,Emp_Officer,Lecturers,Officers,Secretarys,ResearchAsistants,LecturersSize,OfficersSize,ResearchAsistantsSize,SecretarysSize);
		cout<<"EducationSystem give job to "<<p[i].name<<" "<<p[i].surname<<" as officer."<<endl;
	}
	else if(emp[i]==Emp_ResearchAsistant)
	{
		cout<<Uni[0].getName()<<" requests ResearchAsistant"<<endl;
		Y->giveJob(Uni,Uresearch,p[i].name,p[i].surname,Emp_ResearchAsistant,Lecturers,Officers,Secretarys,ResearchAsistants,LecturersSize,OfficersSize,ResearchAsistantsSize,SecretarysSize);
		cout<<"EducationSystem give job to "<<p[i].name<<" "<<p[i].surname<<" as research asistant."<<endl;
	}
	else if(emp[i]==Emp_Secretary)
	{
		cout<<Uni[0].getName()<<" requests Secretary"<<endl;
		Y->giveJob(Uni,Uresearch,p[i].name,p[i].surname,Emp_Secretary,Lecturers,Officers,Secretarys,ResearchAsistants,LecturersSize,OfficersSize,ResearchAsistantsSize,SecretarysSize);
		cout<<"EducationSystem give job to "<<p[i].name<<" "<<p[i].surname<<" as secretary."<<endl;
	}
	
}




rand(emp,4);

int act[14];
srand (time(NULL));
int lec_cont=0,of_cont=0,sec_cont=0,res_cont=0;
int lec_hap=0,of_hap=0,sec_hap=0,res_hap=0;
int a;
int ra=0;
for(int i=0;i<14;i++)
{
	a=rand() % 11+1;
	act[i]=a;
	if(a==1)
	{
		of_cont = of_cont + 3;
		of_hap = of_hap -2 ;
	}
	else if(a==2)
	{
		lec_cont=lec_cont-2;
		of_cont= of_cont - 2 ;
		sec_cont= sec_cont -2 ;
		res_cont=  res_cont -2;

		lec_hap=lec_hap+5;
		of_hap= of_hap +5 ;
		sec_hap= sec_hap +5 ;
		res_hap=  res_hap +5;
	}
	else if(a==3)
	{
		res_cont=  res_cont +4;
		res_hap=  res_hap +3;
	}
	else if(a==4)
	{
		lec_cont=lec_cont+1;
		lec_hap=lec_hap+1;
	}
	else if(a==5)
	{
			lec_hap=lec_hap+10;
			res_hap=  res_hap +10;
	}
	else if(a==6)
	{
		lec_cont=lec_cont+5;
		res_cont=  res_cont +5;

		lec_hap=lec_hap+2;
		res_hap=  res_hap +2;

	}
	else if(a==7)
	{
		of_cont= of_cont + 2 ;
		sec_cont= sec_cont +2 ;

		of_hap= of_hap -1;
		sec_hap= sec_hap -1;
	}
	else if(a==8)
	{
		lec_cont=lec_cont+1;
		lec_hap=lec_hap-2;
	}
	else if(a==9)
	{
		res_cont=  res_cont +2;
		res_hap=  res_hap -3;
	}
	else if(a==10)
	{
		sec_cont= sec_cont -1; 
		sec_hap= sec_hap -1;
	}
	else
	{
		lec_cont=lec_cont-2;
		of_cont= of_cont - 2 ;
		sec_cont= sec_cont -2 ;
		res_cont=  res_cont -2;

		lec_hap=lec_hap+1;
		of_hap= of_hap +1 ;
		sec_hap= sec_hap +1 ;
		res_hap=  res_hap +1;
	}
}
int max=-999;
int max_hap=0;

	if(max<lec_cont)
		max=lec_cont;
	if(max<of_cont)
		max=of_cont;
	if(max<sec_cont)
		max=sec_cont;
	if(max<res_cont)
		max=res_cont;


int l=0,r=0,s=0,o=0;

	/****************************************************************************************************************************************************************/

	for(int i=0;i<50;i++)
	{
		ra= rand() % 11;
		if(ra==makeDoc) /*enum*/
		{
			//o=rand()%OfficersSize;
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
				//r=rand()%ResearchAsistantsSize;
				ResearchAsistants[r].drinkTea();
				 cout<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				 	<<" have slackness. Therefore, "<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				 	<<" drinks tea. Happinies of "<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				 	<<" is "<<ResearchAsistants[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants[r].getEmp()<<endl;
			}
			else if(ra==1)
			{
				//l=rand()%LecturersSize;
				Lecturers[l].drinkTea();
				 cout<<Lecturers[l].getName()<<" "<<Lecturers[l].getSurname()
				 	<<" have slackness. Therefore, "<<Lecturers[l].getName()<<" "<<Lecturers[l].getSurname()
				 	<<" drinks tea. Happinies of "<<Lecturers[l].getName()<<" "<<Lecturers[l].getSurname()
				 	<<"is "<<Lecturers[l].getHappiness()<<", contribution of uni is "<<Lecturers[l].getEmp()<<endl;
			}
			else if(ra==2)
			{
				//s=rand()%SecretarysSize;
				Secretarys[s].drinkTea();
				 cout<<Secretarys[s].getName()<<" "<<Secretarys[s].getSurname()
				 	<<" have slackness. Therefore,"<<Secretarys[s].getName()<<" "<<Secretarys[s].getSurname()
				 	<<"  drinks tea. Happinies of "<<Secretarys[s].getName()<<" "<<Secretarys[s].getSurname()
				 	<<"is "<<Secretarys[s].getHappiness()<<", contribution of uni is "<<Secretarys[s].getEmp()<<endl;
			}
			else if(ra==3)
			{
				//o=rand()%OfficersSize;
				Officers[o].drinkTea();
				 cout<<Officers[o].getName()<<" "<<Officers[o].getSurname()
				 	<<" have slackness. Therefore, "<<Officers[o].getName()<<" "<<Officers[o].getSurname()
				 	<<"drinks tea. Happinies of Officer "<<Officers[o].getName()<<" "<<Officers[o].getSurname()
				 	<<"is "<<Officers[o].getHappiness()<<", contribution of uni is "<<Officers[o].getEmp()<<endl;
			}
		}
		else if(ra==research)/*enum*/
		{
			//r=rand()%ResearchAsistantsSize;
			 ResearchAsistants[r].research();
			 cout<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
			 <<" have project.Therefore, "<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
			 <<" research. Happinies of "<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
			 <<"is "<<ResearchAsistants[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants[r].getEmp()<<endl;
		}
		else if(ra==giveLesson)/*enum*/
		{
			//l=rand()%LecturersSize;
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
				//r=rand()%ResearchAsistantsSize;
				ResearchAsistants[r].seeSuccessfulStudent();
				cout<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				<<" have seminar.Therefore, "<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				<<" see successful student. Happinies of"<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				<<" is "<<ResearchAsistants[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants[r].getEmp()<<endl;
			}
			else if(ra==1)
			{
				//l=rand()%LecturersSize;
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
				//r=rand()%ResearchAsistantsSize;
				ResearchAsistants[r].makePublish();
				cout<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				<<" have academic paper.Therefore, "<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				<<" make publish. Happinies of "<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				<<" is "<<ResearchAsistants[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants[r].getEmp()<<endl;
			}
			else if(ra==1)
			{
				//l=rand()%LecturersSize;
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
				//s=rand()%SecretarysSize;
				Secretarys[s].manageProcess();
				cout<<Secretarys[s].getName()<<" "<<Secretarys[s].getSurname()
				<<" have administration.Therefore, "<<Secretarys[s].getName()<<" "<<Secretarys[s].getSurname()
				<<" make menage process. Happinies of "<<Secretarys[s].getName()<<" "<<Secretarys[s].getSurname()
				<<" is "<<Secretarys[s].getHappiness()<<", contribution of uni is "<<Secretarys[s].getEmp()<<endl;
		
			}
			else if(ra==1)
			{
				//o=rand()%OfficersSize;
				Officers[o].manageProcess();
				cout<<Officers[o].getName()<<" "<<Officers[o].getSurname()
				<<" have administration.Therefore, "<<Officers[o].getName()<<" "<<Officers[o].getSurname()
				<<" make menage process. Happinies of "<<Officers[o].getName()<<" "<<Officers[o].getSurname()
				<<" is "<<Officers[o].getHappiness()<<", contribution of uni is "<<Officers[o].getEmp()<<endl;
		
			}
		}
		else if(ra==giveHW)/*enum*/
		{
			//l=rand()%LecturersSize;
			Lecturers[l].giveHW();
			cout<<Lecturers[l].getName()<<" "<<Lecturers[l].getSurname()
			<<" have homework time.Therefore, "<<Lecturers[l].getName()<<" "<<Lecturers[l].getSurname()
			<<" give Homework. Happinies of "<<Lecturers[l].getName()<<" "<<Lecturers[l].getSurname()
			<<" is "<<Lecturers[l].getHappiness()<<", contribution of uni is "<<Lecturers[l].getEmp()<<endl;
		
		}
		else if(ra==readHW)/*enum*/
		{
			//r=rand()%ResearchAsistantsSize;
			ResearchAsistants[r].readHW();
			cout<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
			<<" have homework time out.Therefore, "<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
			<<" read homework. Happinies of "<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
			<<" is "<<ResearchAsistants[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants[r].getEmp()<<endl;
		}
		else if(ra==receivePetition)/*enum*/
		{
			//s=rand()%SecretarysSize;
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
				//r=rand()%ResearchAsistantsSize;
				ResearchAsistants[r].submitPetition();
				cout<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				<<" have solution.Therefore, "<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				<<" submit petition. Happinies of "<<ResearchAsistants[r].getName()<<" "<<ResearchAsistants[r].getSurname()
				<<" is "<<ResearchAsistants[r].getHappiness()<<", contribution of uni is "<<ResearchAsistants[r].getEmp()<<endl;
			}
			else if(ra==1)
			{
				//l=rand()%LecturersSize;
				Lecturers[l].submitPetition();
				cout<<Lecturers[l].getName()<<" "<<Lecturers[l].getSurname()
				<<" have solution.Therefore, "<<Lecturers[l].getName()<<" "<<Lecturers[l].getSurname()
				<<" submit petition. Happinies of "<<Lecturers[l].getName()<<" "<<Lecturers[l].getSurname()
				<<" is "<<Lecturers[l].getHappiness()<<", contribution of uni is "<<Lecturers[l].getEmp()<<endl;
			}
			else if(ra==2)
			{
				//s=rand()%SecretarysSize;
				Secretarys[s].submitPetition();
				cout<<Secretarys[s].getName()<<" "<<Secretarys[s].getSurname()
				<<" have solution.Therefore, "<<Secretarys[s].getName()<<" "<<Secretarys[s].getSurname()
				<<" submit petition. Happinies of "<<Secretarys[s].getName()<<" "<<Secretarys[s].getSurname()
				<<" is "<<Secretarys[s].getHappiness()<<", contribution of uni is "<<Secretarys[s].getEmp()<<endl;
		

			}
			else if(ra==3)
			{
				//o=rand()%OfficersSize;
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


Lecturer<int> * lm = new Lecturer<int>[1]; 

for(int i=0;i<LecturersSize;i++)
{
	if(Lecturers[i].get_e_cont()>lm[0].get_e_cont())
	{
		lm[0] = Lecturers[i];
		
	}
}
Secretary<int> * sm = new Secretary<int>[1];

for(int i=0;i< SecretarysSize ;i++)
{
	if(Secretarys[i].get_e_cont()>sm[0].get_e_cont())
	{
		sm[0] = Secretarys[i];
		
	}
}

ResearchAsistant<int> * rm = new ResearchAsistant<int>[1];

for(int i=0;i< ResearchAsistantsSize ;i++)
{
	if(ResearchAsistants[i].get_e_cont()>rm[0].get_e_cont())
	{
		rm[0] = ResearchAsistants[i];
		
	}
}


Officer<int> * om = new Officer<int>[1] ;

for(int i=0;i< OfficersSize ;i++)
{
	if(Officers[i].get_e_cont()>om[0].get_e_cont())
	{
		om[0] = Officers[i];
		
	}
}




if(om[0].get_e_cont() > rm[0].get_e_cont())
{
	if( om[0].get_e_cont() > sm[0].get_e_cont() )
	{
		if( om[0].get_e_cont() > lm[0].get_e_cont() )
		{
			cout<<om[0].getName()<<" : ";
			cout<<"After all my happiness is "<<om[0].getHappiness();
			cout<<" and my money is 100000 dolars.  I contribute "<<om[0].get_e_cont()<<" to university. "<<endl;
		}
	}

}

if(lm[0].get_e_cont() > rm[0].get_e_cont())
{
	if( lm[0].get_e_cont() > sm[0].get_e_cont() )
	{
		if( lm[0].get_e_cont() > om[0].get_e_cont() )
		{
			cout<<lm[0].getName()<<" : ";
			cout<<"After all my happiness is "<<lm[0].getHappiness();
			cout<<" and my money is 100000 dolars.  I contribute "<<lm[0].get_e_cont()<<" to university. "<<endl;

		}
	}

}



if(rm[0].get_e_cont() > om[0].get_e_cont())
{
	if( rm[0].get_e_cont() > sm[0].get_e_cont() )
	{
		if( rm[0].get_e_cont() > lm[0].get_e_cont() )
		{
			cout<<rm[0].getName()<<" : ";
			cout<<"After all my happiness is "<<rm[0].getHappiness();
			cout<<" and my money is 100000 dolars.  I contribute "<<rm[0].get_e_cont()<<" to university. "<<endl;

		}
	}

}


if(sm[0].get_e_cont() > rm[0].get_e_cont())
{
	if( sm[0].get_e_cont() > om[0].get_e_cont() )
	{
		if( sm[0].get_e_cont() > lm[0].get_e_cont() )
		{
			cout<<sm[0].getName()<<" : ";
			cout<<"After all my happiness is "<<sm[0].getHappiness();
			cout<<" and my money is 100000 dolars.  I contribute "<<sm[0].get_e_cont()<<" to university. "<<endl;

		}
	}

}


/*

	delete [] Lecturers;
	delete [] Officers;
	delete [] ResearchAsistants;
	delete [] Secretarys;


	delete Y;
	delete [] Uni;
	delete [] arr;
	delete [] arr1;
	delete [] arr2;

*/
}