// MyEdit.cpp : 实现文件
//

#include "stdafx.h"
#include "mfc_demo.h"
#include "MyEdit.h"
#include "afxdialogex.h"


// CMyEdit 对话框

IMPLEMENT_DYNAMIC(CMyEdit, CDialogEx)

CMyEdit::CMyEdit(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMyEdit::IDD, pParent)
{

}

CMyEdit::~CMyEdit()
{
}

void CMyEdit::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, myEditControl);
}


BEGIN_MESSAGE_MAP(CMyEdit, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CMyEdit::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMyEdit::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CMyEdit::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CMyEdit::OnBnClickedButton4)
END_MESSAGE_MAP()


// CMyEdit 消息处理程序


void CMyEdit::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	//获取内容
	CString str;
	myEditControl.GetWindowTextW(str);
	AfxMessageBox(str);
}


void CMyEdit::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	//设置长度
	myEditControl.SetLimitText(5);
}


void CMyEdit::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	//设置内容
	myEditControl.SetWindowTextW(_T("你好你您你你你您"));
}


void CMyEdit::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	//状态切换
	if(myEditControl.IsWindowEnabled()==0)
		myEditControl.EnableWindow(1);
	else
		myEditControl.EnableWindow(0);
}
