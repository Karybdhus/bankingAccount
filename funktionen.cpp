#include "deklarationen.h"

bool checkInputLength(std::string input, unsigned int length)
{
   if (input.length() > length)
   {
       std::cout << "Eingabe zu lang. Maximal " << length << " Zeichen." << std::endl;
       std::cout << "Erneute Eingabe: " << std::endl;
       return false;
   }
   return true;
}

void showMenu()
{
    std::cout << "\n ------------------------- " << std::endl;
    std::cout << "|     Kontoverwaltung     |" << std::endl;
    std::cout << "|-------------------------|" << std::endl;
    std::cout << "| 1 - Nutzer anzeigen     |" << std::endl;
    std::cout << "| 2 - Konto auswaehlen    |" << std::endl;
    std::cout << "| 3 - Neues Konto anlegen |" << std::endl;
    std::cout << "| 4 - Konto schliessen    |" << std::endl;
    std::cout << "| 5 - Daten speichern     |" << std::endl;
    std::cout << "| 6 - Daten extern laden  |" << std::endl;
    std::cout << "| 7 - Programm beenden    |" << std::endl;
    std::cout << " ------------------------- " << std::endl;
    std::cout << " Auswahl: ";
    return;
}

void subMenu(std::string firstName, std::string lastName)
{
    std::cout << "\nKontoinhaber: " << firstName << " " << lastName << std::endl;
    std::cout << "----------------------------" << std::endl;
    std::cout << "1 - Kontostand anzeigen" << std::endl;
    std::cout << "2 - Betrag einzahlen" << std::endl;
    std::cout << "3 - Betrag abheben" << std::endl;
    std::cout << "4 - Ueberweisung" << std::endl;
    std::cout << "5 - Kreditrahmen aendern" << std::endl;
    std::cout << "6 - Zurueck" << std::endl;
    std::cout << "----------------------------" << std::endl;
    std::cout << "Auswahl: ";
    return;
}

void getLastNameAndFirstName(std::string &lastName, std::string &firstName)
{
    bool validLength = false;
    std::cout << "\nNachname: ";
    while ((validLength = checkInputLength((lastName = validInput<std::string>()), 20)) == false);
    //lastName = validInput<std::string>();

    std::cout << "Vorname: ";
    while ((validLength = checkInputLength((firstName = validInput<std::string>()), 20)) == false);
    //firstName = validInput<std::string>();
}