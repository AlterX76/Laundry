/***************************************************************************
 *   Copyright (C) 2008 by Romano   *
 *   giovanni@mylinux   *
 *                                                                         *
 *   This program may be distributed under the terms of the Q Public       *
 *   License as defined by Trolltech AS of Norway and appearing in the     *
 *   file LICENSE.QPL included in the packaging of this file.              *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.                  *
 ***************************************************************************/

#include "ui_frmNuovoCliente.h"

class frmMainLaundry;


class frmNuovoCliente : public QWidget {
	Q_OBJECT
			
	public:
		frmNuovoCliente(QWidget *parent = 0);
		~frmNuovoCliente();
	
	protected:
		void closeEvent(QCloseEvent * event);
		
	private slots:
		void insertNewClient(void);
		
	private:
		Ui::frmNuovoCliente 	ui;
		frmMainLaundry 		*parent;
};
