
// mfc_demo.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// Cmfc_demoApp:
// �йش����ʵ�֣������ mfc_demo.cpp
//

class Cmfc_demoApp : public CWinApp
{
public:
	Cmfc_demoApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern Cmfc_demoApp theApp;