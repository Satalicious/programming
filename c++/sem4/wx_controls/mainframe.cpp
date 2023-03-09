#include "mainframe.hpp"

#include <wx/wx.h>
#include <wx/spinctrl.h>

MainFrame::MainFrame(const wxString& title)
  : wxFrame(nullptr, wxID_ANY, title) {
  wxPanel* panel = new wxPanel(this);

  wxButton* button = new wxButton(panel, wxID_ANY, "4AKIFT", wxPoint(150, 50),
                                  wxSize(100, 35));

  wxCheckBox* checkBox = new wxCheckBox(panel, wxID_ANY, "Check",
                                        wxPoint(350,30), wxSize(100,70));

  wxStaticText* label = new wxStaticText(panel, wxID_ANY, "ABCD",
                                         wxPoint(150,100), wxSize(100,35));

  wxTextCtrl* text = new wxTextCtrl(panel, wxID_ANY, "text",
                                 wxPoint(150, 150), wxSize(200,35));

  wxSlider* slider = new wxSlider(panel, wxID_ANY, 25,0,100,
                                  wxPoint(350,150), wxSize(200,-1));

  wxGauge* gauge = new wxGauge(panel, wxID_ANY, 100, wxPoint(150,200),wxSize(200,-1));

  gauge->SetValue(75);

  wxArrayString choices;
  choices.Add("Fabian");
  choices.Add("Alvin");
  choices.Add("Mihael");
  choices.Add("Neil");
  wxChoice* choice = new wxChoice(panel, wxID_ANY,wxPoint(150,260),wxSize(100,-1), choices);
  choice->Select(1);

  wxSpinCtrl* spin = new wxSpinCtrl(panel, wxID_ANY, "", wxPoint(400,200));

  wxListBox* list = new wxListBox(panel, wxID_ANY, wxPoint(150,350), wxSize(100,-1), choices);

  wxRadioBox* radioBox = new wxRadioBox(panel, wxID_ANY, "radioBox", wxPoint(285,300), wxDefaultSize, choices);

}
