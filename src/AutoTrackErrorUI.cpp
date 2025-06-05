///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "AutoTrackErrorUI.h"

///////////////////////////////////////////////////////////////////////////

ErrorDialogBase::ErrorDialogBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,-1 ), wxSize( -1,-1 ) );

	wxFlexGridSizer* fgSizer8;
	fgSizer8 = new wxFlexGridSizer( 1, 2, 0, 0 );
	fgSizer8->AddGrowableCol( 0 );
	fgSizer8->AddGrowableCol( 1 );
	fgSizer8->AddGrowableRow( 0 );
	fgSizer8->SetFlexibleDirection( wxBOTH );
	fgSizer8->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_ALL );

	wxFlexGridSizer* fgSizer162;
	fgSizer162 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer162->AddGrowableCol( 0 );
	fgSizer162->SetFlexibleDirection( wxBOTH );
	fgSizer162->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	fgSizer162->SetMinSize( wxSize( -1,100 ) );
	wxStaticBoxSizer* sbSizer2;
	sbSizer2 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Message") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer6;
	fgSizer6 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer6->SetFlexibleDirection( wxBOTH );
	fgSizer6->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	fgSizer6->SetMinSize( wxSize( 300,100 ) );
	m_textCtrl3 = new wxTextCtrl( sbSizer2->GetStaticBox(), wxID_ANY, _("AAA"), wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE );
	#ifdef __WXGTK__
	if ( !m_textCtrl3->HasFlag( wxTE_MULTILINE ) )
	{
	m_textCtrl3->SetMaxLength( 200 );
	}
	#else
	m_textCtrl3->SetMaxLength( 200 );
	#endif
	m_textCtrl3->SetMinSize( wxSize( 300,100 ) );

	fgSizer6->Add( m_textCtrl3, 0, wxALL, 5 );


	sbSizer2->Add( fgSizer6, 1, wxEXPAND, 5 );


	fgSizer162->Add( sbSizer2, 1, wxEXPAND, 5 );


	fgSizer8->Add( fgSizer162, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer181;
	fgSizer181 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer181->AddGrowableCol( 0 );
	fgSizer181->SetFlexibleDirection( wxBOTH );
	fgSizer181->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer10;
	sbSizer10 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxEmptyString ), wxVERTICAL );

	wxFlexGridSizer* fgSizer45;
	fgSizer45 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer45->SetFlexibleDirection( wxBOTH );
	fgSizer45->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	sbSizer10->Add( fgSizer45, 1, wxEXPAND, 5 );


	fgSizer181->Add( sbSizer10, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer21;
	fgSizer21 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer21->AddGrowableCol( 1 );
	fgSizer21->SetFlexibleDirection( wxBOTH );
	fgSizer21->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_sdbSizer1 = new wxStdDialogButtonSizer();
	m_sdbSizer1OK = new wxButton( this, wxID_OK );
	m_sdbSizer1->AddButton( m_sdbSizer1OK );
	m_sdbSizer1->Realize();

	fgSizer21->Add( m_sdbSizer1, 1, wxALIGN_RIGHT|wxEXPAND, 5 );


	fgSizer181->Add( fgSizer21, 1, wxEXPAND, 5 );


	fgSizer8->Add( fgSizer181, 1, wxEXPAND, 5 );


	this->SetSizer( fgSizer8 );
	this->Layout();
	fgSizer8->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_sdbSizer1OK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ErrorDialogBase::OnOk ), NULL, this );
}

ErrorDialogBase::~ErrorDialogBase()
{
	// Disconnect Events
	m_sdbSizer1OK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ErrorDialogBase::OnOk ), NULL, this );

}
