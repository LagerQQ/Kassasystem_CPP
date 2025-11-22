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
        {300, "Bananer", 12.50},
        {301, "Kaffe",   35.50}
    };
    
    
    int menu_options = 0;
    
    do {
        std::cout << "\nKASSA\n";
        std::cout << "1. Ny kund\n";
        std::cout << "2. Admin meny\n";
        std::cout << "0. Avsluta\n";
        std::cout << "Val: ";
        std::cin >> menu_options;
        
        switch (menu_options)
        {
        case 1: {
            int choice = 0;
            time_t timestamp;
            time(&timestamp);
            do {
                std::cout << "\nKVITTO\t" << ctime(&timestamp) << "\n";
                std::cout << "";
                std::cout << "";
                std::cin >> choice;

                switch (choice)
                {
                case 1: {
                    int id;
                    std::cout << "Ange product-ID: ";
                    std::cin >> id;

                    bool found = false;

                    for (auto &it : items) {
                        if (it.id == id) {
                            std::cout << "Du valde: "
                                      << it.name << " - "
                                      << it.price << " kr\n";

                            
                            found = true;
                            break;
                        }
                    }

                    if (!found) {
                        std::cout << "Ingen produkt med ID " << id << " hittades.\n";
                    }
                    break;
                }

                case 2:
                    std::cout << "Avsluta kund...\n";
                    break;
                
                default:
                    std::cout << "Ogiltigt val!\n";
                    break;
                }
            } while (choice != 2);
            
            break;
        }
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