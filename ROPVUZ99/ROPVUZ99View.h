
// ROPVUZ99View.h : CROPVUZ99View 类的接口
//

#pragma once


class CROPVUZ99View : public CView
{
protected: // 仅从序列化创建
	CROPVUZ99View();
	DECLARE_DYNCREATE(CROPVUZ99View)

// 特性
public:
	CROPVUZ99Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CROPVUZ99View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // ROPVUZ99View.cpp 中的调试版本
inline CROPVUZ99Doc* CROPVUZ99View::GetDocument() const
   { return reinterpret_cast<CROPVUZ99Doc*>(m_pDocument); }
#endif

