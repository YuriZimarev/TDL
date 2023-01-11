#include "TDL.h"
#include "main.h"
#include "Startup.h"


GUI_APP_MAIN
{
	///(new TDL)->OpenMain();
	(new Startup)->OpenMain();
	Ctrl::EventLoop();
}
