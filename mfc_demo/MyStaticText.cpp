// MyStaticText.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "mfc_demo.h"
#include "MyStaticText.h"
#include "afxdialogex.h"


// CMyStaticText �Ի���

IMPLEMENT_DYNAMIC(CMyStaticText, CDialogEx)

CMyStaticText::CMyStaticText(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMyStaticText::IDD, pParent)
{

}

CMyStaticText::~CMyStaticText()
{
}

void CMyStaticText::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMyStaticText, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CMyStaticText::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMyStaticText::OnBnClickedButton2)
END_MESSAGE_MAP()


// CMyStaticText ��Ϣ�������


void CMyStaticText::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CStatic * text = (CStatic*)GetDlgItem(IDC_STATIC);
	text->SetWindowTextW(_T("HHH"));
}


void CMyStaticText::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CStatic * text = (CStatic*)GetDlgItem(IDC_STATIC);
 CString str;
	text->GetWindowTextW(str);
	AfxMessageBox(str);

}
