#pragma once
#include "afxwin.h"


// CMyCheckBox �Ի���

class CMyCheckBox : public CDialogEx
{
	DECLARE_DYNAMIC(CMyCheckBox)

public:
	CMyCheckBox(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CMyCheckBox();

// �Ի�������
	enum { IDD = IDD_DIALOG2 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CButton myCkeckBoxControl;

	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton4();
};
