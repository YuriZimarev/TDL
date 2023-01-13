#include "TDL.h"
#include "Find.h"
#include "main.h"
#include "Startup.h"
FindMenu::FindMenu()
{
	CtrlLayoutCancel(*this, "");
	Title("Find menu").Zoomable().Sizeable().Maximize();
	find << [=] { Find(); };
	cancel << [=] {Cancel();};
}

void FindMenu::Find()
{
	Close();
	(new TDL)->OpenMain();
}
void FindMenu::Cancel()
{
	Close();
	(new Startup)->OpenMain();
}