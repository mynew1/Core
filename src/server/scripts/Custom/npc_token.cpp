#include "ScriptPCH.h"

class npc_support : public CreatureScript
{
	public:
		npc_support() : CreatureScript("npc_support")
		{
		}

		bool OnGossipHello(Player * pPlayer, Creature * pCreature)
		{
		    pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/INV_Misc_Coin_05:30|t Morphs", GOSSIP_SENDER_MAIN, 0);
			pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/INV_Misc_Coin_05:30|t Titles", GOSSIP_SENDER_MAIN, 1);
			pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/INV_Misc_Coin_05:30|t Mounts", GOSSIP_SENDER_MAIN, 2);
			pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/INV_Misc_Coin_05:30|t Buffs", GOSSIP_SENDER_MAIN, 3);
			pPlayer->ADD_GOSSIP_ITEM(4, "____________________________________", GOSSIP_SENDER_MAIN, 9999);
			pPlayer->ADD_GOSSIP_ITEM(4, "How do I get VIP acc?", GOSSIP_SENDER_MAIN, 400);
			pPlayer->ADD_GOSSIP_ITEM(4, "How do I make a ticket?", GOSSIP_SENDER_MAIN, 500);
			pPlayer->ADD_GOSSIP_ITEM(4, "How do I get Shadowmourne?", GOSSIP_SENDER_MAIN, 600);
			pPlayer->ADD_GOSSIP_ITEM(4, "What have on VIP account?", GOSSIP_SENDER_MAIN, 700);
			pPlayer->ADD_GOSSIP_ITEM(0, "Nevermind...", GOSSIP_SENDER_MAIN, 800);
			pPlayer->PlayerTalkClass->SendGossipMenu(9425, pCreature->GetGUID());
			return true;
		}

