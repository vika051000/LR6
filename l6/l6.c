#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <math.h>
#include "zach.h"

void main(void)
{
	setlocale(LC_ALL, "Rus");

	struct Zachetka z = {
		.firstName = "Виктория",
		.middleName = "Игоревна",
		.lastName = "Матяева",
		.zachetkaid = "1БИН18198",
		.terms = {
			{
				.number = 1,
				.year = 2018,
				.subjects = 
				{
					{
						.name = "Философия",
						.markType = Exam,
						.mark = {.mark = Good},
						.date = "18.01.2019",
						.teacher = "Плужникова Н.Н."
					},
					{
						.name = "ВМ",
						.markType = Exam,
						.mark = {.mark = Good},
						.date = "25.01.2019",
						.teacher = "Штепина Т.В."
					},
					{
						.name = "АГиЛА",
						.markType = Exam,
						.mark = {.mark = Good},
						.date = "01.02.2019",
						.teacher = "Дубнов Д.В."
					},
					{
						.name = "Англ. Яз.",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "26.12.2018",
						.teacher = "Лапаев Л.Л."
					},
					{
						.name = "РЯиКР",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "26.12.2018",
						.teacher = "Морев К.Ю."
					},
					{
						.name = "Информатика",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "27.12.2018",
						.teacher = "Кравченко О.М."
					},
					{
						.name = "Введение в профессию",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "28.12.2018",
						.teacher = "Шаврин С.С."
					}
				}
			},
		{
				.number = 2,
				.year = 2019,
				.subjects =
				{
					{
						.name = "Англ.Яз.",
						.markType = Exam,
						.mark = {.mark = Excellent},
						.date = "18.08.2019",
						.teacher = "Мальцева С.Н."
					},
					{
						.name = "ВМ",
						.markType = Exam,
						.mark = {.mark = Excellent},
						.date = "24.06.2019",
						.teacher = "Штепина Т.В."
					},
					{
						.name = "История",
						.markType = Exam,
						.mark = {.mark = Excellent},
						.date = "28.06.2019",
						.teacher = "Гусев В.И."
					},
					{
						.name = "Информатика",
						.markType = Exam,
						.mark = {.mark = Excellent},
						.date = "02.07.2019",
						.teacher = "Загвоздкина А.В."
					},
					{
						.name = "ТОЭ",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "05.06.2018",
						.teacher = "Орлова Е.Ю."
					},
					{
						.name = "УКС",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "11.06.2019",
						.teacher = "Еременко В.А."
					},
					{
						.name = "Комп. граф.",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "14.06.2019",
						.teacher = "Евстратов П.И."
					},
					{
						.name = "Физика",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "17.09.2019",
						.teacher = "Дегтярев В.Ф."
					}

				}
			}

		},
		
	
	};
	
	printf("Студент: %s %s %s\n", z.lastName, z.firstName, z.middleName);
	printf("Номер зачетной книжки : %s \n", z.zachetkaid);
	printf("===============================================================\n");
	for (int i = 0 ; z.terms[i].number; ++i)
	{
		
		printf("Cеместр %hu год %hu \n", z.terms[i].number , z.terms[i].year);
		printf("%-20s\t%-6s\t%-11s\t%-20s\r\n", "Предмет", "Оценка", "Дата", "Преподаватель");
		for (int j = 0; z.terms[i].subjects[j].name[0]; j++) 
		{
			printf("%-20s\t", z.terms[i].subjects[j].name);
			if (z.terms[i].subjects[j].markType == Zachet)
			{
				printf("%-6s\t",
					z.terms[i].subjects[j].mark.zachet ? "Зачет" : "Не зачет");
			}
			else
			{
				printf("%-6d\t", z.terms[i].subjects[j].mark.mark);
			}
			printf("%-11s\t", z.terms[i].subjects[j].date);
			printf("%-20s\t", z.terms[i].subjects[j].teacher);
			printf("\r\n");
		}
		printf("===============================================================\n");
	}
}

