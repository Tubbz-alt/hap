////////////////////////////////////////////////////////////////////////////////
// Projekt:              Home-Automation                                      //
// Modul:                Drehgeber PEC11                                      //
// Version:              1.0 (0)                                              //
////////////////////////////////////////////////////////////////////////////////
// Erstellt am:          28.11.2006                                           //
// Erstellt von:         Holger Heuser                                        //
// Zuletzt ge�ndert am:  28.11.2006                                           //
// Zuletzt ge�ndert von: Holger Heuser                                        //
////////////////////////////////////////////////////////////////////////////////

#ifndef HADGPEC11
#define HADGPEC11


////////////////////////////////////////////////////////////////////////////////
// Module einbinden                                                           //
////////////////////////////////////////////////////////////////////////////////

#include <hagl.h>


////////////////////////////////////////////////////////////////////////////////
// Deklarationen                                                              //
////////////////////////////////////////////////////////////////////////////////

void DGInit(void);
void DGProcessEvent(tByte pModul, tByte pDevice, tByte pEvent);
inline void DGDestroy(void);


#endif
