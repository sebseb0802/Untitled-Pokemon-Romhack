GraniteCave_B1F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
	map_script MAP_SCRIPT_ON_RESUME, GraniteCave_B1F_SetHoleWarp
	.byte 0

GraniteCave_B1F_SetHoleWarp:
	setstepcallback STEP_CB_CRACKED_FLOOR
	setholewarp MAP_GRANITE_CAVE_B2F
	end

KatsikkiPass_EventScript_Camper2::
	trainerbattle_single TRAINER_KATSIKKI_PASS_CAMPER_2, camper2_intro, camper2_outro
	return


KatsikkiPass_EventScript_Camper3::
	trainerbattle_single TRAINER_KATSIKKI_PASS_CAMPER_3, camper3_intro, camper3_outro
	return


KatsikkiPass_EventScript_Give_Return::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_TM_RETURN, KatsikkiPass_EventScript_Give_Return_2
	msgbox KatsikkiPass_EventScript_Give_Return_Text_1
KatsikkiPass_EventScript_Give_Return_1:
	release
	end

KatsikkiPass_EventScript_Give_Return_2:
	msgbox KatsikkiPass_EventScript_Give_Return_Text_0
	giveitem ITEM_TM27_RETURN
	msgbox KatsikkiPass_EventScript_Give_Return_Text_1
	setflag FLAG_RECEIVED_TM_RETURN
	goto KatsikkiPass_EventScript_Give_Return_1


KatsikkiPass_EventScript_Pokeball2::
	removeobject 2
	giveitem ITEM_ESCAPE_ROPE
	closemessage
	return


KatsikkiPass_EventScript_Give_Return_Text_0:
	.string "Ever wondered if you could see how much\n"
	.string "your own Pokémon are affectionate\l"
	.string "towards you?\p"
	.string "Well, you can!\p"
	.string "Take this TM!$"

KatsikkiPass_EventScript_Give_Return_Text_1:
	.string "Use the power of friendship to crush\n"
	.string "your opponents! How sweet!$"

camper2_intro::
	.string "On your way to Retsu Town? I'll beat you\n"
	.string "there!$"

camper2_outro::
	.string "I guess you'll beat me there...$"

camper3_intro::
	.string "This cave is pretty big! Wanna see what\n"
	.string "I caught on the way here?$"

camper3_outro::
	.string "Where did you catch those Pokémon?!$"
