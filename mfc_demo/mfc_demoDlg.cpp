
// mfc_demoDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "mfc_demo.h"
#include "mfc_demoDlg.h"
#include "afxdialogex.h"
#include "MyButton.h"   //按钮学习对话框
#include "MyCheckBox.h"
#include "MyEdit.h"
#include "MyComboBox.h"
#include "MyListBox.h"
#include "MyGroupBox.h"
#include "MyStaticText.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// Cmfc_demoDlg 对话框




Cmfc_demoDlg::Cmfc_demoDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(Cmfc_demoDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void Cmfc_demoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(Cmfc_demoDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &Cmfc_demoDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &Cmfc_demoDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &Cmfc_demoDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &Cmfc_demoDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &Cmfc_demoDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &Cmfc_demoDlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &Cmfc_demoDlg::OnBnClickedButton7)
END_MESSAGE_MAP()


// Cmfc_demoDlg 消息处理程序

BOOL Cmfc_demoDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void Cmfc_demoDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void Cmfc_demoDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR Cmfc_demoDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void Cmfc_demoDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	CMyButton mybutton;  //定义新窗口dialog变量
	mybutton.DoModal(); //打开模态窗口
}


void Cmfc_demoDlg::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	CMyCheckBox myCheckBox;
	myCheckBox.DoModal();
}


void Cmfc_demoDlg::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	CMyEdit myEdit;
	myEdit.DoModal();
}


void Cmfc_demoDlg::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	CMyComboBox myComboBox;
	myComboBox.DoModal();
}


void Cmfc_demoDlg::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	CMyListBox myListBox;
	myListBox.DoModal();
}


void Cmfc_demoDlg::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	CMyGroupBox myGroupBox;
	myGroupBox.DoModal();

}


void Cmfc_demoDlg::OnBnClickedButton7()
{
	// TODO: 在此添加控件通知处理程序代码
	CMyStaticText myStaticText ;
	myStaticText.DoModal();
}
