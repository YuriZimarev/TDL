#include "TDL.h"
#include "main.h"

void TDL::SubCommonMenu(Bar& bar){
	bar.Add("Open", [=]{Exit();});
	PromptOKCancel("dfs");
}
void TDL::CommonMenu(Bar& bar){
	
	bar.Sub("Menu", [=](Bar& bar) { SubCommonMenu(bar);});
	bar.Add("Open", [=]{Exit();});
}
void TDL::ProjectMenu(Bar& bar){
	
}
void TDL::EditMenu(Bar& bar){
	
}
void TDL::ViewMenu(Bar& bar){
	
}
void TDL::PageMenu(Bar& bar){
	
}
void TDL::HelpMenu(Bar& bar){
	
}
TDL::TDL()
{
	CtrlLayout(*this, "TitanDAW");
	Title("TitanDAW").Zoomable().Sizeable().Maximize();
	AddFrame(menu);
	AddFrame(status);
	status = "Welcome to the TDL";
	menu.Set([=](Bar& bar) { CommonMenu(bar);});
	menu.Set([=](Bar& bar) { ProjectMenu(bar); });
	menu.Set([=](Bar& bar) { EditMenu(bar); });
	menu.Set([=](Bar& bar) { ViewMenu(bar); });
	menu.Set([=](Bar& bar) { PageMenu(bar); });
	menu.Set([=](Bar& bar) { HelpMenu(bar); });
	
}
/*
Через Sub добавление меню не работает
Попробую другим путем через bar.Add
но THISBACK и typedef * CLASSNAME
может что-нибудь поломать потом
*/