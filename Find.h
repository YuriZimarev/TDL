#ifndef _TDL_Find_h_
#define _TDL_Find_h_
class FindMenu : public WithFindMenu<TopWindow> {
	void Find();
	void Cancel();
	void Close() override{
	delete this;
}
public:
	FindMenu();
};

#endif
