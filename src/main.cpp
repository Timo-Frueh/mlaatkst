// MLAatKST: Footnote helper for KST students
// Copyright (C) 2023 Timo Früh

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

#include <wx/wxprec.h>
 
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include <wx/aboutdlg.h>
#include <wx/intl.h>

#include "mainframe.hpp"


class MLAatKST : public wxApp {
    public:
        virtual bool OnInit();
        wxLocale* locale;
};

wxIMPLEMENT_APP(MLAatKST);

bool MLAatKST::OnInit() {

    locale = new wxLocale();

    locale->Init(wxLANGUAGE_DEFAULT);

    locale->AddCatalog(wxT("mlaatkst"));
    locale->AddCatalog(wxT("wxstd"));
    
    this->SetAppDisplayName(wxT("MLAatKST"));

    MainFrame* window = new MainFrame(wxT("MLAatKST"));
    window->Show();

    return true;
}
