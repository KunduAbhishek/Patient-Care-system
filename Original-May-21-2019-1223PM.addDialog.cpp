// addDialog.cpp : implementation file
//

#include "pch.h"
#include "MFCApplication1.h"
#include "addDialog.h"
#include "afxdialogex.h"
#include <string>
#include "bucketHash.h"


// addDialog dialog

IMPLEMENT_DYNAMIC(addDialog, CDialogEx)

addDialog::addDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(add, pParent)
{

}

addDialog::~addDialog()
{
}

void addDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(addDialog, CDialogEx)
	ON_BN_CLICKED(insert_b, &addDialog::OnBnClickedb)
END_MESSAGE_MAP()


// addDialog message handlers


void addDialog::OnBnClickedb()
{
	// TODO: Add your control notification handler code here
	UpdateData(1);
	std::string values[6];
	CString c;
	GetDlgItem(id)->GetWindowTextW(c);
	values[0] = CW2A(c.GetString());
	GetDlgItem(name)->GetWindowTextW(c);
	values[1] = CW2A(c.GetString());
	GetDlgItem(age)->GetWindowTextW(c);
	values[2] = CW2A(c.GetString());
	GetDlgItem(gender)->GetWindowTextW(c);
	values[3] = CW2A(c.GetString());
	GetDlgItem(doc)->GetWindowTextW(c);
	values[4] = CW2A(c.GetString());
	GetDlgItem(phno)->GetWindowTextW(c);
	values[5] = CW2A(c.GetString());
	int result=insert(values);
	if (result)
		MessageBeep(1);


}
