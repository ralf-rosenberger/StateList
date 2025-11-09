#if !defined(AFX_STATELISTCTRL_H__4AA4494C_D2E6_11D6_8CB5_EB5BC2DC872F__INCLUDED_)
#define AFX_STATELISTCTRL_H__4AA4494C_D2E6_11D6_8CB5_EB5BC2DC872F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// StateListCtrl.h : Header-Datei
//

#define LVIS_CHECKED	0x2000
#define LVIS_UNCHECKED	0x1000
#define LVIS_NOCHECK	0x3000

/////////////////////////////////////////////////////////////////////////////
// Fenster CStateListCtrl 

class CStateListCtrl : public CListCtrl
{
// Konstruktion
public:
	CStateListCtrl();

// Attribute
public:

// Operationen
public:

// Überschreibungen
	// Vom Klassen-Assistenten generierte virtuelle Funktionsüberschreibungen
	//{{AFX_VIRTUAL(CStateListCtrl)
	//}}AFX_VIRTUAL

// Implementierung
public:
	bool IsChecked(int index = 0);
	bool SetCheck(int index = 0,bool bCheck = true);
	virtual ~CStateListCtrl();

	// Generierte Nachrichtenzuordnungsfunktionen
protected:
	//{{AFX_MSG(CStateListCtrl)
	afx_msg void OnPaint();
	afx_msg void OnClick(NMHDR* pNMHDR, LRESULT* pResult);
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
private:
	CImageList m_imageListState;
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ fügt unmittelbar vor der vorhergehenden Zeile zusätzliche Deklarationen ein.

#endif // AFX_STATELISTCTRL_H__4AA4494C_D2E6_11D6_8CB5_EB5BC2DC872F__INCLUDED_
