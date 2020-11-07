#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include "University.h"/* employee has a universty */



using namespace University_name;/* employee has a universty AND  has a namespace of university namespace */
using namespace std;

namespace Employee_name
{
	template<class T>
	class Employee
	{
		public:
			/* Constructors */

			Employee();
			void GTU_Contribution(University<T> *GTU);
			Employee* employ(University<T> *GTU,int size);
			~Employee();
			Employee(string  nameVal,string  surnameVal,int pidVal,int happinessVal);
			/* actions */
			
			virtual void drinkTea()=0;
			virtual void submitPetition()=0;
			virtual void giveLesson()=0;
			virtual void giveHW()=0;
			virtual void makeDoc()=0;				
			virtual void research()=0;
			virtual void readHW()=0;
			virtual void receivePetition()=0;
			virtual void seeSuccessfulStudent()=0;
			virtual void makePublish()=0;
			virtual void manageProcess()=0;

			/* getter */

			int getPid();
			string getName();
			string getSurname();
			int getHappiness();
			int  getEmp();

			/* setter function */

			void setPid(int pidVal);
			void setName(string nameVal);
			void setSurname(string surnameVal);
			void setHappiness(int happinessVal);
			void setEmp(int contributionVal);
			void set_e_cont(int contributionVal)
			{
				e_cont = e_cont + contributionVal;
			}
			int get_e_cont()
			{
				return e_cont;
			}
			string action_list()
			{
				return action;
			}
			
		private:
			int pid;
			string name;
			string surname;
			int happiness=0;
			University<T> * Emp;  
			int e_cont=0;
			string action ;

	};
}
#endif //EMPLOOYE_H