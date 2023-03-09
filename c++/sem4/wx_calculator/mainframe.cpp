#include "mainframe.hpp"

#include <wx/wx.h>
#include <wx/spinctrl.h>

MainFrame::MainFrame(const wxString& title)
  : wxFrame(nullptr, wxID_ANY, title) {
  wxPanel* panel = new wxPanel(this);

  wxButton* equalsBtn = new wxButton(panel, wxID_ANY, "=", wxPoint(500, 600),
                                  wxSize(100, 100));
  wxButton* addBtn = new wxButton(panel, wxID_ANY, "+", wxPoint(500, 500),
                                  wxSize(100, 100));
  wxButton* subBtn = new wxButton(panel, wxID_ANY, "-", wxPoint(500, 400),
                                  wxSize(100, 100));
  wxButton* timesBtn = new wxButton(panel, wxID_ANY, "x", wxPoint(500, 300),
                                  wxSize(100, 100));
  wxButton* divBtn = new wxButton(panel, wxID_ANY, "/", wxPoint(500, 200),
                                  wxSize(100, 100));

  wxButton* delBtn = new wxButton(panel, wxID_ANY, "<", wxPoint(400, 600),
                                  wxSize(100, 100));
  wxButton* threeBtn = new wxButton(panel, wxID_ANY, "3", wxPoint(400, 500),
                                  wxSize(100, 100));
  wxButton* sixBtn = new wxButton(panel, wxID_ANY, "6", wxPoint(400, 400),
                                  wxSize(100, 100));
  wxButton* nineBtn = new wxButton(panel, wxID_ANY, "9", wxPoint(400, 300),
                                  wxSize(100, 100));
  wxButton* prozBtn = new wxButton(panel, wxID_ANY, "%", wxPoint(400, 200),
                                  wxSize(100, 100));


  wxButton* decBtn = new wxButton(panel, wxID_ANY, ".", wxPoint(300, 600),
                                  wxSize(100, 100));
  wxButton* twoBtn = new wxButton(panel, wxID_ANY, "2", wxPoint(300, 500),
                                  wxSize(100, 100));
  wxButton* fiveBtn = new wxButton(panel, wxID_ANY, "5", wxPoint(300, 400),
                                  wxSize(100, 100));
  wxButton* eightBtn = new wxButton(panel, wxID_ANY, "8", wxPoint(300, 300),
                                  wxSize(100, 100));
  wxButton* bracketsBtn = new wxButton(panel, wxID_ANY, "( )", wxPoint(300, 200),
                                  wxSize(100, 100));


  wxButton* zeroBtn = new wxButton(panel, wxID_ANY, "0", wxPoint(200, 600),
                                  wxSize(100, 100));
  wxButton* oneBtn = new wxButton(panel, wxID_ANY, "1", wxPoint(200, 500),
                                  wxSize(100, 100));
  wxButton* fourBtn = new wxButton(panel, wxID_ANY, "4", wxPoint(200, 400),
                                  wxSize(100, 100));
  wxButton* sevenBtn = new wxButton(panel, wxID_ANY, "7", wxPoint(200, 300),
                                  wxSize(100, 100));
  wxButton* acBtn = new wxButton(panel, wxID_ANY, "AC", wxPoint(200, 200),
                                  wxSize(100, 100));

  wxStaticText* label = new wxStaticText(panel, wxID_ANY, "testaaaaaaaaaaaaaa",
                                         wxPoint(200,100), wxSize(400,35));
  wxTextCtrl* text = new wxTextCtrl(panel, wxID_ANY, "text",
                                 wxPoint(200, 150), wxSize(400,35));



}
