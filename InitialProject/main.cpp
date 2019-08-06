//
//  main.cpp
//  InitialProject
//
//  Created by Travis Hewitt on 8/3/19.
//  Counting Calories Program
//

#include <iostream>
using namespace std;

int main() {
    //variable declarations and initializations below
    int carb_grams;
    int protein_grams;
    int fat_grams;
    //in the console, we will provide a prompt!
    cout << "Plox, I require ur grams of carbs, protein, and fat, separated by spaces." << endl;
    //here, from the console, the user will follow directions, because she is attentive.
    cin >> carb_grams;
    cin >> protein_grams;
    cin >> fat_grams;    
    //below is a declaration, intialization, and a computation
    int calories = calories = 4 * carb_grams + 4 * protein_grams + 9 * fat_grams;
    //output below
    cout << "There are " << calories << " calories in this dish." << endl;
}
