#ifndef OFFICER_H
#define OFFICER_H
#include <string>
#include "AdministrativePersonnel.h"/*parent class*/



using namespace std;
using namespace AdministrativePersonnel_name;/*parent namespace */

namespace Officer_name
{
	class Officer: public AdministrativePersonnel
	{
	public:
		Officer();
		void makeDoc();

	};

}/* Officer_NAME*/
#endif //Officer_H