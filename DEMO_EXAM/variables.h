#ifndef VAR_H
#define VAR_H
struct Table { //��������� ���� �����
	int ui_START_AXIS; //��������� ����
	int ui_END_AXIS; //�������� ����
	int ui_LONG_WAY; //����������
};

struct Way { //��������� ������
	int SUMM = NULL; //����� ����������
	Way(int cc) { //�����������
		SUMM = cc;
	};
};

struct EasyWay {
	int SUMM = NULL;
	EasyWay(int a) {
		SUMM = a;
	};
};

std::vector <Table> TABLE_VECTORS = { {0,1,2},{0,2,4}, {0,3,10}, {1,3,11}, {1,4,5}, {2,3,3},{2,5,1}, {3,4,8},{3,5,7},{4,6,6},{5,6,9} }; //����������� ���� ��������
std::vector <Way> WAY; //��������� ������
std::vector <EasyWay> EASY_WAY; //����� ������ ����

const int i_COUNT_AXIS = 7; //����� ���� ����� � �����
const int i_WAY_AXIS = 11; //����� ���� ����� � ���

int FINAL = 6; //����, ��� �������� ����������� �����
int counter = NULL; //������� �������� �� ����� ����

bool is_Done = false; //������� ��� �������� �����
bool is_FirstRun = true; //������� ������� �������

#endif
