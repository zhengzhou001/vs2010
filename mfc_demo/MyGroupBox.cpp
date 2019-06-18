// MyGroupBox.cpp : 实现文件
//

#include "stdafx.h"
#include "mfc_demo.h"
#include "MyGroupBox.h"
#include "afxdialogex.h"


// CMyGroupBox 对话框

IMPLEMENT_DYNAMIC(CMyGroupBox, CDialogEx)

CMyGroupBox::CMyGroupBox(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMyGroupBox::IDD, pParent)
{

}

CMyGroupBox::~CMyGroupBox()
{
}

void CMyGroupBox::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMyGroupBox, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CMyGroupBox::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMyGroupBox::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_RADIO1, &CMyGroupBox::OnBnClickedRadio1)
	ON_BN_CLICKED(IDC_RADIO2, &CMyGroupBox::OnBnClickedRadio2)
END_MESSAGE_MAP()


// CMyGroupBox 消息处理程序


void CMyGroupBox::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	CButton* radio = (CButton*)GetDlgItem(IDC_RADIO1);
	radio->SetCheck(1);
}


void CMyGroupBox::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	//通过ID获取控件，这样省的定义变量
	CButton* radio = (CButton*)GetDlgItem(IDC_RADIO1);
	if(radio->GetCheck()==0)
	{
		radio->SetCheck(1);
		radio = (CButton*)GetDlgItem(IDC_RADIO2);
		radio->SetCheck(0);
	}
		
	else{
		radio->SetCheck(0);
		radio = (CButton*)GetDlgItem(IDC_RADIO2);
		radio->SetCheck(1);
	}
		
}


void CMyGroupBox::OnBnClickedRadio1()
{
	// TODO: 在此添加控件通知处理程序代码
	AfxMessageBox(_T("男"));
}


void CMyGroupBox::OnBnClickedRadio2()
{
	// TODO: 在此添加控件通知处理程序代码
	AfxMessageBox(_T("女"));
}
