// MyStaticText.cpp : 实现文件
//

#include "stdafx.h"
#include "mfc_demo.h"
#include "MyStaticText.h"
#include "afxdialogex.h"


// CMyStaticText 对话框

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


// CMyStaticText 消息处理程序


void CMyStaticText::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	CStatic * text = (CStatic*)GetDlgItem(IDC_STATIC);
	text->SetWindowTextW(_T("HHH"));
}


void CMyStaticText::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	CStatic * text = (CStatic*)GetDlgItem(IDC_STATIC);
 CString str;
	text->GetWindowTextW(str);
	AfxMessageBox(str);

}
