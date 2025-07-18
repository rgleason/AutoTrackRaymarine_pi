/******************************************************************************
*
* Project:  OpenCPN
* Purpose:  AutoTrackRaymarine Plugin
* Author:   Douwe Fokkema
*
***************************************************************************
*   Copyright (C) 2019 by Douwe Fokkema                                   *
*                                                                         *
*   This program is free software; you can redistribute it and/or modify  *
*   it under the terms of the GNU General Public License as published by  *
*   the Free Software Foundation; either version 3 of the License, or     *
*   (at your option) any later version.                                   *
*                                                                         *
*   This program is distributed in the hope that it will be useful,       *
*   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
*   GNU General Public License for more details.                          *
*                                                                         *
*   You should have received a copy of the GNU General Public License     *
*   along with this program; if not, write to the                         *
*   Free Software Foundation, Inc.,                                       *
*   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301,  USA.         *
***************************************************************************
*/

#ifndef INC_ERRORDIALOG_H
#define INC_ERRORDIALOG_H

#include "AutoTrackRaymarine_pi.h"
#include "AutoTrackErrorUI.h"

class ErrorDialog : public ErrorDialogBase
{
public:
  ErrorDialog(wxWindow* parent, AutoTrackRaymarine_pi *pi)
    : ErrorDialogBase(parent), m_pi(*pi) {

  }
  ~ErrorDialog();

  bool Show(bool show = true);
  void DisplayText1(wxString xx);
private:
  void OnOk(wxCommandEvent& event);
  AutoTrackRaymarine_pi& m_pi;
};

#endif // !INC_ERRORDIALOG_H

