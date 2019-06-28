
// ROPVUZ99View.cpp : CROPVUZ99View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ROPVUZ99.h"
#endif

#include "ROPVUZ99Doc.h"
#include "ROPVUZ99View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CROPVUZ99View

IMPLEMENT_DYNCREATE(CROPVUZ99View, CView)

BEGIN_MESSAGE_MAP(CROPVUZ99View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CROPVUZ99View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CROPVUZ99View ����/����

CROPVUZ99View::CROPVUZ99View()
{
	// TODO: �ڴ˴���ӹ������

}

CROPVUZ99View::~CROPVUZ99View()
{
}

BOOL CROPVUZ99View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CROPVUZ99View ����

void CROPVUZ99View::OnDraw(CDC* /*pDC*/)
{
	CROPVUZ99Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CROPVUZ99View ��ӡ


void CROPVUZ99View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CROPVUZ99View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CROPVUZ99View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CROPVUZ99View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}

void CROPVUZ99View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CROPVUZ99View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CROPVUZ99View ���

#ifdef _DEBUG
void CROPVUZ99View::AssertValid() const
{
	CView::AssertValid();
}

void CROPVUZ99View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CROPVUZ99Doc* CROPVUZ99View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CROPVUZ99Doc)));
	return (CROPVUZ99Doc*)m_pDocument;
}
#endif //_DEBUG


// CROPVUZ99View ��Ϣ�������
