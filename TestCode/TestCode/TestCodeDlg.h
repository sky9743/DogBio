
// TestCodeDlg.h : 헤더 파일
//

#pragma once
#include "afxwin.h"

#include "my_system.h"

#include "Util.h"


// CTestCodeDlg 대화 상자
class CTestCodeDlg : public CDialogEx
{
// 생성입니다.
public:
	CTestCodeDlg(CWnd* pParent = NULL);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TESTCODE_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
    // Run testing code
    CButton m_btnRunTestCode;
    afx_msg void OnBnClickedButtonTest();

    /*
     * @brief check whether pasword file is eixst.
     * @param N/A
     * @retrn If exist return eMOD_ERROR_SUCCESS, else return eMOD_ERROR_FAIL
     * @Note 
    **/
    eModError TestFunction01();
    CEdit m_editPassword;

    Util* m_instUtil;
    afx_msg void OnDestroy();

private:
    bool m_bAlreadySetPasswd;
};
