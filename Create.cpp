#include "TDL.h"
#include "Create.h"
#include "main.h"
#include "Startup.h"

CreateMenuTDL::CreateMenuTDL()
{
	CtrlLayoutCancel(*this, "");
	Title("Create menu").Zoomable().Sizeable().Maximize();
	templates.AddColumn("Template name");
	templates.AddColumn("Date(DD.MM.YY)");
	templates.Add(1,1); //example
	templates.Add(1,1);
	create << [=] { Create(); };
	cancel << [=] {Cancel();};
}

void CreateMenuTDL::Create()
{
	Close();
	(new TDL)->OpenMain();
}

void CreateMenuTDL::Cancel()
{
	Close();
	(new Startup)->OpenMain();
}