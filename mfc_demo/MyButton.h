#pragma once
#include "afxwin.h"


// CMyButton �Ի���

class CMyButton : public CDialogEx
{
	DECLARE_DYNAMIC(CMyButton)

public:
	CMyButton(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CMyButton();

// �Ի�������
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

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
