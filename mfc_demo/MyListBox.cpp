// MyListBox.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "mfc_demo.h"
#include "MyListBox.h"
#include "afxdialogex.h"


// CMyListBox �Ի���

IMPLEMENT_DYNAMIC(CMyListBox, CDialogEx)

CMyListBox::CMyListBox(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMyListBox::IDD, pParent)
{

}

CMyListBox::~CMyListBox()
{
}

void CMyListBox::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, listBoxControl);
}


BEGIN_MESSAGE_MAP(CMyListBox, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CMyListBox::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMyListBox::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CMyListBox::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CMyListBox::OnBnClickedButton4)
END_MESSAGE_MAP()


// CMyListBox ��Ϣ�������


void CMyListBox::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������

	for(int i = 0;i<10;i++)
{ 
 CString string; 
 string.Format(_T("00-00%d-000%d"),i,i,i);
 listBoxControl.AddString(string);
}
}


void CMyListBox::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int nSel = listBoxControl.GetCurSel();
	CString string;
	listBoxControl.GetText(nSel,string);

	AfxMessageBox(string);

}


void CMyListBox::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	listBoxControl.InsertString(0,_T("00-001-00011"));
}


void CMyListBox::OnBnClickedButton4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	 
	int nFind = listBoxControl.FindString(0,_T("00-001-00011"));
	if(nFind<0)
		AfxMessageBox(_T("û���ҵ�"));
	else
	{
		listBoxControl.SetCurSel(nFind);
		CString string;
		string.Format(L"%d",nFind);
		AfxMessageBox(string);
	}
		
}
