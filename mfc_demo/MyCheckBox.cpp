// MyCheckBox.cpp : 实现文件
//

#include "stdafx.h"
#include "mfc_demo.h"
#include "MyCheckBox.h"
#include "afxdialogex.h"


// CMyCheckBox 对话框

IMPLEMENT_DYNAMIC(CMyCheckBox, CDialogEx)

CMyCheckBox::CMyCheckBox(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMyCheckBox::IDD, pParent)
{

}

CMyCheckBox::~CMyCheckBox()
{
}

void CMyCheckBox::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_CHECK1, myCkeckBoxControl);
}


BEGIN_MESSAGE_MAP(CMyCheckBox, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CMyCheckBox::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMyCheckBox::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON4, &CMyCheckBox::OnBnClickedButton4)
END_MESSAGE_MAP()


// CMyCheckBox 消息处理程序


void CMyCheckBox::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	//获取checkbox的值
	CString str;
	str.Format(_T("checkBox的状态是:%d"),myCkeckBoxControl.GetCheck());
	AfxMessageBox(str);
}


void CMyCheckBox::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	//切换状态
	if(myCkeckBoxControl.GetCheck()==0)
		myCkeckBoxControl.SetCheck(1);
	else
		myCkeckBoxControl.SetCheck(0);
}


void CMyCheckBox::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	//改变文字
	CString str;
	str.Format(_T("随机数%d"),rand());
	myCkeckBoxControl.SetWindowTextW(str);
}
