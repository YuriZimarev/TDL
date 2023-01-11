#include "TDL.h"
#include "Startup.h"

Startup::Startup()
{
	CtrlLayout(*this, "Startup menu");
	Title("Startup menu").Zoomable().Sizeable().Maximize();
}