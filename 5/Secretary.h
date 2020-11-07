#ifndef SECRETARY_H
#define SECRETARY_H
#include <string>
#include "AdministrativePersonnel.h"/*header of base class */



using namespace AdministrativePersonnel_name;/* namespace of base class */
using namespace std;

namespace Secretary_name
{
	class Secretary: public AdministrativePersonnel/*inheritance*/
	{
	    public:
		Secretary();
		void receivePetition();

	};

}/* SECRETARY_NAME*/
#endif //SECRETARY_H
