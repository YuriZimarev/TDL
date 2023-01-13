#ifndef _TDL_Startup_h_
#define _TDL_Startup_h_
class Startup : public WithStartupLayout<TopWindow> {
	void InitProjects();
	void Find();
	void Open();
	void Settings();
	void Create();
	void Close() override{
	delete this;
}
public:
	Startup();
};



#endif
