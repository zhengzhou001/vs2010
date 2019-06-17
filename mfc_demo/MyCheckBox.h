#pragma once
#include "afxwin.h"


// CMyCheckBox 对话框

class CMyCheckBox : public CDialogEx
{
	DECLARE_DYNAMIC(CMyCheckBox)

public:
	CMyCheckBox(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CMyCheckBox();

// 对话框数据
	enum { IDD = IDD_DIALOG2 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CButton myCkeckBoxControl;

	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton4();
};
