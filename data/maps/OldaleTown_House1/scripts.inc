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

KazaniVillage_House1_EventScript_KazaniChief::
	lock
	faceplayer
	goto_if_unset FLAG_KAZANI_VILLAGE_GIVEN_LETTER, KazaniVillage_House1_EventScript_KazaniChief_1
	msgbox KazaniVillage_House1_EventScript_KazaniChief_Text_5
	closemessage
	return

KazaniVillage_House1_EventScript_KazaniChief_1:
	msgbox KazaniVillage_House1_EventScript_KazaniChief_Text_0
	playfanfare MUS_OBTAIN_ITEM
	msgbox KazaniVillage_House1_EventScript_KazaniChief_Text_1
	waitfanfare
	applymovement 1, chief_turns_to_read
	waitmovement 0
	msgbox KazaniVillage_House1_EventScript_KazaniChief_Text_2
	applymovement 1, chief_surprised
	waitmovement 0
	msgbox KazaniVillage_House1_EventScript_KazaniChief_Text_3
	applymovement 1, chief_turns_to_player
	msgbox KazaniVillage_House1_EventScript_KazaniChief_Text_4
	release
	closemessage
	setflag FLAG_KAZANI_VILLAGE_GIVEN_LETTER
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

KazaniVillage_House1_EventScript_KazaniChief_Text_0:
	.string "...\p"
	.string "And you are?\p"
	.string "...\p"
	.string "Ah yes, {PLAYER}! Of course!\n"
	.string "Professor Spruce gave me the heads up\l"
	.string "about your arrival. Would you mind just\l"
	.string "handing over the letter that he asked\l"
	.string "you to deliver?$"

KazaniVillage_House1_EventScript_KazaniChief_Text_1:
	.string "{PLAYER} handed the letter over to\n"
	.string "the Chief.$"

KazaniVillage_House1_EventScript_KazaniChief_Text_2:
	.string "Hmm...\p"
	.string "Uh-huh...$"

KazaniVillage_House1_EventScript_KazaniChief_Text_3:
	.string "I see...\p"
	.string "Very well then.$"

KazaniVillage_House1_EventScript_KazaniChief_Text_4:
	.string "Thank you very much for this,\n"
	.string "{PLAYER}. There's no need for you to\l"
	.string "go all the way back to Professor\l"
	.string "Spruce, I can send a messenger.\p"
	.string "For what to do next...\p"
	.string "Ah-ha! That's right!\p"
	.string "There is a gym just in Satatsu City,\n"
	.string "just east of here! Simply take the\l"
	.string "Kazani Pass on the east side of this\l"
	.string "village onto Route 2 and you'll be on\l"
	.string "your way in no time!\p"
	.string "Good luck, {PLAYER}! I'll be in touch.$"

KazaniVillage_House1_EventScript_KazaniChief_Text_5:
	.string "Ah, {PLAYER}! How are you faring? Worn\n"
	.string "down yet from all your travels?$"
