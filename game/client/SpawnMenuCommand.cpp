#include <cbase.h>
#include <spawnmenu.h>
#include <convar.h>

void StartSMenu(const CCommand& args)
{
	ConVar* spawnmenu = cvar->FindVar("cl_spawnmenu");

	spawnmenu->SetValue(1);
}

void EndSMenu(const CCommand& args)
{
	ConVar* spawnmenu = cvar->FindVar("cl_spawnmenu");

	spawnmenu->SetValue(0);
}

ConCommand startsmenu("+spawnmenu", StartSMenu);
ConCommand endsmenu("-spawnmenu", EndSMenu);

