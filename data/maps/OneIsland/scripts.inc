OneIsland_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OneIsland_OnTransition
	.byte 0

OneIsland_EventScript_TownSign::
	lockall
	@msgbox Common_Text_LookCloserAtMap, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special FieldShowRegionMap
	waitstate
	releaseall
	end

OneIsland_OnTransition:
	setflag FLAG_VISITED_ONE_ISLAND
	end
