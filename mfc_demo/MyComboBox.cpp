// MyComboBox.cpp : 实现文件
//

#include "stdafx.h"
#include "mfc_demo.h"
#include "MyComboBox.h"
#include "afxdialogex.h"


// CMyComboBox 对话框

IMPLEMENT_DYNAMIC(CMyComboBox, CDialogEx)

CMyComboBox::CMyComboBox(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMyComboBox::IDD, pParent)
{

}

CMyComboBox::~CMyComboBox()
{
}

void CMyComboBox::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBO1, comboBoxControl);
}


BEGIN_MESSAGE_MAP(CMyComboBox, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CMyComboBox::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMyComboBox::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CMyComboBox::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CMyComboBox::OnBnClickedButton4)
END_MESSAGE_MAP()


// CMyComboBox 消息处理程序


void CMyComboBox::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	comboBoxControl.AddString(_T("StringData1"));
	comboBoxControl.AddString(_T("StringData2"));
	comboBoxControl.AddString(_T("StringData3"));
	comboBoxControl.InsertString( 0,_T("StringData0") );
	comboBoxControl.InsertString( 0,_T("StringDataB") );
}


void CMyComboBox::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	int nIndex = comboBoxControl.GetCurSel();
	if(nIndex<0)

	AfxMessageBox(_T("请选择数据"));
	else
	{
	CString str;

	comboBoxControl.GetLBText( nIndex, str);
	 CString str2;
	 str2.Format(_T("index:%d,value:")+str,nIndex);
	AfxMessageBox(str2);
	}
}


void CMyComboBox::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	if(comboBoxControl.GetCount()==0)
		AfxMessageBox(_T("请先添加数据"));
	else 
		comboBoxControl.SetCurSel(0);
}


void CMyComboBox::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	 	AfxMessageBox(_T("修改属性里边的type,dropList是不允许编辑"));
}
