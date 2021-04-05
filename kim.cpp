#include <iostream>

///\ Name : Kim
///\ Author : CameronLITE
///\ Description : Kim is a french personnal assistant in CLI

/* Kim is a french personnal assistant in CLI */ 

void draw_a_rabbit() {
	std::cout << "🐇\n" << std::endl;
}

void draw_two_rabbits() {
	std::cout << "🐇🐇\n" << std::endl;
}

void draw_three_rabbits() {
	std::cout << "🐇🐇🐇\n" << std::endl;
}

void time() {
	time_t t = time(NULL);
 	tm* tPtr = localtime(&t);
	std::cout << " Il est : " << (tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<":"<< (tPtr->tm_sec) << std::endl;
}

void hello_kim() {
	std::string name = getenv("USER");	
	std::cout << "Salut à toi aussi " << name << " 😁\n" << std::endl;
}

void run_vlc() {
	std::cout << "Note : ne marche pas en root" << std::endl;
	system("vlc");
}

void run_firefox() {
	std::cout << "Note : ne marche pas en root" << std::endl;
	system("firefox");
}

void run_chromium() {
		std::cout << "Note : ne marche pas en root" << std::endl;
		system("chromium-browser");
}

void run_gimp() {
	system("gimp");
}

void list_musics() {
	std::cout << "musiques disponibles pour la commande give_me_lyrics :\n" << std::endl;
	std::cout << "Bring Me The Horizon - Can You Feel My Heart : tapez 1" << std::endl;
}

void give_me_lyrics() {
	int answer = 0;
	std::cout << "De quelle musique voulez-vous les paroles ? (lancer list_musics pour les musiques disponibles)" << std::endl;
	std::cin >> answer;
	if (answer == 1)
	{
		std::cout << "Can you hear the silence?" << std::endl;
		std::cout << "Can you see the dark?" << std::endl;
		std::cout << "Can you fix the broken?" << std::endl;
		std::cout << "Can you feel... can you feel my heart?\n" << std::endl;

		std::cout << "Can you help the hopeless?" << std::endl;
		std::cout << "Well, I'm begging on my knees," << std::endl;
		std::cout << "Can you save my bastard soul?" << std::endl;
		std::cout << "Will you wait for me?\n" << std::endl;

		std::cout << "I'm sorry brothers," << std::endl;
		std::cout << "So sorry lover," << std::endl;
		std::cout << "Forgive me father," << std::endl;
		std::cout << "I love you mother.\n" << std::endl;

		std::cout << "Can you hear the silence?" << std::endl;
		std::cout << "Can you see the dark?" << std::endl;
		std::cout << "Can you fix the broken?" << std::endl;
		std::cout << "Can you feel... can you feel my heart? (x3)\n" << std::endl;

		std::cout << "I'm scared to get close and I hate being alone." << std::endl;
		std::cout << "I long for that feeling to not feel at all." << std::endl;
		std::cout << "The higher I get, the lower I'll sink." << std::endl;
		std::cout << "I can't drown my demons, they know how to swim.\n" << std::endl;

		std::cout << "Can you feel my heart?\n" << std::endl;

		std::cout << "Can you hear the silence?" << std::endl;
		std::cout << "Can you see the dark?" << std::endl;
		std::cout << "Can you fix the broken?" << std::endl;
		std::cout << "Can you feel... can you feel my heart?\n" << std::endl;
	}
	std::cout << ">/" << std::endl;
}

void give_me_good_music() {
		int valeur = rand()%6+1;
		if (valeur = "1")
		{
			std::cout << "https://www.youtube.com/watch?v=e5nWCTUtn_A" << std::endl;
		}
		if (valeur = "2")
		{
			std::cout << "https://www.youtube.com/watch?v=2ftEN3CzbuE" << std::endl;
		}
		if (valeur = "3")
		{
			std::cout << "https://www.youtube.com/watch?v=bBYoRpCs-J8" << std::endl;
		}
		if (valeur = "4")
		{
			std::cout << "https://www.youtube.com/watch?v=mj-v6zCnEaw" << std::endl;
		}
		if (valeur = "5")
		{
			std::cout << "https://www.youtube.com/watch?v=jDGE5KinKYU" << std::endl;
		}
		if (valeur = "6")
		{
			std::cout << "https://www.youtube.com/watch?v=PI9yKr39vGI" << std::endl;
		}
}

void version() {
	std::cout << "Version 0.2 : tiny shark | 🦈" << std::endl;
}

void help() {
	std::cout << "Commandes disponibles :\n" << std::endl;
	std::cout << "draw_a_rabbit : affiche un joli lapin si L'UTF-8 est disponible" << std::endl;
	std::cout << "draw_two_rabbits : affiche deux jolis lapins si L'UTF-8 est disponible" << std::endl;
	std::cout << "draw_three_rabbits : affiche trois jolis lapins si L'UTF-8 est disponible" << std::endl;
	std::cout << "run_vlc : lancer vlc media player si il est installé" << std::endl;
	std::cout << "run_firefox : lancer mozilla firefox si il est installé" << std::endl;
	std::cout << "run_chromium : lancer chromium-browser si il est installé" << std::endl;
	std::cout << "run_gimp : lancer gimp si il est installé" << std::endl;
	std::cout << "hello_kim : dire bonjour à kim" << std::endl;
	std::cout << "time : affiche l'heure" << std::endl;
	std::cout << "give_me_lyrics : obtenir les paroles des musiques disponibles" << std::endl;
	std::cout << "list_musics : lister toute les musiques disponibles pour la commande précédente" << std::endl;
	std::cout << "give_me_good_music : donner une musique dans la liste au hasard" << std::endl;
	std::cout << "version : affiche la version installée du programme" << std::endl;
	std::cout << "exit : sortir du programme\n" << std::endl;
}

int main()
{
	int finnished = 0;
	std::cout << "Bienvenue sur Kim !\n" << std::endl;
	std::cout << "Pour Voir la liste des commandes disponibles tapez help" << std::endl;
	while (finnished == 0) {
		std::string rep = "int";
		std::cout << "Que puije-faire pour vous ?\n" << std::endl;
		std::cin >> rep;
		if (rep == "exit")
			{
				int finnished = 1;
				return 0;
				exit;
			}
		if (rep == "help")
			{
				help();
			}
		if (rep == "draw_a_rabbit")
			{
				draw_a_rabbit();
			} 	
		if (rep == "draw_two_rabbits")
			{
				draw_two_rabbits();
			}
		if (rep == "draw_three_rabbits")
			{
				draw_three_rabbits();
			}
		if (rep == "time")
			{
				time();
			}	
		if (rep == "hello_kim")
			{
				hello_kim();
			}
		if (rep == "run_vlc")
			{
				run_vlc();
			}
		if (rep == "run_firefox")
			{
				run_firefox();
			}
		if (rep == "run_chromium")
			{
				run_chromium();
			}
		if (rep == "run_gimp")
			{
				run_gimp();
			}
		if (rep == "version")
			{
				version();
			}
		if (rep == "give_me_good_music")
			{
				give_me_good_music();
			}
		if (rep == "give_me_lyrics")
			{
				give_me_lyrics();
			}
		if (rep == "list_musics")
			{
				list_musics();
			}		 	 	
 	 }
}