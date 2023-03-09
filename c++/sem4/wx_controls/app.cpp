#include "app.hpp"

#include <wx/wx.h>

#include "mainframe.hpp"

bool App::OnInit() {
  MainFrame* main_frame = new MainFrame("4AKIFT wx Tutorial");
  main_frame->SetClientSize(800, 600);
  main_frame->Center();
  main_frame->Show();
  return true;
}

wxIMPLEMENT_APP(App);
