
// ROPVUZ99View.cpp : CROPVUZ99View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CROPVUZ99View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CROPVUZ99View 构造/析构

CROPVUZ99View::CROPVUZ99View()
{
	// TODO: 在此处添加构造代码

}

CROPVUZ99View::~CROPVUZ99View()
{
}

BOOL CROPVUZ99View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CROPVUZ99View 绘制

void CROPVUZ99View::OnDraw(CDC* /*pDC*/)
{
	CROPVUZ99Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CROPVUZ99View 打印


void CROPVUZ99View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CROPVUZ99View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CROPVUZ99View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CROPVUZ99View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
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


// CROPVUZ99View 诊断

#ifdef _DEBUG
void CROPVUZ99View::AssertValid() const
{
	CView::AssertValid();
}

void CROPVUZ99View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CROPVUZ99Doc* CROPVUZ99View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CROPVUZ99Doc)));
	return (CROPVUZ99Doc*)m_pDocument;
}
#endif //_DEBUG


// CROPVUZ99View 消息处理程序
