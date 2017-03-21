#pragma once  //______________________________________ ejemplo2_0.h  
#include "Resource.h"
class ejemplo2_0 : public Win::Dialog
{
public:
	ejemplo2_0()
	{
	}
	~ejemplo2_0()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Toolbar toolb1;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::CentimetersToDlgUnitX(11.43000);
		dlgTemplate.cy = Sys::Convert::CentimetersToDlgUnitY(5.74146);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"ejemplo2_0";
		toolb1.CreateX(NULL, NULL, WS_CHILD | WS_VISIBLE | CCS_NORESIZE | CCS_NOPARENTALIGN | CCS_ADJUSTABLE | CCS_NODIVIDER | TBSTYLE_FLAT | TBSTYLE_TOOLTIPS, 2.51354, 2.40771, 8.73125, 3.14854, hWnd, 1000);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
	}
	//_________________________________________________
	void Window_Close(Win::Event& e);
	void Window_Help(Win::Event& e);
	void Window_Open(Win::Event& e);
	void Cmd_Copy(Win::Event& e);
	void Cmd_Save(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (this->IsEvent(e, IDM_COPY)) { Cmd_Copy(e); return true; }
		if (this->IsEvent(e, IDM_SAVE)) { Cmd_Save(e); return true; }
		return false;
	}
};
