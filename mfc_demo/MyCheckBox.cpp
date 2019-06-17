// MyCheckBox.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "mfc_demo.h"
#include "MyCheckBox.h"
#include "afxdialogex.h"


// CMyCheckBox �Ի���

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


// CMyCheckBox ��Ϣ�������


void CMyCheckBox::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	//��ȡcheckbox��ֵ
	CString str;
	str.Format(_T("checkBox��״̬��:%d"),myCkeckBoxControl.GetCheck());
	AfxMessageBox(str);
}


void CMyCheckBox::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	//�л�״̬
	if(myCkeckBoxControl.GetCheck()==0)
		myCkeckBoxControl.SetCheck(1);
	else
		myCkeckBoxControl.SetCheck(0);
}


void CMyCheckBox::OnBnClickedButton4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	//�ı�����
	CString str;
	str.Format(_T("�����%d"),rand());
	myCkeckBoxControl.SetWindowTextW(str);
}
