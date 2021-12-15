//
// Created by jpedr on 14/12/2021.
//

#include "input.h"
#include "defs.h"

namespace input{
   void inputInt(int& num){
       cin >> num;
       while (cin.fail())
       {
           cout << "Input invalido, insira novamente!" << endl;
           cin.clear();
           cin.ignore(1000, '\n');
           cin >> num;
       }
   }

    void inputStr(string& str){
        str.clear();
        cin.clear();
        cin.ignore(1000, '\n');
        getline(cin, str);
   }

   void inputMatricula(string& str){
       str.clear();
       cin >> str;
   }


}