#include <iostream>
#include <fstream>
#include <sstream>
#include "CapitalistEducation.h"
#include "University.h"
using namespace  University_name;
using namespace std;
namespace CapitalistEducation_name	/* CapitalistEducation namespace */
{
	template<class T>
	University<T> & CapitalistEducation<T>::foundUni(University<T> * & uni,int &  UniSize,UniversityType uniType)
	{
		University<T> * temp = new University<T>[UniSize+1];
		for(int i=0;i<UniSize;i++)
		{
			temp[i]=uni[i];
		}
		uni=temp;
		UniSize++;
		return *uni;
	}
	/* this function add lecturer,officer,researchassistant and secretary dynamically */
	template<class T>
	void CapitalistEducation<T>::giveJob(University<T> * Uni,UniversityType uniType,string name,string surname,EmployeeType emp_type,Lecturer<T> * & Lecturers,Officer<T> * & Officers,Secretary<T> * & Secretarys,ResearchAsistant<T> * & ResearchAsistants,int & LecturersSize,int  & OfficersSize, int & ResearchAsistantsSize,int & SecretarysSize)
	{
		int a=emp_type;/* L O R S */
		int b=uniType;
		if(uniType==Uresearch)
		{
			b=0;
		}
		else if(uniType==Ulinguistic)
		{
			b=1;
		}
		else if(uniType==Utechnical)
		{
			b=2;
		}
		int i=0;
		if(a==0)
		{
			Lecturer<T> * temp = new Lecturer<T>[LecturersSize+1];
			for(i=0;i<LecturersSize;i++)
			{
				temp[i]=Lecturers[i];
			}
			Lecturers=temp;
			
			Lecturers[LecturersSize].setName(name);
			Lecturers[LecturersSize].setSurname(surname);
			Lecturers[LecturersSize].employ(Uni,b);
			LecturersSize++; 
			
			
		}
		else if(a==1)
		{
			Officer<T> * temp =new Officer<T>[OfficersSize+1];
			for(i=0;i<OfficersSize;i++)
			{
				temp[i]=Officers[i];
			}
			Officers=temp;
			
			Officers[OfficersSize].setName(name);
			Officers[OfficersSize].setSurname(surname);
			Officers[OfficersSize].employ(Uni,b);
			OfficersSize++;
		}
		else if(a==2)
		{
			ResearchAsistant<T> * temp = new ResearchAsistant<T>[ResearchAsistantsSize+1];
			for(i=0;i<ResearchAsistantsSize;i++)
			{
				temp[i]=ResearchAsistants[i];
			}
			ResearchAsistants=temp;
			ResearchAsistants[ResearchAsistantsSize].setName(name);
			ResearchAsistants[ResearchAsistantsSize].setSurname(surname);
			ResearchAsistants[ResearchAsistantsSize].employ(Uni,b);
			ResearchAsistantsSize++;
		}
		else if(a==3)
		{
			Secretary<T> * temp = new Secretary<T>[SecretarysSize+1];
			for(i=0;i<SecretarysSize;i++)
			{
				temp[i]=Secretarys[i];
			}
			Secretarys=temp;
			Secretarys[SecretarysSize].setName(name);
			Secretarys[SecretarysSize].setSurname(surname);
			Secretarys[SecretarysSize].employ(Uni,b);
			SecretarysSize++;
		}
	}
	
}/* the end of namespace CapitalistEducation_name */


	