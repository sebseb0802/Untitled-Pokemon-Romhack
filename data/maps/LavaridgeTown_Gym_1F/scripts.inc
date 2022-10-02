LavaridgeTown_Gym_1F_MapScripts::
	.byte 0

PirkaGym_EventScript_Picnicker_2::
	trainerbattle_single TRAINER_PIRKA_GYM_PICNICKER_2, picnicker2_intro, picnicker2_outro
	return


PirkaGym_EventScript_Youngster_5::
	trainerbattle_single TRAINER_PIRKA_GYM_YOUNGSTER_5, youngster5_intro, youngster5_outro
	return


PirkaGym_EventScript_Lass_5::
	trainerbattle_single TRAINER_PIRKA_GYM_LASS_5, lass5_intro, lass5_outro
	return


PirkaGym_EventScript_Camper_5::
	trainerbattle_single TRAINER_PIRKA_GYM_CAMPER_5, camper5_intro, camper5_outro
	return


PirkaGym_EventScript_Patty::
	trainerbattle_single TRAINER_PIRKA_GYM_PATTY, patty_intro, patty_outro, PirkaGym_EventScript_AfterPatty, FALSE
	return


PirkaGym_EventScript_AfterPatty::
	lock
	msgbox PirkaGym_EventScript_AfterPatty_Text_0
	playfanfare MUS_HG_OBTAIN_BADGE
	msgbox PirkaGym_EventScript_AfterPatty_Text_1
	waitfanfare
	setflag FLAG_BADGE02_GET
	msgbox PirkaGym_EventScript_AfterPatty_Text_2
	giveitem ITEM_TM11_SUNNY_DAY
	msgbox PirkaGym_EventScript_AfterPatty_Text_3
	closemessage
	release
	end


PirkaGym_EventScript_AfterPatty_Text_0:
	.string "Wow-wee!\n"
	.string "Now that was something that I haven't\l"
	.string "felt for a while! A real invigoratin'\l"
	.string "battle that was!\l"
	.string "Here's this.$"

PirkaGym_EventScript_AfterPatty_Text_1:
	.string "{PLAYER} obtained the Sizzle Badge\n"
	.string "from Patty!$"

PirkaGym_EventScript_AfterPatty_Text_2:
	.string "Oh, almost forgot!$"

PirkaGym_EventScript_AfterPatty_Text_3:
	.string "Use Sunny Day to start sizzling your\n"
	.string "opponents before they make a move!\l"
	.string "Burn, baby, burn!\l"
	.string "Oh, yeah!\l"
	.string "Larry's back in town now, so you can\l"
	.string "take the boat to the mainland from\l"
	.string "here! Just head to the southeast part\l"
	.string "of the city and you'll be on your way in\l"
	.string "no time!\n"
	.string "I'll see you around, hotshot!$"

picnicker2_intro::
	.string "Is it just me or is it a little toasty in\n"
	.string "here?$"

picnicker2_outro::
	.string "I'm burning up here!$"

youngster5_intro::
	.string "Let's take a look at your Pokémon,\n"
	.string "hotshot!$"

youngster5_outro::
	.string "That was fire!$"

lass5_intro::
	.string "Took a wrong turn, did we?$"

lass5_outro::
	.string "Maybe I was wrong to even challenge\n"
	.string "you...$"

camper5_intro::
	.string "I need to check if Patty's gonna be too\n"
	.string "sizzling hot for you!$"

camper5_outro::
	.string "Jeez! I'm all burnt out!$"

patty_intro::
	.string "Look what we have here! A fresh, young\n"
	.string "one straight from Marian!\l"
	.string "You know, it's nice to see someone from\l"
	.string "my parts around here, let's me know if\l"
	.string "ol' Spruce as been keeping up with it.\l"
	.string "Now then!\l"
	.string "Let's see if you can take the burn!$"

patty_outro::
	.string "My fiery spirit needs a rest from that...$"
