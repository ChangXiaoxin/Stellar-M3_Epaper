#include <bcomdef.h>
#include <ti/display/Display.h>

#include <menu/two_btn_menu.h>
#include "simple_peripheral_menu.h"
#include "simple_peripheral.h"

/*
 * Menu Lists Initializations
 */

// Menu: Main
// upper: none
#ifdef PTM_MODE
MENU_OBJ(spMenuMain, NULL, 2, NULL)
  MENU_ITEM_SUBMENU(&spMenuSelectConn)
  MENU_ITEM_ACTION("Enable PTM Mode", SimplePeripheral_doEnablePTMMode)
MENU_OBJ_END
#else
MENU_OBJ(spMenuMain, NULL, 1, NULL)
  MENU_ITEM_SUBMENU(&spMenuSelectConn)
MENU_OBJ_END
#endif

// Menu: SelectDev
// upper: Main
// NOTE: The number of items in this menu object shall be
//       equal to or greater than MAX_NUM_BLE_CONNS
MENU_OBJ(spMenuSelectConn, "Work with", MAX_NUM_BLE_CONNS, &spMenuMain)
  MENU_ITEM_ACTION(NULL, SimplePeripheral_doSelectConn)
  MENU_ITEM_ACTION(NULL, SimplePeripheral_doSelectConn)
MENU_OBJ_END

// Menu: PerConnection
// upper: SelectDevice
MENU_OBJ(spMenuPerConn, NULL, 1, &spMenuSelectConn)
  MENU_ITEM_SUBMENU(&spMenuConnPhy)
MENU_OBJ_END

// Menu: ConnPhy
// upper: Select Device
MENU_OBJ(spMenuConnPhy, "Set Conn PHY Preference", 6, &spMenuPerConn)
  MENU_ITEM_ACTION("1 Mbps",              SimplePeripheral_doSetConnPhy)
  MENU_ITEM_ACTION("2 Mbps",              SimplePeripheral_doSetConnPhy)
  MENU_ITEM_ACTION("1 & 2 Mbps",          SimplePeripheral_doSetConnPhy)
  MENU_ITEM_ACTION("Coded",               SimplePeripheral_doSetConnPhy)
  MENU_ITEM_ACTION("1 & 2 Mbps, & Coded", SimplePeripheral_doSetConnPhy)
  MENU_ITEM_ACTION("Auto PHY change",     SimplePeripheral_doSetConnPhy)
MENU_OBJ_END
