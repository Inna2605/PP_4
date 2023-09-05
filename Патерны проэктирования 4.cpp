// Реализовать паттерн "Фасад". Предметная область - использование стиральной машины

#include <iostream>
#include"Washing.h"
#include"Rinsing.h"
#include"Spin.h"
#include"WashingMachineFacade.h"
#include"Wash.h"
#include"Performance.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    Washing washing;
    Rinsing rinsing;
    Spin spin;
    Performance performance;

    WashingMachineFacade washing_machine(washing, rinsing, spin, performance);

    Wash wash;
    wash.WashingProcess(washing_machine);
}
