#ifndef _TDL_main_h_
#define _TDL_main_h_

class TDL : public WithTDLLayout<TopWindow> {
	MenuBar menu;
	StatusBar status;
	void Close() override{
	delete this;
}
public:
	TDL();
	void CommonMenu(Bar& bar);
	void SubCommonMenu(Bar& bar);
	void SubProjectMenu(Bar& bar);
	void SubEditMenu(Bar& bar);
	void SubViewMenu(Bar& bar);
	void SubPageMenu(Bar& bar);
	void SubHelpMenu(Bar& bar);
};
#endif
/*

*/