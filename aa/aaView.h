
// aaView.h : interface of the CaaView class
//

#pragma once


class CaaView : public CView
{
protected: // create from serialization only
	CaaView();
	DECLARE_DYNCREATE(CaaView)

// Attributes
public:
	CaaDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CaaView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in aaView.cpp
inline CaaDoc* CaaView::GetDocument() const
   { return reinterpret_cast<CaaDoc*>(m_pDocument); }
#endif

