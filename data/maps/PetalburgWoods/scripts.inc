PetalburgWoods_MapScripts::
	.byte 0

LamintineForest_EventScript_Pokeball1::
	setflag FLAG_LAMINTINE_FOREST_POKEBALL_1
	removeobject 4
	giveitem ITEM_RAWST_BERRY
	closemessage
	return


LamintineForest_EventScript_BugCatcher1::
	trainerbattle_single TRAINER_LAMINTINE_FOREST_BUG_CATCHER_1, bugcatcher1_intro, bugcatcher1_outro
	return


LamintineForest_EventScript_BugCatcher2::
	trainerbattle_single TRAINER_LAMINTINE_FOREST_BUG_CATCHER_2, bugcatcher2_intro, bugcatcher2_outro
	return


LamintineForest_EventScript_Lass4::
	trainerbattle_single TRAINER_LAMINTINE_FOREST_LASS_4, lass4_intro, lass4_outro
	return


bugcatcher1_intro::
	.string "Some people say that bug types are\n"
	.string "weak! I think they're the best type\l"
	.string "there is!$"

bugcatcher1_outro::
	.string "Still the best type...$"

bugcatcher2_intro::
	.string "This forest is filled to the brim with\n"
	.string "awesome bug types!$"

lass4_intro::
	.string "You may think all of these bugs creep\n"
	.string "me out... but I just love them!$"

lass4_outro::
	.string "Such strong Pokémon!$"

bugcatcher2_outro::
	.string "You seem like someone who'd enjoy bug\n"
	.string "types too!$"
