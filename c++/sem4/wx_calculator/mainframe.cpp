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

  label = new wxStaticText(panel, wxID_ANY, "",
                                         wxPoint(200,100), wxSize(400,70));

  textField = new wxTextCtrl(panel, wxID_ANY, "textField",
                                 wxPoint(200, 150), wxSize(400,35));

  acBtn->Bind(wxEVT_BUTTON, &MainFrame::on_button_clear_clicked, this);

  delBtn->Bind(wxEVT_BUTTON, &MainFrame::clear_last_char, this);
  equalsBtn->Bind(wxEVT_BUTTON, [this](wxCommandEvent& evt) {
  calculate(evt, "+");});

  prozBtn->Bind(wxEVT_BUTTON, &MainFrame::on_textField_change, this);

  decBtn->Bind(wxEVT_BUTTON, [this](wxCommandEvent& evt) {
  add_char(evt, ".");});
  zeroBtn->Bind(wxEVT_BUTTON, [this](wxCommandEvent& evt) {
  add_char(evt, "0");});
  oneBtn->Bind(wxEVT_BUTTON, [this](wxCommandEvent& evt) {
  add_char(evt, "1");});
  twoBtn->Bind(wxEVT_BUTTON, [this](wxCommandEvent& evt) {
  add_char(evt, "2");});
  threeBtn->Bind(wxEVT_BUTTON, [this](wxCommandEvent& evt) {
  add_char(evt, "3");});
  fourBtn->Bind(wxEVT_BUTTON, [this](wxCommandEvent& evt) {
  add_char(evt, "4");});
  fiveBtn->Bind(wxEVT_BUTTON, [this](wxCommandEvent& evt) {
  add_char(evt, "5");});
  sixBtn->Bind(wxEVT_BUTTON, [this](wxCommandEvent& evt) {
  add_char(evt, "6");});
  sevenBtn->Bind(wxEVT_BUTTON, [this](wxCommandEvent& evt) {
  add_char(evt, "7");});
  eightBtn->Bind(wxEVT_BUTTON, [this](wxCommandEvent& evt) {
  add_char(evt, "8");});
  nineBtn->Bind(wxEVT_BUTTON, [this](wxCommandEvent& evt) {
  add_char(evt, "9");});
    equalsBtn->Bind(wxEVT_BUTTON, [this](wxCommandEvent& evt) {
  add_char(evt, "=");});
      addBtn->Bind(wxEVT_BUTTON, [this](wxCommandEvent& evt) {
  add_char(evt, "+");});


  CreateStatusBar();
}

void MainFrame::on_button_clear_clicked(wxCommandEvent& evt) {
  textField->Clear();
  wxLogStatus("Cleared Textfield");
}

void MainFrame::clear_last_char(wxCommandEvent& evt) {
  wxString currentText = textField->GetValue();
  if (currentText.Length() > 0) {
    wxString newText = currentText.SubString(0, currentText.Length() - 2);
    textField->SetValue(newText);
    wxLogStatus("Removed a char");
  }
}

void MainFrame::add_char(wxCommandEvent& evt, const char* ch) {
  wxString myString = wxString::Format("%s", ch);
  textField->WriteText(myString);
}

void MainFrame::on_textField_change(wxCommandEvent& evt) {
    // std::string str("Text: " + evt.GetString());
    // wxLogStatus(str.c_str());

   std::string str("Text: " + std::to_string(evt.GetInt()));
   wxLogStatus(textField->GetValue());
   wxString wxstr(str);
   label->SetLabel(wxstr);
}

double MainFrame::calculate(wxCommandEvent& evt, const char* ch) {
  wxString currentText = textField->GetValue();
  double result = 0.0;
  wxString operatorString;
  bool operatorFound = false;
  bool lastCharOperator = false;
  double currentNumber = 0.0;
  char currentChar;

  for (size_t i = 0; i < currentText.length(); i++) {
    currentChar = currentText[i];
    if (isdigit(currentChar) || currentChar == '.') {
      currentNumber = currentNumber * 10 + (currentChar - '0');
      if (i == currentText.length() - 1) {
        if (operatorFound) {
          if (operatorString == "+") {
            result += currentNumber;
          }
          else if (operatorString == "-") {
            result -= currentNumber;
          }
          else if (operatorString == "*") {
            result *= currentNumber;
          }
          else if (operatorString == "/") {
            result /= currentNumber;
          }
        }
        else {
          result = currentNumber;
        }
      }
      lastCharOperator = false;
    }
    else if (currentChar == '+' || currentChar == '-' || currentChar == '*' || currentChar == '/') {
      if (lastCharOperator) {
        operatorString = currentChar;
        continue;
      }
      else {
        lastCharOperator = true;
        if (operatorFound) {
          if (operatorString == "+") {
            result += currentNumber;
          }
          else if (operatorString == "-") {
            result -= currentNumber;
          }
          else if (operatorString == "*") {
            result *= currentNumber;
          }
          else if (operatorString == "/") {
            result /= currentNumber;
          }
        }
        else {
          result = currentNumber;
        }
        currentNumber = 0.0;
        operatorString = currentChar;
        operatorFound = true;
      }
    }
    else if (currentChar == '=') {
      if (operatorFound) {
        if (operatorString == "+") {
          result += currentNumber;
        }
        else if (operatorString == "-") {
          result -= currentNumber;
        }
        else if (operatorString == "*") {
          result *= currentNumber;
        }
        else if (operatorString == "/") {
          result /= currentNumber;
        }
      }
      else {
        result = currentNumber;
      }
      break;
    }
  }

  // Set the result string as the value of the text field
  wxString resultString = wxString::Format("%.2f", result);
  textField->SetValue(resultString);

  // Return the result
  return result;
}





