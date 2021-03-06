#include "IDGenerator.h"
#include "control_ids.h"

#undef ID

#define ID(x) const DWORD x = CIDGenerator::getNextID();

// About window's OK button
ID( BTN_OK_ABT )

// The New ToolButton
ID( BTN_NEW	)	

ID (TAB_MAIN)
ID (STB_MAIN)
ID (IPRANGES_GO)
ID (IPRANGES_OPTIONS)
ID (SCAN_LOCALHOST)
ID (TREE_IPLIST)

// the menu IDs
ID( MENU_FILE )
ID( MENU_EDIT )
ID( MENU_WINDOW	)
ID( MENU_HELP )		
ID( MENU_CREATE	)		
ID( MENU_FILE_NEW )
ID( MENU_FILE_OPEN )		
ID( MENU_FILE_SAVE )
ID( MENU_FILE_SAVEAS )
ID( MENU_FILE_EXPORT )
ID( MENU_FILE_IMPORT )
ID( MENU_FILE_EXIT )
ID( MENU_EDIT_UNDO )
ID( MENU_EDIT_REDO )
ID( MENU_EDIT_CUT )
ID( MENU_EDIT_COPY )
ID( MENU_EDIT_PASTE )
ID( MENU_EDIT_DELETE )
ID( MENU_CREATE_FLOOR )
ID( MENU_CREATE_WALL )
ID( MENU_CREATE_CUBE )
ID( MENU_CREATE_SPHERE )
ID( MENU_CREATE_CYLINDER )
ID( MENU_CREATE_CONE )
ID( MENU_CREATE_LIGHT )
ID( MENU_CREATE_TIMER )
ID( MENU_CREATE_PATH )
ID( MENU_CREATE_MOTION )
ID( MENU_CREATE_TRIGGER )
ID( MENU_CREATE_SWITCH )
ID( MENU_CREATE_SPAWNER )
ID( MENU_HELP_ABOUT )

ID ( MENU_VIEW_3D_GRID )
ID ( MENU_VIEW_COORDINATESYSTEM )
