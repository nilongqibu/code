
// aaView.cpp : implementation of the CaaView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "aa.h"
#endif

#include "aaDoc.h"
#include "aaView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CaaView

IMPLEMENT_DYNCREATE(CaaView, CView)

BEGIN_MESSAGE_MAP(CaaView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CaaView construction/destruction

CaaView::CaaView()
{
	// TODO: add construction code here

}

CaaView::~CaaView()
{
}

BOOL CaaView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CaaView drawing

void CaaView::OnDraw(CDC* /*pDC*/)
{
	CaaDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CaaView printing

BOOL CaaView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CaaView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CaaView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CaaView diagnostics

#ifdef _DEBUG
void CaaView::AssertValid() const
{
	CView::AssertValid();
}

void CaaView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CaaDoc* CaaView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CaaDoc)));
	return (CaaDoc*)m_pDocument;
}
#endif //_DEBUG


// CaaView message handlers
