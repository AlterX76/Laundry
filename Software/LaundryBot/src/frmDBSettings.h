/***************************************************************************
 *   Copyright (C) 2008 by Giovanni Romano   *
 *   Giovanni.Romano.76@gmail.com   *
 *                                                                         *
 *   This program may be distributed under the terms of the Q Public       *
 *   License as defined by Trolltech AS of Norway and appearing in the     *
 *   file LICENSE.QPL included in the packaging of this file.              *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.                  *
 ***************************************************************************/


#include "ui_frmDBSettings.h"


class frmDBSettings : public QWidget {
	Q_OBJECT

	public:
		frmDBSettings(QWidget *parent = 0);
		~frmDBSettings();
		
	private slots:
		void 				ReloadSettings(void);
		void 				SaveSettings(void);	
		void 				activateDBConnection(void);

	protected:
		void				closeEvent (QCloseEvent * event);
		
	private:
		Ui::frmDBSettings 	ui;
};
