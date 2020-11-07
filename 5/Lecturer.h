#ifndef LECTURER_H
#define LECTURER_H
#include <string>
#include "AcademicPersonnel.h"/*base class parent*/
using namespace std;
using namespace AcademicPersonnel_name;/*parent namespace */

namespace Lecturer_name
{

	class Lecturer: public AcademicPersonnel  
	{
		public:
			/* Constructors */
			Lecturer();
			Lecturer(string  nameVal,string  surnameVal,int pidVal,int happinessVal);
			
			/*OTHER FUNCTIONS*/
			void giveLesson();
			void giveHW();
		private:
			string lesson;
			string HomeWorkTime;
	};

}
#endif //LECTURER_H