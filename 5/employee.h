#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include "University.h"/* employee has a universty */



using namespace University_name;/* employee has a universty AND  has a namespace of university namespace */
using namespace std;

namespace Employee_name
{

	class Employee
	{
		public:
			/* Constructors */

			Employee();
			void GTU_Contribution(University *GTU);
			~Employee();
			Employee(string  nameVal,string  surnameVal,int pidVal,int happinessVal);
			/* actions */
			void drinkTea();
			Employee* employ();
			void submitPetition();
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
			
		private:
			int pid;
			string name;
			string surname;
			int happiness=0;
			University * Emp;  

	};
}
#endif //EMPLOOYE_H