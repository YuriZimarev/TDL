#include "TDL.h"
#include "Startup.h"
#include "main.h"
#include "Settings.h"
#include "Create.h"
#include "Find.h"
Startup::Startup()
{
	CtrlLayout(*this, "Startup menu");
	Title("Startup menu").Zoomable().Sizeable().Maximize();
	projects.AddColumn("Project name");
	projects.AddColumn("Date(DD.MM.YY)");
	projects.AddColumn("Format");
	projects.Add(1,1,1); //example
	projects.Add(1,1,1);
	find << [=] { Find(); };
	open << [=] { Open(); };
	settings << [=] { Settings(); };
	create << [=] { Create(); };
}
void InitProjects(){
	
}
void Startup::Find()
{
	Close();
	(new FindMenu)->OpenMain();
}

void Startup::Open()
{
	Close();
	(new TDL)->OpenMain();
}

void Startup::Settings()
{
	Close();
	(new SettingsMenu)->OpenMain();
}

void Startup::Create()
{
	Close();
	(new CreateMenuTDL)->OpenMain();
}