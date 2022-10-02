OldaleTown_House1_MapScripts::
	.byte 0

OldaleTown_House1_EventScript_Woman::
	msgbox OldaleTown_House1_Text_LeftPokemonGoesOutFirst, MSGBOX_NPC
	end

OldaleTown_House1_Text_LeftPokemonGoesOutFirst:
	.string "When a POKéMON battle starts, the one\n"
	.string "at the left of the list goes out first.\p"
	.string "So, when you get more POKéMON in your\n"
	.string "party, try switching around the order\l"
	.string "of your POKéMON.\p"
	.string "It could give you an advantage.$"

KatsikkiVillage_House1_EventScript_KatsikkiChief::
	lock
	faceplayer
	goto_if_unset FLAG_Katsikki_VILLAGE_GIVEN_LETTER, KatsikkiVillage_House1_EventScript_KatsikkiChief_1
	msgbox KatsikkiVillage_House1_EventScript_KatsikkiChief_Text_5
	closemessage
	return

KatsikkiVillage_House1_EventScript_KatsikkiChief_1:
	msgbox KatsikkiVillage_House1_EventScript_KatsikkiChief_Text_0
	playfanfare MUS_OBTAIN_ITEM
	msgbox KatsikkiVillage_House1_EventScript_KatsikkiChief_Text_1
	waitfanfare
	applymovement 1, chief_turns_to_read
	waitmovement 0
	msgbox KatsikkiVillage_House1_EventScript_KatsikkiChief_Text_2
	applymovement 1, chief_surprised
	waitmovement 0
	msgbox KatsikkiVillage_House1_EventScript_KatsikkiChief_Text_3
	applymovement 1, chief_turns_to_player
	msgbox KatsikkiVillage_House1_EventScript_KatsikkiChief_Text_4
	release
	closemessage
	setflag FLAG_Katsikki_VILLAGE_GIVEN_LETTER
	end


chief_turns_to_read:
	face_away_player
	step_end

chief_surprised:
	emote_exclamation_mark
	step_end

chief_turns_to_player:
	face_player
	step_end

KatsikkiVillage_House1_EventScript_KatsikkiChief_Text_0:
	.string "...\p"
	.string "And you are?\p"
	.string "...\p"
	.string "Ah yes, {PLAYER}! Of course!\n"
	.string "Professor Spruce gave me the heads up\l"
	.string "about your arrival. Would you mind just\l"
	.string "handing over the letter that he asked\l"
	.string "you to deliver?$"

KatsikkiVillage_House1_EventScript_KatsikkiChief_Text_1:
	.string "{PLAYER} handed the letter over to\n"
	.string "the Chief.$"

KatsikkiVillage_House1_EventScript_KatsikkiChief_Text_2:
	.string "Hmm...\p"
	.string "Uh-huh...$"

KatsikkiVillage_House1_EventScript_KatsikkiChief_Text_3:
	.string "I see...\p"
	.string "Very well then.$"

KatsikkiVillage_House1_EventScript_KatsikkiChief_Text_4:
	.string "Thank you very much for this,\n"
	.string "{PLAYER}. There's no need for you to\l"
	.string "go all the way back to Professor\l"
	.string "Spruce, I can send a messenger.\p"
	.string "There is a gym in Retsu Town, just east\n"
	.string "of here! Simply take the Katsikki Pass\l"
	.string "on the east side of this village onto\l"
	.string "Route 2 and you'll be on your way in no\l"
	.string "time!\p"
	.string "Good luck, {PLAYER}! I'm sure our\n"
	.string "paths will cross again soon.$"

KatsikkiVillage_House1_EventScript_KatsikkiChief_Text_5:
	.string "Ah, {PLAYER}! How are you faring? Worn\n"
	.string "down yet from all your travels?$"
