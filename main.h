#ifndef _TDL_main_h_
#define _TDL_main_h_

class TDL : public WithTDLLayout<TopWindow> {
	MenuBar menu;
	StatusBar status;
	void Close() override{
	delete this;
}
public:
	void CommonMenu(Bar& bar);
	void ProjectMenu(Bar& bar);
	void EditMenu(Bar& bar);
	void ViewMenu(Bar& bar);
	void PageMenu(Bar& bar);
	void HelpMenu(Bar& bar);
	void SubCommonMenu(Bar& bar);
	TDL();
};
#endif
/*

*/