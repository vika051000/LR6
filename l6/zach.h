enum Mark { NotSat = 2, Sat, Good, Excellent };
enum MarkType { Zachet, Exam };

struct Subject
{
	char name[80];
//	char *name = (char*)malloc(80 * sizeof(char));
	enum MarkType markType;
	union {
		_Bool zachet;
		enum Mark mark;

	}mark;
	char date[11];
	char teacher[28];
};

struct Term
{
	unsigned short number;
	unsigned short year;

	struct Subject subjects[20];

};

struct Zachetka
{
	char firstName[30];
	char middleName[30];
	char lastName[30];
	char zachetkaid[15];
	struct Term terms[10];
};