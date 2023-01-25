#include "TDL.h"
#include "main.h"

TDL::TDL()
{
	CtrlLayout(*this, "TitanDAW");
	Title("TitanDAW").Zoomable().Sizeable().Maximize();
	AddFrame(menu);
	AddFrame(status);
	status = "Welcome to the club, buddy";
	menu.Set([=](Bar& bar) { CommonMenu(bar);});
}
void TDL::CommonMenu(Bar& bar){
	bar.Sub("Common", [=](Bar& bar) { SubCommonMenu(bar);});
	bar.Sub("Project", [=](Bar& bar) { SubProjectMenu(bar);});
	bar.Sub("Edit", [=](Bar& bar) { SubEditMenu(bar);});
	bar.Sub("View", [=](Bar& bar) { SubViewMenu(bar);});
	bar.Sub("Page", [=](Bar& bar) { SubPageMenu(bar);});
	bar.Sub("Help", [=](Bar& bar) { SubHelpMenu(bar);});
}
void TDL::SubCommonMenu(Bar& bar){
	bar.Add("Create", [=]{});
	bar.Add("Open", [=]{});
	bar.Add("Save", [=]{});
	bar.Add("Save as", [=]{});
	bar.Add("Export", [=]{});
	bar.Add("Global settings", [=]{});
	bar.Add("Statistics", [=]{});
	bar.Add("Quit", [=]{});
}
void TDL::SubProjectMenu(Bar& bar){
	bar.Add("Project setting", [=]{});
	bar.Add("Statistics", [=]{});
	bar.Add("MIDI panic!!!", [=]{});
}
void TDL::SubEditMenu(Bar& bar){
	bar.Add("Undo", [=]{});
	bar.Add("Open", [=]{});
	bar.Add("Delete", [=]{});
	bar.Add("Cut", [=]{});
	bar.Add("Duplicate", [=]{});
	bar.Add("Quantify", [=]{});
}
void TDL::SubViewMenu(Bar& bar){
	bar.Add("Settings", [=]{});
	bar.Add("Builder", [=]{});	
}
void TDL::SubPageMenu(Bar& bar){
	bar.Add("Open", [=]{});
	bar.Add("Step sequencer", [=]{});
	bar.Add("Matrix", [=]{});
	bar.Add("Piano roll", [=]{});
	bar.Add("Sampler", [=]{});
	bar.Add("Pitch correction", [=]{});
	bar.Add("Automatization", [=]{});
}
void TDL::SubHelpMenu(Bar& bar){
	bar.Add("Documentation", [=]{});
	bar.Add("Version", [=]{});
	bar.Add("Website", [=]{});
	bar.Add("Repository", [=]{});
}
/*
Проблема была в другом 
если закомментить все кроме одной menu.Set, тогда
все появляется
В документации сказано
Sets the top-level menu. Use for top-level menu bars only.
Как это работает? Непонятно пока
Но проблема решилась
*/