		bool OnGossipSelect(Player * pPlayer, Creature * pCreature, uint32 /*uiSender*/, uint32 uiAction)
		{
			if(!pPlayer)
				return true;
			
			switch(uiAction)
			{
			  {
                case 0:
                    pPlayer->PlayerTalkClass->ClearMenus();
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/Achievement_Arena_2v2_7:30|t Blood Elf Female (25 PvP Tokens)", GOSSIP_SENDER_MAIN, 4);
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/Achievement_Arena_2v2_7:30|t Blood Elf Male (25 PvP Tokens)", GOSSIP_SENDER_MAIN, 5);
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/Achievement_Arena_2v2_7:30|t Gnome Female (25 PvP Tokens)", GOSSIP_SENDER_MAIN, 6);
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/Achievement_Arena_2v2_7:30|t Gnome Male (25 PvP Tokens)", GOSSIP_SENDER_MAIN, 7);
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/Achievement_Arena_2v2_7:30|t Human Female (25 PvP Tokens)", GOSSIP_SENDER_MAIN, 8);
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/Achievement_Arena_2v2_7:30|t Human Male (25 PvP Tokens)", GOSSIP_SENDER_MAIN, 9);
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/Achievement_Arena_2v2_7:30|t Tauren Female (25 PvP Tokens)", GOSSIP_SENDER_MAIN, 10);
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/Achievement_Arena_2v2_7:30|t Tauren Male (25 PvP Tokens)", GOSSIP_SENDER_MAIN, 11);
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/Achievement_Arena_2v2_7:30|t Undead Pirate (50 PvP Tokens)", GOSSIP_SENDER_MAIN, 12);
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/Achievement_Arena_2v2_7:30|t Etherial (50 PvP Tokens)", GOSSIP_SENDER_MAIN, 13);
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/Achievement_Arena_2v2_7:30|t Mad Scientist (50 PVP Tokens)", GOSSIP_SENDER_MAIN, 14);
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/Achievement_Arena_2v2_7:30|t Tatooed Man (50 PvP Tokens)", GOSSIP_SENDER_MAIN, 15);
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/Achievement_Arena_2v2_7:30|t Necromancer (50 PvP Tokens)", GOSSIP_SENDER_MAIN, 16);
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/Achievement_Arena_2v2_7:30|t Skeletal Mage (50 PvP Tokens)", GOSSIP_SENDER_MAIN, 17);
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/Achievement_Arena_2v2_7:30|t Frost Troll (50 PvP Tokens)", GOSSIP_SENDER_MAIN, 18);
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/Achievement_Arena_2v2_7:30|t Blood Elf Demon Girl (50 PvP Tokens)", GOSSIP_SENDER_MAIN, 19);
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/Achievement_Arena_2v2_7:30|t Human 19 Twink (50 PvP Tokens)", GOSSIP_SENDER_MAIN, 20);
                    pPlayer->ADD_GOSSIP_ITEM(8, "|TInterface/ICONS/Achievement_Arena_2v2_7:30|t Undead 19 Twink (50 PvP Tokens)", GOSSIP_SENDER_MAIN, 21);
 
                    }
                    pPlayer->PlayerTalkClass->SendGossipMenu(9452, pCreature->GetGUID());          
                break;
                               
                case 1:
                    pPlayer->PlayerTalkClass->ClearMenus();
                    pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/Achievement_Arena_3v3_5:30|t Assasin (250 PvP Tokens)", GOSSIP_SENDER_MAIN, 22);
                    pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/Achievement_Arena_3v3_5:30|t Malefic (250 PvP Tokens)", GOSSIP_SENDER_MAIN, 23);
                    pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/Achievement_Arena_3v3_5:30|t Forsaken (250 PvP Tokens)", GOSSIP_SENDER_MAIN, 24);
                    pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/Achievement_Arena_3v3_5:30|t Crusader (250 PvP Tokens)", GOSSIP_SENDER_MAIN, 25);
                    pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/Achievement_Arena_3v3_5:30|t Starcaller (250 PvP Tokens)", GOSSIP_SENDER_MAIN, 26);
                    pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/Achievement_Arena_3v3_5:30|t The Seeker (250 PvP Tokens)", GOSSIP_SENDER_MAIN, 27);
                    pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/Achievement_Arena_3v3_5:30|t Bane of the Fallen King (250 PvP Tokens)", GOSSIP_SENDER_MAIN, 28);
                    pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/Achievement_Arena_3v3_5:30|t The Light of Dawn (250 PvP Tokens)", GOSSIP_SENDER_MAIN, 29);
                    pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/Achievement_Arena_3v3_5:30|t Elder (250 PvP Tokens)", GOSSIP_SENDER_MAIN, 30);
                    pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/Achievement_Arena_3v3_5:30|t Scarab LordThe Insane (250 PvP Tokens)", GOSSIP_SENDER_MAIN, 31);
					pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/Achievement_Arena_3v3_5:30|t Vanquisher (500 PvP Tokens)", GOSSIP_SENDER_MAIN, 32);
					pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/Achievement_Arena_3v3_5:30|t Hand of A'dal (500 PvP Tokens)", GOSSIP_SENDER_MAIN, 33);
					pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/Achievement_Arena_3v3_5:30|t Champion of the Naaru (500 PvP Tokens)", GOSSIP_SENDER_MAIN, 34);
					pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/Achievement_Arena_3v3_5:30|t Death's Demise (750 PvP Tokens)", GOSSIP_SENDER_MAIN, 35);
					pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/Achievement_Arena_3v3_5:30|t The Insane (750 PvP Tokens)", GOSSIP_SENDER_MAIN, 36);
                    if (pPlayer->getFaction() == ALLIANCE)
                    {
                        pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/Achievement_Arena_3v3_5:30|t of the Alliance (1000 PvP Tokens)", GOSSIP_SENDER_MAIN, 37);
                    }
                    if (pPlayer->getFaction() == HORDE)
                    {
                        pPlayer->ADD_GOSSIP_ITEM(4, "|TInterface/ICONS/Achievement_Arena_3v3_5:30|t of the Horde (1000 PvP Tokens)", GOSSIP_SENDER_MAIN, 38);
                    }
                    pPlayer->PlayerTalkClass->SendGossipMenu(9452, pCreature->GetGUID());
                    break;
                               
                    case 2:
                        pPlayer->PlayerTalkClass->ClearMenus();
                        pPlayer->ADD_GOSSIP_ITEM(7, "|TInterface/ICONS/Achievement_Arena_3v3_5:30|t White Polar Bear (250 PvP Tokens)", GOSSIP_SENDER_MAIN, 39);
                        pPlayer->ADD_GOSSIP_ITEM(7, "|TInterface/ICONS/Achievement_Arena_3v3_5:30|t Ancient Frostsaber (250 PvP Tokens)", GOSSIP_SENDER_MAIN, 40);
                        pPlayer->ADD_GOSSIP_ITEM(7, "|TInterface/ICONS/Achievement_Arena_3v3_5:30|t Big Battle Bear (250 PvP Tokens)", GOSSIP_SENDER_MAIN, 41);
                        pPlayer->ADD_GOSSIP_ITEM(7, "|TInterface/ICONS/Achievement_Arena_3v3_5:30|t Celestial Steed (250 PvP Tokens)", GOSSIP_SENDER_MAIN, 42);
                        pPlayer->ADD_GOSSIP_ITEM(7, "|TInterface/ICONS/Achievement_Arena_3v3_5:30|t Swift Magic Broom (500 PvP Tokens)", GOSSIP_SENDER_MAIN, 43);
                        pPlayer->ADD_GOSSIP_ITEM(7, "|TInterface/ICONS/Achievement_Arena_3v3_5:30|t Raven Lord (500 PVP Tokens)", GOSSIP_SENDER_MAIN, 44);
                        pPlayer->ADD_GOSSIP_ITEM(7, "|TInterface/ICONS/Achievement_Arena_3v3_5:30|t Amani War Bear (500 PvP Tokens)", GOSSIP_SENDER_MAIN, 45);
						pPlayer->ADD_GOSSIP_ITEM(7, "|TInterface/ICONS/Achievement_Arena_3v3_5:30|t Wooly White Rhino (750 PvP Tokens)", GOSSIP_SENDER_MAIN, 46);
						pPlayer->ADD_GOSSIP_ITEM(7, "|TInterface/ICONS/Achievement_Arena_3v3_5:30|t Magic Rooster Egg (750 PVP Tokens)", GOSSIP_SENDER_MAIN, 47);
						pPlayer->ADD_GOSSIP_ITEM(7, "|TInterface/ICONS/Achievement_Arena_3v3_5:30|t Tallstrider Egg (750 PvP Tokens)", GOSSIP_SENDER_MAIN, 48);
                        pPlayer->PlayerTalkClass->SendGossipMenu(9452, pCreature->GetGUID());
                    break;
                               
                    case 3:
                        pPlayer->PlayerTalkClass->ClearMenus();
                        pPlayer->ADD_GOSSIP_ITEM(9, "|TInterface/ICONS/Achievement_Arena_3v3_5:30|t Power Word: Fortitude (15 PvP Tokens)", GOSSIP_SENDER_MAIN, 49);
                        pPlayer->ADD_GOSSIP_ITEM(9, "|TInterface/ICONS/Achievement_Arena_3v3_5:30|t Arcane Intellect (15 PvP Tokens)", GOSSIP_SENDER_MAIN, 50);
                        pPlayer->ADD_GOSSIP_ITEM(9, "|TInterface/ICONS/Achievement_Arena_3v3_5:30|t Divine Spirit (15 PvP Tokens)", GOSSIP_SENDER_MAIN, 51);
                        pPlayer->ADD_GOSSIP_ITEM(9, "|TInterface/ICONS/Achievement_Arena_3v3_5:30|t Mark of the Wild (15 PvP Tokens)", GOSSIP_SENDER_MAIN, 52);
						pPlayer->ADD_GOSSIP_ITEM(9, "|TInterface/ICONS/Achievement_Arena_3v3_5:30|t Blessing of Kings (15 PvP Tokens)", GOSSIP_SENDER_MAIN, 53);
						pPlayer->ADD_GOSSIP_ITEM(9, "|TInterface/ICONS/Achievement_Arena_3v3_5:30|t Blessing of Might (15 PvP Tokens)", GOSSIP_SENDER_MAIN, 54);
						pPlayer->ADD_GOSSIP_ITEM(9, "|TInterface/ICONS/Achievement_Arena_3v3_5:30|t Blessing of Wisdow (15 PvP Tokens)", GOSSIP_SENDER_MAIN, 55);
                        pPlayer->PlayerTalkClass->SendGossipMenu(9452, pCreature->GetGUID());
                    break;

					case 4:
                        if (pPlayer->HasItemCount(29434, 25, true))
                        {
                            pPlayer->DestroyItemCount(29434, 25, true);
                            pPlayer->SetDisplayId(20370);
                            pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 1);
                            pPlayer->CLOSE_GOSSIP_MENU();
                            ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been Morphed into a Female Blood Elf.", pPlayer -> GetGUID());
                        }
                        else
                        {
                            pPlayer->CLOSE_GOSSIP_MENU();
                            ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer -> GetGUID());
                        }
                    break;
                               
