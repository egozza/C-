#include <iostream>
#include "mmtrain_two.h"
using namespace std;



void train_mm_two::MultiMethod(all_two_two *other,
                           ofstream &ofst)
{

	other->MMtrain(ofst);
}
void train_mm_two::MMplan( ofstream &ofst)
{

	ofst << "\nСамолет и Поезд\n" << endl;

}
void train_mm_two::MMtrain(ofstream &ofst)
{

	ofst << "\nПоезд и Поезд\n" << endl;


}
void train_mm_two::MMship(ofstream &ofst)
{
	ofst << "\nКорабль и Поезд\n" << endl;


}
void train_mm_two::InData(ifstream &ifst) {
 ifst >>numVag  >>speed  >>point ;
  }
   
  void train_mm_two::Out(ofstream &ofst) {
    ofst << "Это поезд:  число вагонов = " 
      << numVag << "штук, скорость = " << speed
      << "км, растояние между пунктами оправления = " << point <<"км;" <<endl;
  }