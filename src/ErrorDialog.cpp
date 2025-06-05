/******************************************************************************
 *
 * Project:  OpenCPN
 * Purpose:  AutoTrackRaymarine plugin
 * Author:   Douwe Fokkema
 *
 *
 ***************************************************************************
 *   Copyright (C) 2019 by Douwe Fokkema                                   *
 *                         David Register                                  *
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

#include "ErrorDialog.h"

bool ErrorDialog::Show(bool show)
{
  if (show) {
  }
  return ErrorDialogBase::Show(show);
}

void ErrorDialog::DisplayText1(wxString xx) {
    m_textCtrl3->SetValue(xx);
}

void ErrorDialog::OnOk(wxCommandEvent& event)
{
  Hide();
}

ErrorDialog::~ErrorDialog() {
};



