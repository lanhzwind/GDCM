// -*- C++ -*- generated by wxGlade 0.4.1 on Mon Aug 28 23:13:14 2006

#include <wx/wx.h>
#include <wx/image.h>

#ifndef WXGDCMFRAMEBASE_H
#define WXGDCMFRAMEBASE_H

// begin wxGlade: ::dependencies
#include <wx/treectrl.h>
#include <wx/listctrl.h>
#include <wx/notebook.h>
#include <wx/grid.h>
// end wxGlade


class wxVTKRenderWindowInteractor;
class wxGDCMFrameBase: public wxFrame {
public:
    // begin wxGlade: wxGDCMFrameBase::ids
    // end wxGlade

    wxGDCMFrameBase(wxWindow* parent, int id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_FRAME_STYLE);

private:
    // begin wxGlade: wxGDCMFrameBase::methods
    void set_properties();
    void do_layout();
    // end wxGlade

protected:
    // begin wxGlade: wxGDCMFrameBase::attributes
    wxMenuBar* TopFrameMenubar;
    wxStatusBar* TopFrameStatusbar;
    wxToolBar* TopFrameToolbar;
    wxTreeCtrl* TreeCtrl;
    wxListCtrl* ListCtrl;
    wxVTKRenderWindowInteractor* VTKWindow;
    wxGrid* Grid;
    wxNotebook* Notebook;
    // end wxGlade
}; // wxGlade: end class


#endif // WXGDCMFRAMEBASE_H
