#ifndef _TDL_main_h_
#define _TDL_main_h_

class TDL : public WithTDLLayout<TopWindow> {
	void Close() override{
	delete this;
}
public:
	TDL();
};
#endif
