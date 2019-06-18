#pragma once


// CMyStaticText 对话框

class CMyStaticText : public CDialogEx
{
	DECLARE_DYNAMIC(CMyStaticText)

public:
	CMyStaticText(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CMyStaticText();

// 对话框数据
	enum { IDD = IDD_DIALOG7 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};
