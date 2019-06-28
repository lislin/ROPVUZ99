
// ROPVUZ99View.h : CROPVUZ99View ��Ľӿ�
//

#pragma once


class CROPVUZ99View : public CView
{
protected: // �������л�����
	CROPVUZ99View();
	DECLARE_DYNCREATE(CROPVUZ99View)

// ����
public:
	CROPVUZ99Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CROPVUZ99View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // ROPVUZ99View.cpp �еĵ��԰汾
inline CROPVUZ99Doc* CROPVUZ99View::GetDocument() const
   { return reinterpret_cast<CROPVUZ99Doc*>(m_pDocument); }
#endif

