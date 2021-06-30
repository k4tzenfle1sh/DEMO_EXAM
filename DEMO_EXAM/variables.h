#ifndef VAR_H
#define VAR_H
struct Table { //структура всех путей
	int ui_START_AXIS; //начальный узел
	int ui_END_AXIS; //конечный узел
	int ui_LONG_WAY; //расстояние
};

struct Way { //временный массив
	int SUMM = NULL; //общее расстояние
	Way(int cc) { //конструктор
		SUMM = cc;
	};
};

struct EasyWay {
	int SUMM = NULL;
	EasyWay(int a) {
		SUMM = a;
	};
};

std::vector <Table> TABLE_VECTORS = { {0,1,2},{0,2,4}, {0,3,10}, {1,3,11}, {1,4,5}, {2,3,3},{2,5,1}, {3,4,8},{3,5,7},{4,6,6},{5,6,9} }; //статическое поле объектов
std::vector <Way> WAY; //временный вектор
std::vector <EasyWay> EASY_WAY; //общий вектор пути

const int i_COUNT_AXIS = 7; //число всех узлов в графе
const int i_WAY_AXIS = 11; //число всех путей в нем

int FINAL = 6; //узел, для которого выполянется поиск
int counter = NULL; //счетчик перехода на новый узел

bool is_Done = false; //булевая для главного цикла
bool is_FirstRun = true; //булевая первого запуска

#endif
