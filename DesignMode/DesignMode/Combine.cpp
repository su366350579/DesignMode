#include "Combine.h"
using namespace DesignMode;

void Leader::PrintLeader()
{
	Print();
	for (auto iter = group.begin(); iter != group.end(); ++iter)
	{

		if ((*iter)->GetPositon() == E_Person)
		{
			(*iter)->Print();
		}
		else
		{
			(*iter)->PrintLeader();
		}
	}
}
