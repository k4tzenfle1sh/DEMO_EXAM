#include <iostream>
#include <clocale>
#include <conio.h>
#include <vector>
#include "variables.h"

int is_min(int a, int b) { //функция сравнения двух чисел
	if (a <= b)
		return a;
	else
		return b;
}

int main() {
	setlocale(LC_ALL, "rus");
	std::cout << "Согласно заданию, необходимо найти кратчайшее расстояние между узлами 1 и 7 на графе, данным в задании.\nНайдем минимальные расстояния:\n" << std::endl;
	
	while (!is_Done) {
		if (is_FirstRun) { //если первый запуск
			std::cout << "U[0] = 0," << std::endl; 
			EASY_WAY.push_back(0); //первая сумма есть 0
			is_FirstRun = false; //снимаем флаг
			counter++; //переходим на новый узел
			continue;
		}
		while (1) {
			for (int i = 0; i < i_WAY_AXIS; i++) {
				if (TABLE_VECTORS[i].ui_END_AXIS == counter) { //ищем совпадение по узлам графа и нужного для поиска
					WAY.push_back(TABLE_VECTORS[i].ui_LONG_WAY + EASY_WAY[TABLE_VECTORS[i].ui_START_AXIS].SUMM); //впихиваем во временный массив возможный переход
				}
			}
			break;
		}
		std::cout << "U[" << counter << "] = ";
		if (WAY.size() >= 2) { //если переходов больше двух для одного узла, то
			int MIN = INT_MAX;
			for (int i = 0; i < WAY.size(); i++) {
				if (i == 0) {
					MIN = WAY[i].SUMM;
					continue;
				}
				MIN = is_min(MIN, WAY[i].SUMM); //ищем минимальную сумму по ним
			}
			EASY_WAY.push_back(MIN); //вносим запись в путеводитель
			std::cout << MIN;
		}
		else { //иначе
			std::cout << WAY[0].SUMM;
			EASY_WAY.push_back(WAY[0].SUMM); //просто вносим первый эелемент сразу
		}

		if (counter == FINAL) { //если искомый узел уперся в конечный для поиска
			is_Done = true; //то программа завершила свою работу
			std::cout << "." << std::endl;
		}
		else { //иначе
			counter++; //переход на новый узел
			std::cout << "," << std::endl;
			WAY.clear(); //очищаем временный вектор
		}
	}
	std::cout << "\nКратчайшее расстояние между узлами 1 и 7 равняется: " << EASY_WAY[EASY_WAY.size()-1].SUMM << "." << std::endl;
	system("pause");
	return 0;
}