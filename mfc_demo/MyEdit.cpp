// MyEdit.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "mfc_demo.h"
#include "MyEdit.h"
#include "afxdialogex.h"


// CMyEdit �Ի���

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


// CMyEdit ��Ϣ�������


void CMyEdit::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	//��ȡ����
	CString str;
	myEditControl.GetWindowTextW(str);
	AfxMessageBox(str);
}


void CMyEdit::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	//���ó���
	myEditControl.SetLimitText(5);
}


void CMyEdit::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	//��������
	myEditControl.SetWindowTextW(_T("���������������"));
}


void CMyEdit::OnBnClickedButton4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	//״̬�л�
	if(myEditControl.IsWindowEnabled()==0)
		myEditControl.EnableWindow(1);
	else
		myEditControl.EnableWindow(0);
}
