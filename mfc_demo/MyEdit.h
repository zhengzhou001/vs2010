#pragma once
#include "afxwin.h"


// CMyEdit 对话框

class CMyEdit : public CDialogEx
{
	DECLARE_DYNAMIC(CMyEdit)

public:
	CMyEdit(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CMyEdit();

// 对话框数据
	enum { IDD = IDD_DIALOG3 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CEdit myEditControl;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
};
