#include <iostream>
#include <clocale>
#include <conio.h>
#include <vector>
#include "variables.h"

int is_min(int a, int b) {
	if (a <= b)
		return a;
	else
		return b;
}

int main() {
	setlocale(LC_ALL, "rus");
	std::cout << "Согласно заданию, необходимо найти кратчайшее расстояние между узлами 1 и 7 на графе, данным в задании.\nНайдем минимальные расстояния:\n" << std::endl;
	bool is_Done = false;
	bool is_FirstRun = true;
	int counter = NULL;
	while (!is_Done) {
		if (is_FirstRun) {
			std::cout << "U[0] = 0," << std::endl;
			EASY_WAY.push_back(0);
			is_FirstRun = false;
			counter++;
			continue;
		}
		while (1) {
			int count = 0;
			for (int i = 0; i < i_WAY_AXIS; i++) {
				if (TABLE_VECTORS[i].ui_END_AXIS == counter) {
					WAY.push_back(TABLE_VECTORS[i].ui_LONG_WAY + EASY_WAY[TABLE_VECTORS[i].ui_START_AXIS].V);
				}
			}
			break;
		}
		std::cout << "U[" << counter << "] = ";
		if (WAY.size() >= 2) {
			int MIN = INT_MAX;
			for (int i = 0; i < WAY.size(); i++) {
				if (i == 0) {
					MIN = WAY[i].summ;
					continue;
				}
				MIN = is_min(MIN, WAY[i].summ);
			}
			EASY_WAY.push_back(MIN);
			std::cout << MIN;
		}
		else {
			std::cout << WAY[0].summ;
			EASY_WAY.push_back(WAY[0].summ);
		}

		if (counter == FINAL) {
			is_Done = true;
			std::cout << "." << std::endl;
		}
		else {
			counter++;
			std::cout << "," << std::endl;
			WAY.clear();
		}
	}
	std::cout << "\nКратчайшее расстояние между узлами 1 и 7 равняется: " << EASY_WAY[EASY_WAY.size()-1].V << "." << std::endl;
	system("pause");
	return 0;
}