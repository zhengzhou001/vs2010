#pragma once
#include "afxwin.h"


// CMyEdit �Ի���

class CMyEdit : public CDialogEx
{
	DECLARE_DYNAMIC(CMyEdit)

public:
	CMyEdit(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CMyEdit();

// �Ի�������
	enum { IDD = IDD_DIALOG3 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CEdit myEditControl;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
};
