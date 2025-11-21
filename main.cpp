#include <iostream>
#include <ctime>
#include <chrono>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

typedef struct {
    int id;
    int weight_of_product;
    std::string name;
    double price;
} Item;

void save_receipt(const std::string& receiptContent) {
    auto now = std::chrono::system_clock::now();
    auto t = std::chrono::system_clock::to_time_t(now);

    std::string filename = "kvitto_" + std::to_string(t) + ".txt";

    std::ofstream file(filename);
    if(!file) {
        std::cout << ("Kunde inte skapa filen\n");
        return;
    }

    file << receiptContent;
    std::cout << "Kvitto sparat i filen: " << filename << "\n";
}


int main() {
    
    std::vector<Item> items = {
        {}
    }
    
    
    int menu_options = 0;
    int choice = 0;
    
    do {
        std::cout << "\nKASSA\n";
        std::cout << "1. Ny kund\n";
        std::cout << "0. Avsluta\n";
        std::cin >> menu_options;

        switch (menu_options)
        {
        case 1:
            switch (choice)
            {
            case 1:
                std::string kvitto =
                    "----- KVITTO ------\n"

                break;
            
            default:
                break;
            }
            break;
        case 0:
            std::cout << "Avslutar...\n";
            break;
        
        default:
            std::cout << "Ogiltigt val!\n";
            break;
        }

    } while (menu_options != 0);   
    
    
    return 0;
}