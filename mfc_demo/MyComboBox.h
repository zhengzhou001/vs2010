#pragma once
#include "afxwin.h"


// CMyComboBox 对话框

class CMyComboBox : public CDialogEx
{
	DECLARE_DYNAMIC(CMyComboBox)

public:
	CMyComboBox(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CMyComboBox();

// 对话框数据
	enum { IDD = IDD_DIALOG4 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
private:
	CComboBox comboBoxControl;
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
};
