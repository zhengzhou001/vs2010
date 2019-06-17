// MyButton.cpp : 实现文件
//

#include "stdafx.h"
#include "mfc_demo.h"
#include "MyButton.h"
#include "afxdialogex.h"


// CMyButton 对话框

IMPLEMENT_DYNAMIC(CMyButton, CDialogEx)

CMyButton::CMyButton(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMyButton::IDD, pParent)
{

}

CMyButton::~CMyButton()
{
}

void CMyButton::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON2, updateButtonName);
	DDX_Control(pDX, IDC_BUTTON3, updateButtonState);
	DDX_Control(pDX, IDC_BUTTON4, testButton);
}


BEGIN_MESSAGE_MAP(CMyButton, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CMyButton::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMyButton::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CMyButton::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON5, &CMyButton::OnBnClickedButton5)
	 
END_MESSAGE_MAP()


// CMyButton 消息处理程序


void CMyButton::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	//点击事件
	AfxMessageBox(TEXT("执行了点击事件"));
}


void CMyButton::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	//修改按钮文字
	CString str;
	str.Format(_T("随机数%d"),rand());
	testButton.SetWindowTextW(str);
}


void CMyButton::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	//设置按钮是否可用
	if(testButton.IsWindowEnabled()==0){
		testButton.EnableWindow(1);
	}else{
		testButton.EnableWindow(0);
	}
	 
	
}


void CMyButton::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	//testButton.GetButtonStyle();
	//设置按钮风格
	testButton.SetButtonStyle(BS_RADIOBUTTON);
}


void CMyButton::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	//设置图标
	 HICON hIcon;
	hIcon = (HICON)LoadImage(AfxGetInstanceHandle(),MAKEINTRESOURCE(IDB_PNG1),IMAGE_ICON,0,0,LR_DEFAULTCOLOR|LR_CREATEDIBSECTION);

	HBITMAP hBmp=::LoadBitmap(AfxGetInstanceHandle(),  MAKEINTRESOURCE(IDB_PNG1));   
  
	testButton.SetBitmap(hBmp);
}
