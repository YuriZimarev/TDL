#include "TDL.h"
#include "main.h"
TDL::TDL()
{
	CtrlLayout(*this, "TitanDAW");
	Title("TitanDAW").Zoomable().Sizeable().Maximize();
}