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
    int carb_grams = 30;
    int protein_grams = 5;
    int fat_grams = 15;
    //below is a declaration, intialization, and a computation
    int calories = calories = 4 * carb_grams + 4 * protein_grams + 9 * fat_grams;
    //output below
    cout << "There are " << calories << " calories in this dish." << endl;
}
