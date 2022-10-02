DewfordTown_Gym_MapScripts::
	.byte 0


RetsuGym_EventScript_BlackBelt1::
	trainerbattle_single TRAINER_RETSU_GYM_BLACK_BELT_1, Retsu_bb1_intro, Retsu_bb1_outro
	return


RetsuGym_EventScript_BlackBelt2::
	trainerbattle_single TRAINER_RETSU_GYM_BLACK_BELT_2, Retsu_bb2_intro, Retsu_bb2_outro
	return


RetsuGym_EventScript_LeaderMach::
	trainerbattle_single TRAINER_RETSU_GYM_LEADER_MACH, Retsu_mach_intro, Retsu_mach_outro, RetsuGym_EventScript_LeaderMach_After_Battle, NO_MUSIC
	return


RetsuGym_EventScript_LeaderMach_After_Battle::
	lockall
	msgbox RetsuGym_EventScript_LeaderMach_After_Battle_Text_0
	playfanfare MUS_HG_OBTAIN_BADGE
	msgbox RetsuGym_EventScript_LeaderMach_After_Battle_Text_1
	waitfanfare
	setflag FLAG_BADGE01_GET
	clearflag FLAG_MET_EGOR
	msgbox RetsuGym_EventScript_LeaderMach_After_Battle_Text_2
	giveitem ITEM_TM08_BULK_UP
	msgbox RetsuGym_EventScript_LeaderMach_After_Battle_Text_3
	setvar VAR_Retsu_SPOKEN_WITH_EGOR, 1
	setvar VAR_GOTTEN_FIRST_BADGE, 1
	closemessage
	releaseall
	return


RetsuGym_EventScript_LeaderMach_After_Battle_Text_0:
	.string "Brilliant!\p"
	.string "Both you and your Pokémon showed\n"
	.string "excellent determination and passion\l"
	.string "for our battle just now!\l"
	.string "Those are some excellent qualities for\l"
	.string "a trainer to have and I can sense that\l"
	.string "you and your Pokémon will go far.\p"
	.string "Ahem...Here's the Counter Badge!$"

RetsuGym_EventScript_LeaderMach_After_Battle_Text_1:
	.string "{PLAYER} got the Counter Badge from\n"
	.string "Mach!$"

RetsuGym_EventScript_LeaderMach_After_Battle_Text_2:
	.string "Also, take this TM!$"

RetsuGym_EventScript_LeaderMach_After_Battle_Text_3:
	.string "Bulk Up lets your Pokémon toughen up\n"
	.string "before taking and/or dealing a hit.\l"
	.string "A very useful move indeed!\p"
	.string "I wish you the best of luck in your\n"
	.string "future endevours.$"

Retsu_bb1_intro::
	.string "My father trained my brother and I well!\n"
	.string "I'll prove it to you now!$"

Retsu_bb1_outro::
	.string "I respect your strength.$"

Retsu_bb2_intro::
	.string "You made it past my brother? I'll stop\n"
	.string "you then!$"

Retsu_bb2_outro::
	.string "I wish you luck for your battle ahead.$"

Retsu_mach_intro::
	.string "Ah, {PLAYER}!\l"
	.string "Did I surprise you? Yes, that's right!\l"
	.string "It's me, the Chief of Katsikki Village!\p"
	.string "I used to do a lot of battling when I\n"
	.string "was younger but now I limit it just to\l"
	.string "gym challengers, such as yourself.\p"
	.string "Well then, let's get this battle\n"
	.string "underway!\l"
	.string "Give it your all, {PLAYER}, and I'll do\l"
	.string "the same!$"

Retsu_mach_outro::
	.string "Truly remarkable strength.$"
