#ifndef _TDL_Settings_h_
#define _TDL_Settings_h_
class SettingsMenu : public WithSettingsMenu<TopWindow> {
	void Apply();
	void Cancel();
	void Close() override{
	delete this;
}
public:
	SettingsMenu();
};


#endif
