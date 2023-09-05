#include "WashingMachineFacade.h"

WashingMachineFacade::WashingMachineFacade(Washing was, Rinsing rin, Spin sp, Performance perf)
{
	washing = was;
	rinsing = rin;
	spin = sp;
	performance = perf;
}

void WashingMachineFacade::Start()
{
	performance.Execute();
	washing.WashingMode();
	rinsing.RinseMode();
	spin.SpinMode();
}

void WashingMachineFacade::Stop()
{
	performance.Finish();
}
