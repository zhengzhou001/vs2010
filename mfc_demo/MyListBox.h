#pragma once
#include "afxwin.h"


// CMyListBox �Ի���

class CMyListBox : public CDialogEx
{
	DECLARE_DYNAMIC(CMyListBox)

public:
	CMyListBox(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CMyListBox();

// �Ի�������
	enum { IDD = IDD_DIALOG5 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
private:
	CListBox listBoxControl;
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
};
