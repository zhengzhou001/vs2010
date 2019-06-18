// MyComboBox.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "mfc_demo.h"
#include "MyComboBox.h"
#include "afxdialogex.h"


// CMyComboBox �Ի���

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


// CMyComboBox ��Ϣ�������


void CMyComboBox::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	comboBoxControl.AddString(_T("StringData1"));
	comboBoxControl.AddString(_T("StringData2"));
	comboBoxControl.AddString(_T("StringData3"));
	comboBoxControl.InsertString( 0,_T("StringData0") );
	comboBoxControl.InsertString( 0,_T("StringDataB") );
}


void CMyComboBox::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int nIndex = comboBoxControl.GetCurSel();
	if(nIndex<0)

	AfxMessageBox(_T("��ѡ������"));
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
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	if(comboBoxControl.GetCount()==0)
		AfxMessageBox(_T("�����������"));
	else 
		comboBoxControl.SetCurSel(0);
}


void CMyComboBox::OnBnClickedButton4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	 	AfxMessageBox(_T("�޸�������ߵ�type,dropList�ǲ�����༭"));
}
