#include "Wash.h"

void Wash::WashingProcess(WashingMachineFacade facade)
{
	facade.Start();
	facade.Stop();
}
