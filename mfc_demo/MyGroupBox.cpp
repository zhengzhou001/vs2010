// MyGroupBox.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "mfc_demo.h"
#include "MyGroupBox.h"
#include "afxdialogex.h"


// CMyGroupBox �Ի���

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


// CMyGroupBox ��Ϣ�������


void CMyGroupBox::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CButton* radio = (CButton*)GetDlgItem(IDC_RADIO1);
	radio->SetCheck(1);
}


void CMyGroupBox::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	//ͨ��ID��ȡ�ؼ�������ʡ�Ķ������
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
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	AfxMessageBox(_T("��"));
}


void CMyGroupBox::OnBnClickedRadio2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	AfxMessageBox(_T("Ů"));
}
