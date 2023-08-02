#include "cbase.h"
#include "spawnmenu.h"
using namespace vgui;
#include <vgui/IVGui.h>
#include <vgui_controls/Frame.h>
#include <vgui_controls/Button.h>

class CSpawnMenu : public vgui::Frame
{
    DECLARE_CLASS_SIMPLE(CSpawnMenu, vgui::Frame);

    CSpawnMenu(vgui::VPANEL parent); 	// Constructor
    ~CSpawnMenu() {}; // Destructor
protected:
    //VGUI overrides:
    virtual void OnTick();
    virtual void OnCommand(const char* pcCommand);	

private:
    //Other used VGUI control Elements:

	// Constuctor: Initializes the Panel
};

CSpawnMenu::CSpawnMenu(vgui::VPANEL parent)
	: BaseClass(NULL, "Spawnmenu")
{
	SetParent(parent);

	SetKeyBoardInputEnabled(true);
	SetMouseInputEnabled(true);

	SetProportional(false);
	SetTitleBarVisible(true);
	SetMinimizeButtonVisible(false);
	SetMaximizeButtonVisible(false);
	SetCloseButtonVisible(false);
	SetSizeable(false);
	SetMoveable(false);
	SetVisible(true);


	SetScheme(vgui::scheme()->LoadSchemeFromFile("resource/SourceScheme.res", "SourceScheme"));

	LoadControlSettings("resource/UI/spawnmenu.res");

	vgui::ivgui()->AddTickSignal(GetVPanel(), 100);

	DevMsg("Spawnmenu has been constructed\n");
}

class CMyPanelInterface : public ISpawnmenu
{
private:
	CSpawnMenu* SpawnMenu;
public:
	CMyPanelInterface()
	{
		SpawnMenu = NULL;
	}
	void Create(vgui::VPANEL parent)
	{
		SpawnMenu = new CSpawnMenu(parent);
	}
	void Destroy()
	{
		if (SpawnMenu)
		{
			SpawnMenu->SetParent( (vgui::Panel *)NULL);
			delete SpawnMenu;
		}
	}
	void Activate(void)
	{
		if (SpawnMenu)
		{
			SpawnMenu->Activate();
		}
	}
};
static CMyPanelInterface g_SpawnMenu;
ISpawnmenu* spawnmenu = (ISpawnmenu*)&g_SpawnMenu;

ConVar cl_spawnmenu("cl_spawnmenu", "0", FCVAR_CLIENTDLL, "spawnmenu");


void CSpawnMenu::OnTick()
{
	BaseClass::OnTick();
	SetVisible(cl_spawnmenu.GetBool());
}

CON_COMMAND(OpenTestPanelFenix, "Toggles testpanelfenix on or off")
{
	cl_spawnmenu.SetValue(!cl_spawnmenu.GetBool());
	spawnmenu->Activate();
};


void CSpawnMenu::OnCommand(const char* pcCommand)
{
	BaseClass::OnCommand(pcCommand);
	if (!Q_stricmp(pcCommand, "turnoff"))
		cl_spawnmenu.SetValue(0);
	if (!Q_stricmp(pcCommand, "spawnprop models/props_phx/ball.mdl"))
		engine->ClientCmd(pcCommand);
}






