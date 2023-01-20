//
//  rock_paper_scissors_lizard_spock.cpp
//  
//
//  Created by Anirudh Jayaraman on 20/01/23.
//

#include <iostream>


int main(){
    
    // Live long and prosper

    srand(time(NULL));

    int computer = rand() % 5 + 1;
    int user = 0;

    std::cout << "==================================\n";
    std::cout << "rock paper sceissors lizard spock!\n";
    std::cout << "==================================\n";

    std::cout << "1) ✊\n";
    std::cout << "2) 🤚\n";
    std::cout << "3) ✌️\n";
    std::cout << "4) 🤏\n";
    std::cout << "5) 🖖\n";



    std::cout << "shoot! ";

    std::cin >> user;
    
    switch(user){
        case 1:
            std::cout << "You choose Rock ✊\n";
            break;
        case 2:
            std::cout << "You choose Paper 🤚\n";
            break;
        case 3:
            std::cout << "You choose Scissors ✌️\n";
            break;
        case 4:
            std::cout << "You choose Lizard 🤏\n";
            break;
        case 5:
            std::cout << "You choose Spock 🖖\n";
            break;
    }
    
    switch(computer){
        case 1:
            std::cout << "Computer chooses Rock ✊\n";
            break;
        case 2:
            std::cout << "Computer chooses Paper 🤚\n";
            break;
        case 3:
            std::cout << "Computer chooses Scissors ✌️\n";
            break;
        case 4:
            std::cout << "Computer chooses Lizard 🤏\n";
            break;
        case 5:
            std::cout << "Computer chooses Spock 🖖\n";
            break;
    }
    
    
    
    if(user == computer){
        std::cout << "It's a tie!\n";
    } else {
        switch(user){
            case 1:
                if(computer == 2){
                    std::cout << "Paper covers Rock: You Lose!\n";
                } else if (computer == 3){
                    std::cout << "Rock smashes Scissors: You Win!\n";
                } else if(computer == 4){
                    std::cout << "Rock crushes Lizard: You Win!\n";
                } else {
                    std::cout << "Spock vaporizes Rock: You Lose!\n";
                }
                break;
            case 2:
                if(computer == 1){
                    std::cout << "Paper covers Rock: You Win!\n";
                } else if (computer == 3){
                    std::cout << "Scissors cuts Paper: You Lose!\n";
                } else if (computer == 4){
                    std::cout << "Lizard eats Paper: You Lose!";
                } else {
                    std::cout << "Paper disproves Spock: You Win!";
                }
                break;
            case 3:
                if(computer == 1){
                    std::cout << "Rock smashes Scissors: You Lose!\n";
                } else if (computer == 2){
                    std::cout << "Scissors cuts Paper: You Win!";
                } else if (computer == 4){
                    std::cout << "Scissors decapitates Lizard: You Win!\n";
                } else {
                    std::cout << "Spock smashes Scissors: You Lose!\n";
                }
                break;
            case 4:
                if (computer == 1){
                    std::cout << "Rock crushes Lizard: You Lose!\n";
                } else if (computer == 2) {
                    std::cout << "Lizard eats Paper: You Win!\n";
                } else if (computer == 3){
                    std::cout << "Scissors decapitates Lizard: You Lose!\n";
                } else {
                    std::cout << "Lizard poisons Spock: Yuu Win!\n";
                }
                break;
            case 5:
                if (computer == 1){
                    std::cout << "Spock vaporizes Rock: You Win!\n";
                } else if(computer == 2){
                    std::cout << "Paper disproves Spock: You Lose!\n";
                } else if (computer == 3){
                    std::cout << "Spock smashes Scissors: You Win!\n";
                } else {
                    std::cout << "Lizard poisons Spock: You Lose!\n";
                }
                break;
        }
    }
    
    
}
