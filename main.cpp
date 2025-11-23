#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <ctime>
#include <fstream>
#include <iomanip>
using namespace std;

// struct Item {
//     int id;
//     string name;
//     double price;
// };

// void save_receipt(const string& content)
// {
//     auto now = chrono::system_clock::now();
//     auto t = chrono::system_clock::to_time_t(now);

//     string filename = "kvitto_" + to_string(t) + ".txt";
//     ofstream f(filename);

//     if (!f) {
//         cout << "Kunde inte spara kvitto!\n";
//         return;
//     }

//     f << content;
//     cout << "Kvitto sparat som: " << filename << "\n";
// }


// int main()
// {
//     // --- PRODUKTER ---
//     vector<Item> items = {
//         {300, "Bananer", 12.50},
//         {301, "Kaffe",   35.50}
//     };

//     int menu = 0;

//     do {
//         cout << "\nKASSA\n";
//         cout << "1. Ny kund\n";
//         cout << "0. Avsluta\n";
//         cin >> menu;

//         if (menu == 1) {

//             // --- KVITTO START ---
//             string receipt;
//             double total = 0.0;

//             time_t now = time(nullptr);
//             receipt += "KVITTO  ";
//             receipt += ctime(&now);

//             cout << "\nkommando:\n<productid> <antal>\nPAY\n\n";

//             while (true) {
//                 string command;
//                 cin >> command;

//                 if (command == "PAY") {
//                     // Betalning -> avsluta kvitto
//                     receipt += "Total: " + to_string(total) + " kr\n";
//                     cout << "Total: " << total << " kr\n";

//                     save_receipt(receipt);
//                     break;
//                 }

//                 // Annars förväntar vi oss ID och ANTAL
//                 int id = stoi(command);
//                 int antal;
//                 cin >> antal;

//                 bool found = false;

//                 for (auto &it : items) {
//                     if (it.id == id) {
//                         double line = it.price * antal;

//                         // Skriv på skärmen
//                         cout << it.name << " " << antal << " * "
//                              << fixed << setprecision(2)
//                              << it.price << " = " << line << "\n";

//                         // Skriv på kvittot
//                         receipt += it.name + string(" ") +
//                                    to_string(antal) + " * " +
//                                    to_string(it.price) + " = " +
//                                    to_string(line) + "\n";

//                         total += line;
//                         found = true;
//                     }
//                 }

//                 if (!found) {
//                     cout << "Produkt-ID " << id << " finns ej.\n";
//                 }
//             }
//         }

//     } while (menu != 0);

//     cout << "Avslutar...\n";
//     return 0;
// }

struct Campaign {

};


struct Product {
    int productID;
    double price;
    std::string type;
    std::string name;
    std::vector<Campaign> campaignList;
};




int main() {
    
    
    
    
    return 0;
}