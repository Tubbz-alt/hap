////////////////////////////////////////////////////////////////////////////////
// Projekt:              Home-Automation                                      //
// Modul:                LCD 2x16                                             //
// Version:              1.0 (0)                                              //
////////////////////////////////////////////////////////////////////////////////
// Erstellt am:          20.02.2007                                           //
// Erstellt von:         Holger Heuser                                        //
// Zuletzt ge�ndert am:  20.02.2007                                           //
// Zuletzt ge�ndert von: Holger Heuser                                        //
////////////////////////////////////////////////////////////////////////////////

#ifndef HALCD2X16
#define HALCD2X16


////////////////////////////////////////////////////////////////////////////////
// Module einbinden                                                           //
////////////////////////////////////////////////////////////////////////////////

#include <mv.h>

#include <hagl.h>

// Basis Module ////////////////////////////////////////////////////////////////

#include <hadogm.h>

// Optionale Module ////////////////////////////////////////////////////////////

#ifdef COHAGUI
#include <hagui.h>
#endif


////////////////////////////////////////////////////////////////////////////////
// Deklarationen                                                              //
////////////////////////////////////////////////////////////////////////////////

void LCDInit(void);
#ifdef COHAGUI
void LCDPutMenue(tGUIMenue *pMenue);
void LCDPutOutCtrl(tGUIOutCtrl *pOutCtrl);
void LCDPutThermostat(tGUIThermostat *pThermostat);
#endif


#endif
