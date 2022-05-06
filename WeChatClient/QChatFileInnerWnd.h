#pragma once

//���ñ����ʽΪutf-8
#pragma execution_character_set("utf-8")

#include <QWidget>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QProgressBar>

class QChatFileInnerWnd : public QWidget
{
	Q_OBJECT
public:

	QChatFileInnerWnd(QWidget* p = nullptr);
public slots:
	void slot_openFileBtnClick();
	void slot_copyFileBtnClick();
	void slot_openFileDirBtnClick();
	void slot_downloadFileBtnClick();
public:
	void sendFileShow();
	void recvFileShow();
public:
	QVBoxLayout* m_vLayout;

	QHBoxLayout* m_hLayout1;
	QVBoxLayout* m_vLayout1;
	
	QProgressBar* m_progressBar;;

	QHBoxLayout* m_hLayout2;

	QLabel* m_fileIcon;
	QLabel* m_fileName;
	QLabel* m_fileSize;

	QLabel* m_sendState;//����״̬  
	QPushButton* m_openFile;//���ļ�
	QPushButton* m_copyFile;//����
	QPushButton* m_openFileDir;//������Ŀ¼
	QPushButton* m_downLoad;

	QString m_fileFullpath = "";
	QString m_fileFullDir = "";
	QString m_serveFilePath = "";//Զ�̵��ļ���ַ
};