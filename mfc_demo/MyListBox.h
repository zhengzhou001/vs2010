#pragma once
#include "afxwin.h"


// CMyListBox 对话框

class CMyListBox : public CDialogEx
{
	DECLARE_DYNAMIC(CMyListBox)

public:
	CMyListBox(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CMyListBox();

// 对话框数据
	enum { IDD = IDD_DIALOG5 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
private:
	CListBox listBoxControl;
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
};
