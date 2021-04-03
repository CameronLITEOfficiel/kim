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
	system("vlc");
}

void run_firefox() {
	system("firefox");
}

void version() {
	std::cout << "Version 0.1 : courageous monkey | 🐒" << std::endl;
}

void help() {
	std::cout << "Commandes disponibles :\n" << std::endl;
	std::cout << "draw_a_rabbit : affiche un joli lapin si L'UTF-8 est disponible" << std::endl;
	std::cout << "draw_two_rabbits : affiche deux jolis lapins si L'UTF-8 est disponible" << std::endl;
	std::cout << "draw_three_rabbits : affiche trois jolis lapins si L'UTF-8 est disponible" << std::endl;
	std::cout << "run_vlc : lancer vlc media player si il est installé" << std::endl;
	std::cout << "run_firefox : lancer mozilla firefox si il est installé" << std::endl;
	std::cout << "hello_kim : dire bonjour à kim" << std::endl;
	std::cout << "time : affiche l'heure" << std::endl;
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
		if (rep == "version")
			{
				version();
			}	 	 		 	 	
 	 }
}