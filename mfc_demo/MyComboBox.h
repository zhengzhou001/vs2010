#pragma once
#include "afxwin.h"


// CMyComboBox �Ի���

class CMyComboBox : public CDialogEx
{
	DECLARE_DYNAMIC(CMyComboBox)

public:
	CMyComboBox(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CMyComboBox();

// �Ի�������
	enum { IDD = IDD_DIALOG4 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
private:
	CComboBox comboBoxControl;
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
};
