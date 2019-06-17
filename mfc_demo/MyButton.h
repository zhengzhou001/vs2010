#pragma once
#include "afxwin.h"


// CMyButton 对话框

class CMyButton : public CDialogEx
{
	DECLARE_DYNAMIC(CMyButton)

public:
	CMyButton(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CMyButton();

// 对话框数据
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CButton updateButtonName;
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	CButton updateButtonState;
	CButton testButton;
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
};
