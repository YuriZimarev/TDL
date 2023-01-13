#ifndef _TDL_Create_h_
#define _TDL_Create_h_
class CreateMenuTDL : public WithCreateMenu<TopWindow> {
	void Create();
	void Cancel();
	void Close() override{
	delete this;
}
public:
	CreateMenuTDL();
};
#endif