                    case 5:
                        if (pPlayer->HasItemCount(29434, 25, true))
                        {
                            pPlayer->DestroyItemCount(29434, 25, true);
                            pPlayer->SetDisplayId(20369);
                            pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 1);
                            pPlayer->CLOSE_GOSSIP_MENU();
                            ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been Morphed into a Male Blood Elf.", pPlayer -> GetGUID());
                        }
                        else
                        {
                            pPlayer->CLOSE_GOSSIP_MENU();
                            ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer -> GetGUID());
                        }
                    break;
                               
                    case 6:
                        if (pPlayer->HasItemCount(29434, 25, true))
                        {
                            pPlayer->DestroyItemCount(29434, 25, true);
                            pPlayer->SetDisplayId(20320);
                            pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 1);
                            pPlayer->CLOSE_GOSSIP_MENU();
                            ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been Morphed into a Gnome Female.", pPlayer -> GetGUID());
                        }
                        else
                        {
                            pPlayer->CLOSE_GOSSIP_MENU();
                            ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer -> GetGUID());
                        }
                   break;
                               
                   case 7:
                       if (pPlayer->HasItemCount(29434, 25, true))
                       {
                           pPlayer->DestroyItemCount(29434, 25, true);
                           pPlayer->SetDisplayId(20580);
                           pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 1);
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been Morphed into a Gnome Male.", pPlayer -> GetGUID());
                       }
                       else
                       {
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer -> GetGUID());
                       }
                   break;
 
                   case 8:
                       if (pPlayer->HasItemCount(29434, 25, true))
                       { 
                           pPlayer->DestroyItemCount(29434, 25, true);
                           pPlayer->SetDisplayId(19724);
                           pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 1);
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been Morphed into a Human Female.", pPlayer -> GetGUID());
                       }
                       else
                       { 
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer -> GetGUID());
                       }
                   break;
                               
                   case 9:
                       if (pPlayer->HasItemCount(29434, 25, true))
                       {
                           pPlayer->DestroyItemCount(29434, 25, true);
                           pPlayer->SetDisplayId(19723);
                           pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 1);
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been Morphed into a Human Male.", pPlayer -> GetGUID());
                       }
                       else
                       {
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer -> GetGUID());
                       }
                   break;
                               
                   case 10:
                       if (pPlayer->HasItemCount(29434, 25, true))
                       {
                           pPlayer->DestroyItemCount(29434, 25, true);
                           pPlayer->SetDisplayId(20584);
                           pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 1);
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been Morphed into a Tauren Female.", pPlayer -> GetGUID());
                       }
                       else
                       {
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer -> GetGUID());
                       }
                   break;
                               
                   case 11:
                       if (pPlayer->HasItemCount(29434, 25, true))
                       {
                           pPlayer->DestroyItemCount(29434, 25, true);
                           pPlayer->SetDisplayId(20319);
                           pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 1);
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been Morphed into a Tauren Male", pPlayer -> GetGUID());
                       }
                       else
                       {
                          pPlayer->CLOSE_GOSSIP_MENU();
                          ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer -> GetGUID());
                       }
                   break;
 
                   case 12:
                       if (pPlayer->HasItemCount(29434, 50, true))
                       {
                           pPlayer->DestroyItemCount(29434, 25, true);
                           pPlayer->SetDisplayId(25042);
                           pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 1);
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been Morphed into a Undead Pirate", pPlayer -> GetGUID());
                       }
                       else
                       {
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer -> GetGUID());
                       }
                   break;
                               
                   case 13:
                       if (pPlayer->HasItemCount(29434, 50, true))
                       {
                           pPlayer->DestroyItemCount(29434, 50, true);
                           pPlayer->SetDisplayId(24942);
                           pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 1);
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been Morphed into a Etherial", pPlayer -> GetGUID());
                       }
                       else
                       {
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer -> GetGUID());
                       }
                   break;
                               
                   case 14:
                       if (pPlayer->HasItemCount(29434, 50, true))
                       {
                           pPlayer->DestroyItemCount(29434, 50, true);
                           pPlayer->SetDisplayId(23875);
                           pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 1);
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been Morphed into a Mad Scientist", pPlayer -> GetGUID());
                       }
                       else
                       {
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer -> GetGUID());
                       }
                   break;
                               
                   case 15:
                       if (pPlayer->HasItemCount(29434, 50, true))
                       {
                           pPlayer->DestroyItemCount(29434, 50, true);
                           pPlayer->SetDisplayId(22634);
                           pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 0.5);
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been Morphed into a Tattooed Man", pPlayer -> GetGUID());
                       }
                       else
                       {
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer -> GetGUID());
                       }
                   break;
 
                   case 16:
                       if (pPlayer->HasItemCount(29434, 50, true))
                       {
                           pPlayer->DestroyItemCount(29434, 50, true);
                           pPlayer->SetDisplayId(24793);
                           pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 1);
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been Morphed into a Necromancer", pPlayer -> GetGUID());
                       }
                       else
                       {
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer -> GetGUID());
                       }
                   break;
                               
                   case 17:
                       if (pPlayer->HasItemCount(29434, 50, true))
                       {
                           pPlayer->DestroyItemCount(29434, 50, true);
                           pPlayer->SetDisplayId(24495);
                           pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 0.7f);
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been Morphed into a Skeletal Mage", pPlayer -> GetGUID());
                       }
                       else
                       {
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer -> GetGUID());
					   }
                   break;
                               
                   case 18:
                       if (pPlayer->HasItemCount(29434, 50, true))
                       {
                           pPlayer->DestroyItemCount(29434, 50, true);
                           pPlayer->SetDisplayId(24938);
                           pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 1);
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been Morphed into a Frost Troll", pPlayer -> GetGUID());
                       }
                       else
                       {
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer -> GetGUID());
                       }
                   break;
                               
                   case 19:
                       if (pPlayer->HasItemCount(29434, 50, true))
                       {
                           pPlayer->DestroyItemCount(29434, 50, true);
                           pPlayer->SetDisplayId(24930);
                           pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 1);
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been Morphed into a BELF Demon Girl", pPlayer -> GetGUID());
                       }
                       else
                       {
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer -> GetGUID());
                       }
                   break;
 
                   case 20:
                       if (pPlayer->HasItemCount(29434, 50, true))
                       {
                           pPlayer->DestroyItemCount(29434, 50, true);
                           pPlayer->SetDisplayId(29796);
                           pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 1);
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been Morphed into a Human 19 Twink", pPlayer -> GetGUID());
                       }
                       else
                       {
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer -> GetGUID());
                       }
                   break;
 
                   case 21:
                       if (pPlayer->HasItemCount(29434, 50, true))
                       {
                           pPlayer->DestroyItemCount(29434, 50, true);
                           pPlayer->SetDisplayId(29795);
                           pPlayer->SetFloatValue(OBJECT_FIELD_SCALE_X, 1);
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been Morphed into a Undead 19 Twink", pPlayer -> GetGUID());
                       }
                       else
                       {
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer -> GetGUID());
                       }
                   break;
 
                   case 22:
                       if (pPlayer->HasItemCount(29434, 250, true))
                       {
                           pPlayer->DestroyItemCount(29434, 250, true);
                           CharTitlesEntry const* titleInfo = sCharTitlesStore.LookupEntry(95);
                           pPlayer->SetTitle(titleInfo, false);
                           pPlayer->CLOSE_GOSSIP_MENU();
						   ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been added the title Assasin!", pPlayer -> GetGUID());
                       }
                       else
                       {
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer->GetGUID());
                       }
                   break;
                               
                   case 23:
                       if (pPlayer->HasItemCount(29434, 250, true))
                       {
                           pPlayer->DestroyItemCount(29434, 250, true);
                           CharTitlesEntry const* titleInfo = sCharTitlesStore.LookupEntry(90);
                           pPlayer->SetTitle(titleInfo, false);
                           pPlayer->CLOSE_GOSSIP_MENU();
						   ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been added the title the Malefic", pPlayer -> GetGUID());
                       }
                       else
                       {
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer->GetGUID());
                       }
                   break;
                               
                   case 24:
                       if (pPlayer->HasItemCount(29434, 250, true))
                       {
                           pPlayer->DestroyItemCount(29434, 250, true);
                           CharTitlesEntry const* titleInfo = sCharTitlesStore.LookupEntry(119);
                           pPlayer->SetTitle(titleInfo, false);
                           pPlayer->CLOSE_GOSSIP_MENU();
						   ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been added the title the Forsaken", pPlayer -> GetGUID());
                       }
                       else
                       {
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer->GetGUID());
                       }
                   break;
                               
                   case 25:
                       if (pPlayer->HasItemCount(29434, 250, true))
                       {
                           pPlayer->DestroyItemCount(29434, 250, true);
                           CharTitlesEntry const* titleInfo = sCharTitlesStore.LookupEntry(156);
                           pPlayer->SetTitle(titleInfo, false);
                           pPlayer->CLOSE_GOSSIP_MENU();
						   ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been added the title Crusader", pPlayer -> GetGUID());
					   }
                       else
                       {
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer->GetGUID());
                       }
                   break;
                               
                   case 26:
                       if (pPlayer->HasItemCount(29434, 250, true))
                       {
                           pPlayer->DestroyItemCount(29434, 250, true);
                           CharTitlesEntry const* titleInfo = sCharTitlesStore.LookupEntry(164);
                           pPlayer->SetTitle(titleInfo, false);
                           pPlayer->CLOSE_GOSSIP_MENU();
						   ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been added the title Starcaller", pPlayer -> GetGUID());
                       }
                       else
                       {
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer->GetGUID());
                       }
                   break;
                               
                   case 27:
                       if (pPlayer->HasItemCount(29434, 250, true))
                       {
                           pPlayer->DestroyItemCount(29434, 250, true);
                           CharTitlesEntry const* titleInfo = sCharTitlesStore.LookupEntry(81);
                           pPlayer->SetTitle(titleInfo, false);
                           pPlayer->CLOSE_GOSSIP_MENU();
						   ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been added the title the Seeker", pPlayer -> GetGUID());
                       }
                       else
                       {
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer->GetGUID());
                       }
                   break;
                               
                   case 28:
                       if (pPlayer->HasItemCount(29434, 250, true))
                       {
                           pPlayer->DestroyItemCount(29434, 250, true);
                           CharTitlesEntry const* titleInfo = sCharTitlesStore.LookupEntry(174);
                           pPlayer->SetTitle(titleInfo, false);
                           pPlayer->CLOSE_GOSSIP_MENU();
						   ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been added the title Bane of the Fallen King", pPlayer -> GetGUID());
                       }
                       else
                       {
                           pPlayer->CLOSE_GOSSIP_MENU();
                           ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer->GetGUID());
                       }
                  break;
                               
                  case 29:
                      if (pPlayer->HasItemCount(29434, 250, true))
                      {
                          pPlayer->DestroyItemCount(29434, 250, true);
                          CharTitlesEntry const* titleInfo = sCharTitlesStore.LookupEntry(173);
                          pPlayer->SetTitle(titleInfo, false);
                          pPlayer->CLOSE_GOSSIP_MENU();
						  ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been added the title the Light of Dawn", pPlayer -> GetGUID());
                      }
                      else
                      {
                          pPlayer->CLOSE_GOSSIP_MENU();
                          ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer->GetGUID());
                      }
                  break;
 
                  case 30:
                      if (pPlayer->HasItemCount(29434, 250, true))
                      {
                          pPlayer->DestroyItemCount(29434, 250, true);
                          CharTitlesEntry const* titleInfo = sCharTitlesStore.LookupEntry(74);
                          pPlayer->SetTitle(titleInfo, false);
                          pPlayer->CLOSE_GOSSIP_MENU();
						  ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been added the title Elder", pPlayer -> GetGUID());
                      }
                      else
                      {
                          pPlayer->CLOSE_GOSSIP_MENU();
                          ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer->GetGUID());
                      }
                  break;
 
                  case 31:
                      if (pPlayer->HasItemCount(29434, 250, true))
                      {
                          pPlayer->DestroyItemCount(29434, 250, true);
                          CharTitlesEntry const* titleInfo = sCharTitlesStore.LookupEntry(46);
                          pPlayer->SetTitle(titleInfo, false);
                          pPlayer->CLOSE_GOSSIP_MENU();
						  ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been added the title Scarab Lord", pPlayer -> GetGUID());
                      }
                      else
                      {
                          pPlayer->CLOSE_GOSSIP_MENU();
                          ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer->GetGUID());
                      }
                  break;
 
                  case 32:
                      if (pPlayer->HasItemCount(29434, 500, true))
                      {
                          pPlayer->DestroyItemCount(29434, 500, true);
                          CharTitlesEntry const* titleInfo = sCharTitlesStore.LookupEntry(163);
                          pPlayer->SetTitle(titleInfo, false);
                          pPlayer->CLOSE_GOSSIP_MENU();
						  ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been added the title Vanquisher", pPlayer -> GetGUID());
                      }
                      else
                      {
                          pPlayer->CLOSE_GOSSIP_MENU();
                          ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer->GetGUID());
                      }
                  break;
 
                  case 33:
                     if (pPlayer->HasItemCount(29434, 500, true))
                     {
                         pPlayer->DestroyItemCount(29434, 500, true);
                         CharTitlesEntry const* titleInfo = sCharTitlesStore.LookupEntry(64);
                         pPlayer->SetTitle(titleInfo, false);
                         pPlayer->CLOSE_GOSSIP_MENU();
						 ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been added the title Hand of A'dal", pPlayer -> GetGUID());
                     }
                     else
                     {
                         pPlayer->CLOSE_GOSSIP_MENU();
                         ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer->GetGUID());
                     }
                 break;

				 case 34:
                     if (pPlayer->HasItemCount(29434, 500, true))
                     {
                         pPlayer->DestroyItemCount(29434, 500, true);
                         CharTitlesEntry const* titleInfo = sCharTitlesStore.LookupEntry(53);
                         pPlayer->SetTitle(titleInfo, false);
                         pPlayer->CLOSE_GOSSIP_MENU();
						 ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been added the title Champion of the Naaru", pPlayer -> GetGUID());
                     }
                     else
                     {
                         pPlayer->CLOSE_GOSSIP_MENU();
                         ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer->GetGUID());
                     }
                 break;

				 case 35:
                     if (pPlayer->HasItemCount(29434, 750, true))
                     {
                         pPlayer->DestroyItemCount(29434, 750, true);
                         CharTitlesEntry const* titleInfo = sCharTitlesStore.LookupEntry(158);
                         pPlayer->SetTitle(titleInfo, false);
                         pPlayer->CLOSE_GOSSIP_MENU();
						 ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been added the title Death's Demise", pPlayer -> GetGUID());
                     }
                     else
                     {
                         pPlayer->CLOSE_GOSSIP_MENU();
                         ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer->GetGUID());
                     }
                 break;

				 case 36:
                     if (pPlayer->HasItemCount(29434, 750, true))
                     {
                         pPlayer->DestroyItemCount(29434, 750, true);
                         CharTitlesEntry const* titleInfo = sCharTitlesStore.LookupEntry(145);
                         pPlayer->SetTitle(titleInfo, false);
                         pPlayer->CLOSE_GOSSIP_MENU();
						 ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been added the title the Insane", pPlayer -> GetGUID());
                     }
                     else
                     {
                         pPlayer->CLOSE_GOSSIP_MENU();
                         ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer->GetGUID());
                     }
                 break;

				 case 37:
                     if (pPlayer->HasItemCount(29434, 1000, true))
                     {
                         pPlayer->DestroyItemCount(29434, 1000, true);
                         CharTitlesEntry const* titleInfo = sCharTitlesStore.LookupEntry(126);
                         pPlayer->SetTitle(titleInfo, false);
                         pPlayer->CLOSE_GOSSIP_MENU();
						 ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been added the title of the Alliance", pPlayer -> GetGUID());
                     }
                     else
                     {
                         pPlayer->CLOSE_GOSSIP_MENU();
                         ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer->GetGUID());
                     }
                 break;

				 case 38:
                     if (pPlayer->HasItemCount(29434, 1000, true))
                     {
                         pPlayer->DestroyItemCount(29434, 1000, true);
                         CharTitlesEntry const* titleInfo = sCharTitlesStore.LookupEntry(64);
                         pPlayer->SetTitle(titleInfo, false);
                         pPlayer->CLOSE_GOSSIP_MENU();
						 ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been added the title of the Horde", pPlayer -> GetGUID());
                     }
                     else
                     {
                         pPlayer->CLOSE_GOSSIP_MENU();
                         ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer->GetGUID());
                     }
                 break;

				 case 39:
                     if (pPlayer->HasItemCount(29434, 250, true))
                     {
                         pPlayer->DestroyItemCount(29434, 250, true);
                         pPlayer->AddItem(43962,1);
                         pPlayer->CLOSE_GOSSIP_MENU();
						 ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been added the White Polar Bear", pPlayer -> GetGUID());
                     }
                     else
                     {
                         pPlayer->CLOSE_GOSSIP_MENU();
                         ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer->GetGUID());
                     }
                 break;
 
                 case 40:
                     if (pPlayer->HasItemCount(29434, 250, true))
                     {
                         pPlayer->DestroyItemCount(29434, 250, true);
                         pPlayer->AddItem(12302,1);
                         pPlayer->CLOSE_GOSSIP_MENU();
						 ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been added the Ancient Frostsaber", pPlayer -> GetGUID());
                     }
                     else
                     {
                         pPlayer->CLOSE_GOSSIP_MENU();
                         ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer->GetGUID());
                     }
                 break;
 
                 case 41:
                     if (pPlayer->HasItemCount(29434, 250, true))
                     {
                         pPlayer->DestroyItemCount(29434, 250, true);
                         pPlayer->AddItem(38576,1);
                         pPlayer->CLOSE_GOSSIP_MENU();
						 ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been added the Big Battle Bear", pPlayer -> GetGUID());
                     }
                     else
                     {
                         pPlayer->CLOSE_GOSSIP_MENU();
                         ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer->GetGUID());
                     }
                 break;
 
                 case 42:
                     if (pPlayer->HasItemCount(29434, 250, true))
                     {
                         pPlayer->DestroyItemCount(29434, 250, true);
                         pPlayer->AddItem(49290,1);
                         pPlayer->CLOSE_GOSSIP_MENU();
						 ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been added the Celestial Steed", pPlayer -> GetGUID());
                     }
                     else
                     {
                         pPlayer->CLOSE_GOSSIP_MENU();
                         ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer->GetGUID());
                     }
                 break;
 
                 case 43:
                     if (pPlayer->HasItemCount(29434, 500, true))
                     {
                         pPlayer->DestroyItemCount(29434, 500, true);
                         pPlayer->AddItem(33184,1);
                         pPlayer->CLOSE_GOSSIP_MENU();
						 ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been added the Swift Magic Broom", pPlayer -> GetGUID());
                     }
                     else
                     {
                         pPlayer->CLOSE_GOSSIP_MENU();
                         ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer->GetGUID());
                     }
                 break;
 
                 case 44:
                     if (pPlayer->HasItemCount(29434, 500, true))
                     {
                         pPlayer->DestroyItemCount(29434, 500, true);
                         pPlayer->AddItem(32768,1);
                         pPlayer->CLOSE_GOSSIP_MENU();
						 ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been added the Raven Lord.", pPlayer -> GetGUID());
                     }
                     else
                     {
                         pPlayer->CLOSE_GOSSIP_MENU();
                         ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer->GetGUID());
                     }
                 break;
 
                 case 45:
                     if (pPlayer->HasItemCount(29434, 500, true))
                     {
                         pPlayer->DestroyItemCount(29434, 500, true);
                         pPlayer->AddItem(33809,1);
                         pPlayer->CLOSE_GOSSIP_MENU();
						 ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been added the Amani War Bear", pPlayer -> GetGUID());
                     }
                     else
                     {
                         pPlayer->CLOSE_GOSSIP_MENU();
                         ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer->GetGUID());
                     }
                 break;

				 case 46:
                     if (pPlayer->HasItemCount(29434, 750, true))
                     {
                         pPlayer->DestroyItemCount(29434, 750, true);
                         pPlayer->AddItem(54068,1);
                         pPlayer->CLOSE_GOSSIP_MENU();
						 ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been added the Wooly White Rhino", pPlayer -> GetGUID());
                     }
                     else
                     {
                         pPlayer->CLOSE_GOSSIP_MENU();
                         ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer->GetGUID());
                     }
                 break;

				 case 47:
                     if (pPlayer->HasItemCount(29434, 750, true))
                     {
                         pPlayer->DestroyItemCount(29434, 750, true);
                         pPlayer->AddItem(46778,1);
                         pPlayer->CLOSE_GOSSIP_MENU();
						 ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been added the Magic Rooster Egg", pPlayer -> GetGUID());
                     }
                     else
                     {
                         pPlayer->CLOSE_GOSSIP_MENU();
                         ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer->GetGUID());
                     }
                 break;

				 case 48:
                     if (pPlayer->HasItemCount(29434, 750, true))
                     {
                         pPlayer->DestroyItemCount(29434, 750, true);
                         pPlayer->AddItem(121777,1);
                         pPlayer->CLOSE_GOSSIP_MENU();
						 ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been added the Tallstrider Egg", pPlayer -> GetGUID());
                     }
                     else
                     {
                         pPlayer->CLOSE_GOSSIP_MENU();
                         ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer->GetGUID());
                     }
                 break;

				 case 49:
                     if (pPlayer->HasItemCount(29434, 15, true))
                     {
                         pPlayer->DestroyItemCount(29434, 15, true);
                         pCreature->CastSpell(pPlayer, 2791, false);
                         pPlayer->CLOSE_GOSSIP_MENU();
                         ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been given Power Word: Fortitude.", pPlayer -> GetGUID());
                     }
                     else
                     {
                         pPlayer->CLOSE_GOSSIP_MENU();
                         ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer -> GetGUID());
                     }
                break;
                               
                case 50:
                    if (pPlayer->HasItemCount(29434, 15, true))
                    {
                        pPlayer->DestroyItemCount(29434, 15, true);
                        pCreature->CastSpell(pPlayer, 1461, false);
                        pPlayer->CLOSE_GOSSIP_MENU();
                        ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been given Arcane Intellect.", pPlayer -> GetGUID());
                    }
                    else
                    {
                    pPlayer->CLOSE_GOSSIP_MENU();
                    ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer -> GetGUID());
                    }
                break;
                               
                case 51:
                    if (pPlayer->HasItemCount(29434, 15, true))
                    {
                        pPlayer->DestroyItemCount(29434, 15, true);
                        pCreature->CastSpell(pPlayer, 14752, false);
                        pPlayer->CLOSE_GOSSIP_MENU();
                        ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been given Divine Spirit.", pPlayer -> GetGUID());
                    }
                    else
                    {
                        pPlayer->CLOSE_GOSSIP_MENU();
                        ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer -> GetGUID());
                    }
                break;
                               
                case 52:
                    if (pPlayer->HasItemCount(29434, 15, true))
                    {
                        pPlayer->DestroyItemCount(29434, 15, true);
                        pCreature->CastSpell(pPlayer, 5234, false);
                        pPlayer->CLOSE_GOSSIP_MENU();
                        ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been given Mark of the Wild.", pPlayer -> GetGUID());
                    }
                    else
                    {
                        pPlayer->CLOSE_GOSSIP_MENU();
                        ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer -> GetGUID());
                    }
                break;

				case 53:
                    if (pPlayer->HasItemCount(29434, 15, true))
                    {
                        pPlayer->DestroyItemCount(29434, 15, true);
                        pCreature->CastSpell(pPlayer, 20217, false);
                        pPlayer->CLOSE_GOSSIP_MENU();
                        ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been given Blessing of Kings.", pPlayer -> GetGUID());
                    }
                    else
                    {
                        pPlayer->CLOSE_GOSSIP_MENU();
                        ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer -> GetGUID());
                    }
                break;

				case 54:
                    if (pPlayer->HasItemCount(29434, 15, true))
                    {
                        pPlayer->DestroyItemCount(29434, 15, true);
                        pCreature->CastSpell(pPlayer, 19740, false);
                        pPlayer->CLOSE_GOSSIP_MENU();
                        ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been given Blessing of Might.", pPlayer -> GetGUID());
                    }
                    else
                    {
                        pPlayer->CLOSE_GOSSIP_MENU();
                        ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer -> GetGUID());
                    }
                break;

				case 55:
                    if (pPlayer->HasItemCount(29434, 15, true))
                    {
                        pPlayer->DestroyItemCount(29434, 15, true);
                        pCreature->CastSpell(pPlayer, 19852, false);
                        pPlayer->CLOSE_GOSSIP_MENU();
                        ChatHandler(pPlayer->GetSession()).PSendSysMessage("You have been given Blessing of Wisdom.", pPlayer -> GetGUID());
                    }
                    else
                    {
                        pPlayer->CLOSE_GOSSIP_MENU();
                        ChatHandler(pPlayer->GetSession()).PSendSysMessage("You don't have the required amount of PvP Tokens.", pPlayer -> GetGUID());
                    }
				case 400: // This case will send the support message for "How Do I get Gold?"
					{
						ChatHandler(pPlayer->GetSession()).PSendSysMessage("You need get VIP Account? First you invite 7 people and donate for 5$ ", pPlayer->GetName());
						pPlayer->PlayerTalkClass->SendCloseGossip();
					}break;
				case 500: // This case will send the support message for "How Do I Make A Ticket?
					{

						ChatHandler(pPlayer->GetSession()).PSendSysMessage("Click on the Red [?] and select, Report a Problem located at the bottom left", pPlayer->GetName());
						pPlayer->PlayerTalkClass->SendCloseGossip();
					}break;
				case 600: // This case will send the support message for "How do i get shadowmourne"
					{
						ChatHandler(pPlayer->GetSession()).PSendSysMessage("You can get Shadowmourne with Donate-10$!", pPlayer->GetName());
						pPlayer->PlayerTalkClass->SendCloseGossip();
					}break;
					

				case 800:
					{
						pPlayer->PlayerTalkClass->SendCloseGossip();
					}break;
			}
			return true;
		}

};

void AddSC_npc_supporter()
{
	new npc_support();
}