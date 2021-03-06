#pragma once

#include <QMainWindow>
#include "ui_mainwindow.h"

class CPkgFileSystemModel;

class CMainWindow : public QMainWindow
{
	Q_OBJECT

public:
	CMainWindow( QWidget* pParent = Q_NULLPTR );
	~CMainWindow();

	inline QStatusBar* GetStatusBar() { return ui.statusBar; }

private slots:
	void OnFileOpen();
	void OnExit();
	void OnDecryptToggle( bool bChecked );
	void OnRenameToggle( bool bChecked );
	void OnDecompressVtfToggle( bool bChecked );
	void OnReplaceShadowblock( bool bChecked );
	void OnDecompressBspToggle( bool bChecked );
	void OnConvertBspLumps( bool bChecked );
	void OnUnpackClick();
	void OnAbout();

private:
	Ui::MainWindow ui;
	CPkgFileSystemModel* m_pPkgItemModel;
};
