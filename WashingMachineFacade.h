#pragma once
#include"Washing.h"
#include"Rinsing.h"
#include"Spin.h"
#include"WashingMachineFacade.h"
#include"Performance.h"
class WashingMachineFacade
{
	Performance performance;
	Washing washing;
	Rinsing rinsing;
	Spin spin;
public:
	WashingMachineFacade(Washing was, Rinsing rin, Spin sp, Performance perf);
	void Start();
	void Stop();
};

