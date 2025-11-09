// StateListDlg.h : Header-Datei
//

#if !defined(AFX_STATELISTDLG_H__4AA44944_D2E6_11D6_8CB5_EB5BC2DC872F__INCLUDED_)
#define AFX_STATELISTDLG_H__4AA44944_D2E6_11D6_8CB5_EB5BC2DC872F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "StateListCtrl.h"

/////////////////////////////////////////////////////////////////////////////
// CStateListDlg Dialogfeld

class CStateListDlg : public CDialog
{
// Konstruktion
public:
	CStateListDlg(CWnd* pParent = NULL);	// Standard-Konstruktor

// Dialogfelddaten
	//{{AFX_DATA(CStateListDlg)
	enum { IDD = IDD_STATELIST_DIALOG };
	CStateListCtrl	m_list;
	//}}AFX_DATA

	// Vom Klassenassistenten generierte Überladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CStateListDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV-Unterstützung
	//}}AFX_VIRTUAL

// Implementierung
protected:
	HICON m_hIcon;

	// Generierte Message-Map-Funktionen
	//{{AFX_MSG(CStateListDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnRclickList(NMHDR* pNMHDR, LRESULT* pResult);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ fügt unmittelbar vor der vorhergehenden Zeile zusätzliche Deklarationen ein.

#endif // !defined(AFX_STATELISTDLG_H__4AA44944_D2E6_11D6_8CB5_EB5BC2DC872F__INCLUDED_)
