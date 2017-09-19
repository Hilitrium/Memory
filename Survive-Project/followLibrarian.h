#pragma once
#include"charictorStats.h"
using namespace std;

void followLibrarian() {
	int choice4 = 0;
	system("cls");
	cout << "you and the librarian go down to the arcive to prepair for a battle agenst" << endl;
	cout << "whatever Trazyn will use to get to the artifact. You ask the Librarian what" << endl;
	cout << "Trazyn could possibly be after. \"I am not certan how Trazyn figured it out so fast" << endl;
	cout << "but we recently discovered an ancient Necrontyr vault buried deep within this planet." << endl;
	cout << "we were able to open it, the only thing inside was a small trinket which we have been" << endl;
	cout << "researching to descover how to unlock it. We beleve it contains a shard of Aza'gorod the Nightbringer." << endl;
	cout << "However this one is special, it is a piece that pierced the Eldar god Kaela Mensha Khaine" << endl;
	cout << "after he destroyed the nightbringer.\" While you wait in the arcives other marines" << endl;
	cout << "join you in defending agenst the on-coming threat. Ten minutes go by as you wait" << endl;
	cout << "for the incomming enemy. Including you and the Librarian there are twenty marines preparing to defend agenst trazyn." << endl;
	cout << "You hear walking from down the hall and know it is a Necron, but it is only trazyn that" << endl;
	cout << "appears. You are shocked that he chose to stand alone. The librarian shouts to" << endl;
	cout << "the marines to attack, ten of them charge forward with weapons drawn. Trazyn swings" << endl;
	cout << "his weapon and kills the first marine with a single hit. But before the others" << endl;
	cout << "are able to attack they a pulse releases from the corpse of the marine, the other" << endl;
	cout << "nine marines begin to scream in horrific agony before collapsing to the ground dead" << endl;
	cout << "with blood seeping out of their armor and pooling up at Trazyns feet. He then waves" << endl;
	cout << "his hand in a gesture for attack, a swarm of nano scarabs come pouring out of a trinket" << endl;
	cout << "he was wearing. The scarabs begin to attack your men by burring themselves into the" << endl;
	cout << "skulls of the men. They all begin to attack and kill eachother out of nowhere. \"Do" << endl;
	cout << "not fall into the clutches of those scarabs, resist them or I will cut you down where" << endl;
	cout << "you stand. It is too late for these men.\" the Librarian then kills all the men with" << endl;
	cout << "a large lethal bolt of lightning." << endl;
	
	system("pause");
	system("cls");

	cout << "after all the chaos calmes down Trazyn begins to speak directly to the Librarian \"" << endl;
	cout << "Greetings, I assume you know why I am here if you thought it to be a good idea to" << endl;
	cout << "defend your arcives. That would also imply you know who I am. I appreciate that you" << endl;
	cout << "found the shard for me, you have done all the hard work. So I am only here to recover" << endl;
	cout << "what is rightfully mine.\" \"You will not get your hands on this shard filthy xenos," << endl;
	cout << "you will die here and now along the rest of your army. None of you will leave this base" << endl;
	cout << "alive.\" the librarian replied. \"I don't have the time to waist on your meaningless" << endl;
	cout << "attempts to stop me, I must return to my work so I will leave you with Hilitrium," << endl;
	cout << "enjoy your last moments alive.\"" << endl; 
	cout << "Before either of you are able to take action agents tryzne you are stopped by the" << endl;
	cout << "warped lord from earler. He is no longer riding the wave of scarabs." << endl;
	cout << "The librarian recognizes this lord and warns you of his power, \"I have encountered" << endl;
	cout << "this lord before, do not let his blade pierce your skin for it will tear your soul appart" << endl;
	cout << "even stronger librarians than I were unable to survive a single blow from that weapon." << endl;
	cout << "We will have to fight him using only our weapons, the warp has no effect on him.\"" << endl;
	system("pause");
	system("cls");
	cout << "You both charge at the lord with weapons drawn preparing for a battle to the death. You both" << endl;
	cout << "swing your weapons but they simply pass through him without harm, it is like he isn't even real." << endl;
	cout << "Even the Librarian seems caught off guard at this. But before either of you have a chance to recover" << endl;
	cout << "for another strike, Hilitrium becomes enshrouded by darkness so black you are unable to see your own" << endl;
	cout << "weapon. After a couple of seconds the darkness lifts and Hilitrium is gone, neither you or the Librarian" << endl;
	cout << "know where he could of went. You quickly realize you have to go stop Trayzn before he gets the shard." << endl;
	cout << "You both turn to go after Trayzn however the Librarian stops dead in his tracks. You turn to him to see" << endl;
	cout << "what is wrong. A sudden burst of blood showers out of him as he falls cleanly in half, he was cut " << endl;
	cout << "perfictly down the middle from head to toe. Hilitrium reappears in the room with you and you are" << endl;
	cout << "stuck in place by the fear from this power the lord holds. You know he will not let you get to " << endl;
	cout << "Trazyn while he still stands. You are going to have to kill him." << endl;
	cout << endl;
	cout << "Do you want to go on the offensive with your melee weapon or play safeley by focusing more" << endl;
	cout << "on avoiding the attacks of the lord." << endl;
	cout << "Press '1' to go on the offensive or press '2' to play it safe." << endl;
	cin >> choice4;
	while (choice4 != 1 && choice4 != 2) {
		cout << "please only use the corrisponding numbers" << endl;
		cin >> choice4;
	}
	if (choice4 == 1) {
		if (plStatsST >= 5 && plStatsWH >= 4) {
			system("cls");
			cout << "You decide to go on the offence agenst this foe. You charge at hilitrium will all your might, and you manage to land a" << endl;
			cout << "hit. This sends him across the room and slams him agenst the far wall. He showes signs" << endl;
			cout << "of heavy damage but he stands like there is nothing wrong. His body begins to reshape and" << endl;
			cout << "repair itself at an incredible rate. If you plan on killing this monster you will have to" << endl;
			cout << "do it fast so he doesnt get a chance to heal. You begin to hear a chittering sound coming" << endl;
			cout << "from down the hallway. " << endl;
		}
		else {
			cout << "you failed.";
		}
	}
	else if (choice4 == 2) 
	{
		if (plStatsAG >= 5) 
		{
			cout << "you passed.";
		}
		else 
		{
			cout << "you failed.";
		}
	}
}
