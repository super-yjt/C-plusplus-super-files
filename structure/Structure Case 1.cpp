#include <iostream>
#include <string>
#include <ctime>
struct student
{
	std::string name;
	int score;
};
struct teacher
{
	std::string tName;
	student sArray[5];
};
void allocateSpace(teacher tArray[], int len)
{
	std::string nameSeed = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].name = "Student_";
			tArray[i].sArray[j].name += nameSeed[j];
			int random = rand() % 61 + 40;
			tArray[i].sArray[j].score = random;
		}
	}
}
void printInfo(teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		std::cout << tArray[i].tName <<":"<< "\n";
		for (int j = 0; j < 5; j++)
		{
			std::cout << tArray[i].sArray[j].name <<":"<< "\t" <<"分数:"<< tArray[i].sArray[j].score << "\n";
		}
		std::cout<<"\n";
	}
}
int main()
{
	using namespace std;
	srand((unsigned int)time(NULL));
	teacher tArray[3];
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);
	printInfo(tArray, len);
	return 0;
}