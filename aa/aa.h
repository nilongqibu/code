
// aa.h : main header file for the aa application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CaaApp:
// See aa.cpp for the implementation of this class
//

class CaaApp : public CWinAppEx
{
public:
	CaaApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CaaApp theApp;
