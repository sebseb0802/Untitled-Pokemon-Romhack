Route102_MapScripts::
	.byte 0

Route102_EventScript_LittleBoy::
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
	end

Route102_EventScript_RouteSignOldale::
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
	end

Route102_EventScript_RouteSignPetalburg::
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
	end

Route102_EventScript_Boy::
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
	end

Route102_EventScript_Calvin::
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_CalvinRematch
	setvar VAR_0x8004, TRAINER_CALVIN_1
	specialvar VAR_RESULT, IsTrainerRegistered
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_CalvinTryRegister
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
	release
	end

Route102_EventScript_CalvinRegisterMatchCall::
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
	register_matchcall TRAINER_CALVIN_1
	release
	end

Route102_EventScript_CalvinTryRegister::
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_CalvinRegister::
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_CALVIN_1
	release
	end

Route102_EventScript_CalvinRematch::
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Rick::
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Tiana::
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Allen::
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_Text_WatchMeCatchPokemon:
	.string "WALLY: {PLAYER}…\n"
	.string "POKéMON hide in tall grass like this,\l"
	.string "don't they?\p"
	.string "Please watch me and see if I can\n"
	.string "catch one properly.\p"
	.string "…Whoa!$"

Route102_Text_WallyIDidIt:
	.string "WALLY: I did it… It's my…\n"
	.string "My POKéMON!$"

Route102_Text_LetsGoBack:
	.string "{PLAYER}, thank you!\n"
	.string "Let's go back to the GYM!$"

Route102_Text_ImNotVeryTall:
	.string "I'm…not very tall, so I sink right\n"
	.string "into tall grass.\p"
	.string "The grass goes up my nose and…\n"
	.string "Fwafwafwafwafwa…\p"
	.string "Fwatchoo!$"

Route102_Text_CatchWholeBunchOfPokemon:
	.string "I'm going to catch a whole bunch of\n"
	.string "POKéMON!$"

Route102_Text_RouteSignOldale:
	.string "ROUTE 102\n"
	.string "{RIGHT_ARROW} OLDALE TOWN$"

Route102_Text_RouteSignPetalburg:
	.string "ROUTE 102\n"
	.string "{LEFT_ARROW} PETALBURG CITY$"

Route2_EventScript_Lass2::
	trainerbattle_single TRAINER_ROUTE_2_LASS_2, lass2_intro, lass2_outro
	return


Route2_EventScript_Youngster3::
	trainerbattle_single TRAINER_ROUTE_2_YOUNGSTER_3, youngster3_intro, youngster3_outro
	return


Route2_EventScript_Pokeball1::
	removeobject 3
	giveitem ITEM_POTION
	closemessage
	return


Route2_EventScript_Signpost::
	lock
	msgbox Route2_EventScript_Signpost_Text_0
	closemessage
	release
	end


Route2_EventScript_OldMan::
	lockall
	faceplayer
	msgbox Route2_EventScript_OldMan_Text_0
	releaseall
	end


Route2_EventScript_Rival_Upmost::
	lockall
	applymovement 5, scare_player_upmost
	waitmovement 0
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
	trainerbattle_single TRAINER_ROUTE_2_RIVAL, route2_rival_intro, route2_rival_outro, Route2_EventScript_Rival_After_Battle, NO_MUSIC
	return


Route2_EventScript_Rival_Downmost::
	lockall
	applymovement 5, scare_player_downmost
	waitmovement 0
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
	trainerbattle_single TRAINER_ROUTE_2_RIVAL, route2_rival_intro, route2_rival_outro, Route2_EventScript_Rival_After_Battle, NO_MUSIC
	return


Route2_EventScript_Rival_After_Battle::
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
	msgbox Route2_EventScript_Rival_After_Battle_Text_0
	applymovement 5, rival_contemplates
	waitmovement 0
	delay 180
	applymovement 5, rival_faces_player_again
	waitmovement 0
	msgbox Route2_EventScript_Rival_After_Battle_Text_1
	applymovement 5, route2_rival_walks_away
	waitmovement 0
	setvar VAR_BATTLED_RIVAL_ROUTE_2, 1
	setflag FLAG_RIVAL_ENCOUNTER_ROUTE_2
	fadeoutbgm 1
	playbgm MUS_DP_ROUTE203_DAY, FALSE
	removeobject 5
	releaseall
	end


scare_player_upmost:
	walk_fast_down
	walk_fast_down
	walk_fast_left
	step_end

scare_player_downmost:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_left
	step_end

rival_contemplates:
	face_right
	emote_exclamation_mark
	step_end

rival_faces_player_again:
	face_player
	step_end

route2_rival_walks_away:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Route2_EventScript_Signpost_Text_0:
	.string "{LEFT_ARROW}Kazani Village,\l{RIGHT_ARROW}Satatsu Town,\l{DOWN_ARROW}Route 10$"

Route2_EventScript_OldMan_Text_0:
	.string "Isn't it amazing to be up here on these\n"
	.string "mounds??\p"
	.string "I was so excited to be up here, that I\n"
	.string "dropped one of my Great Balls...\p"
	.string "I've looked everywhere but it's pretty\n"
	.string "hidden, I'll say. I dropped it somewhere\l"
	.string "near the hedges to our left...$"

Route2_EventScript_Rival_After_Battle_Text_0:
	.string "...\p"
	.string "WHAT?! How could I lose to someone like\n"
	.string "you??\l"
	.string "With one of my father's prized Pokémon\l"
	.string "no less.$"

Route2_EventScript_Rival_After_Battle_Text_1:
	.string "...\p"
	.string "it's no big deal...THAT'S RIGHT! No big\n"
	.string "deal! You've had way more experience\l"
	.string "with Pokémon than me. You came from\l"
	.string "Unova, after all.\l"
	.string "You must know so much already...\p"
	.string "Yes, that's why I...lost.\p"
	.string "But mark my words, {PLAYER}. I won't\n"
	.string "let this happen again.$"

lass2_intro::
	.string "Now where are you off to?$"

lass2_outro::
	.string "Too strong!!$"

youngster3_intro::
	.string "You look weak enough to me!$"

youngster3_outro::
	.string "Huh?! I was weaker?!$"

route2_rival_intro::
	.string "BOO! Hahaha, did I scare you? Pee\n"
	.string "yourself a little, did you?\p"
	.string "Haha I expected nothing less from\n"
	.string "someone like you!\l"
	.string "Let's see if you're just as weak as you\l"
	.string "seem!$"

route2_rival_outro::
	.string "My strong Pokémon wasn't good enough?!$"
