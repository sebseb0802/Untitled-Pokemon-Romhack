DewfordTown_Gym_MapScripts::
	.byte 0


SatatsuGym_EventScript_BlackBelt1::
	trainerbattle_single TRAINER_SATATSU_GYM_BLACK_BELT_1, satatsu_bb1_intro, satatsu_bb1_outro
	return


SatatsuGym_EventScript_BlackBelt2::
	trainerbattle_single TRAINER_SATATSU_GYM_BLACK_BELT_2, satatsu_bb2_intro, satatsu_bb2_outro
	return


SatatsuGym_EventScript_LeaderMach::
	trainerbattle_single TRAINER_SATATSU_GYM_LEADER_MACH, satatsu_mach_intro, satatsu_mach_outro, SatatsuGym_EventScript_LeaderMach_After_Battle, NO_MUSIC
	return


SatatsuGym_EventScript_LeaderMach_After_Battle::
	lockall
	msgbox SatatsuGym_EventScript_LeaderMach_After_Battle_Text_0
	playfanfare MUS_HG_OBTAIN_BADGE
	msgbox SatatsuGym_EventScript_LeaderMach_After_Battle_Text_1
	waitfanfare
	setflag FLAG_BADGE01_GET
	clearflag FLAG_MET_EGOR
	msgbox SatatsuGym_EventScript_LeaderMach_After_Battle_Text_2
	giveitem ITEM_TM08_BULK_UP
	msgbox SatatsuGym_EventScript_LeaderMach_After_Battle_Text_3
	setvar VAR_SATATSU_SPEAK_WITH_EGOR, 0
	setvar VAR_GOTTEN_FIRST_BADGE, 1
	closemessage
	releaseall
	return


SatatsuGym_EventScript_LeaderMach_After_Battle_Text_0:
	.string "Brilliant!\p"
	.string "Both you and your Pokémon showed\n"
	.string "excellent determination and passion\l"
	.string "for our battle just now!\l"
	.string "Those are some excellent qualities for\l"
	.string "a trainer to have and I can sense that\l"
	.string "you and your Pokémon will go far.\p"
	.string "Ahem...Here's the Counter Badge!$"

SatatsuGym_EventScript_LeaderMach_After_Battle_Text_1:
	.string "{PLAYER} got the Counter Badge from\n"
	.string "Mach!$"

SatatsuGym_EventScript_LeaderMach_After_Battle_Text_2:
	.string "Also, take this TM!$"

SatatsuGym_EventScript_LeaderMach_After_Battle_Text_3:
	.string "Bulk Up lets your Pokémon toughen up\n"
	.string "before taking and/or dealing a hit.\l"
	.string "A very useful move indeed!\p"
	.string "I wish you the best of luck in your\n"
	.string "future endevours.$"

satatsu_bb1_intro::
	.string "My father trained my brother and I well\n"
	.string "and I'll prove it to you now!$"

satatsu_bb1_outro::
	.string "I respect your strength.$"

satatsu_bb2_intro::
	.string "You made it past my brother? I'll stop\n"
	.string "you then!$"

satatsu_bb2_outro::
	.string "I wish you luck for your battle ahead.$"

satatsu_mach_intro::
	.string "Ah, {PLAYER}!\l"
	.string "Did I surprise you? Yes, that's right!\l"
	.string "It's me, the Chief of Kazani Village!\p"
	.string "I used to do a lot of battling when I\n"
	.string "was younger but now I limit it just to\l"
	.string "gym challengers, such as yourself.\p"
	.string "Well then, let's get this battle\n"
	.string "underway!\l"
	.string "Give it your all, {PLAYER}, and I'll do\l"
	.string "the same!$"

satatsu_mach_outro::
	.string "Truly remarkable strength.$"
