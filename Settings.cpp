#include "TDL.h"
#include "Settings.h"
#include "main.h"
#include "Startup.h"
SettingsMenu::SettingsMenu()
{
	CtrlLayoutCancel(*this, "");
	Title("Settings menu").Zoomable().Sizeable().Maximize();
	apply << [=] { Apply(); };
	cancel << [=] {Cancel();};
}

void SettingsMenu::Apply()
{
	Close();
	(new Startup)->OpenMain();
}
void SettingsMenu::Cancel()
{
	Close();
	(new Startup)->OpenMain();
}