#pragma once


// CMyGroupBox �Ի���

class CMyGroupBox : public CDialogEx
{
	DECLARE_DYNAMIC(CMyGroupBox)

public:
	CMyGroupBox(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CMyGroupBox();

// �Ի�������
	enum { IDD = IDD_DIALOG6 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedRadio1();
	afx_msg void OnBnClickedRadio2();
};
