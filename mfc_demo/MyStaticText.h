#pragma once


// CMyStaticText �Ի���

class CMyStaticText : public CDialogEx
{
	DECLARE_DYNAMIC(CMyStaticText)

public:
	CMyStaticText(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CMyStaticText();

// �Ի�������
	enum { IDD = IDD_DIALOG7 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};
