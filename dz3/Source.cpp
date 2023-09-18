#include <iostream>
#include <locale>
#include "windows.h"
using namespace std;

class Human // ЛЮДИНА
{
public:
	float growth;
	string hair_color;
	string name;
	string gender;
	int age;
	string laugh;
	string massage;
	bool tshirts;
	string color_tshorts;
	bool sits;
	int energy;
	int hungry;
	void Sits()
	{
		cout << name << " сидить..." << endl;
		sits = true;
		if (this->hungry < 90 && this->energy > 0)
		{
			this->hungry += 5;
			this->energy -= 1;
			return;

		}
		else
			cout << "Хочу їсти" << endl;
	}
	void Drink(string liquid)
	{
		if (this->energy > 0 && this->hungry < 90)
		{
			cout << name << " п'є..." << liquid << endl;
			this->energy -= 20;
			this->hungry -= 10;
			return;
		}
		else
			cout << "Закінчилася енергія або він голодний" << endl;
	}
	void Say(string nick)
	{
		if (this->energy > 0 && this->hungry < 90)
		{
			cout << "Хей!" << nick << " хочешь їсти?" << endl;
			this->energy -= 10;
			this->hungry += 5;
			return;
		}
		else
			cout << "Закінчилася енергія або він голодний" << endl;
	}
	void Laugh()
	{
		if (this->energy > 0 && this->hungry < 90)
		{
			cout << laugh << endl;
			this->energy -= 10;
			this->hungry += 5;
			return;
		}
		else
			cout << "Закінчилася енергія або він голодний" << endl;
	}
	void ToFeed()
	{
		if (this->energy > 0 && this->hungry < 90)
		{
			cout << name << " годує... " << endl;
			this->energy -= 10;
			this->hungry += 5;
			return;
		}
		else
			cout << "Закінчилася енергія або він голодний" << endl;
	}
	void Print()
	{
		cout << "Людинa: " << endl;
		cout << "Ім'я:" << name << endl;
		cout << "Вік:" << age << endl;
		cout << "Енергія: " << energy << "%" << endl;
		cout << "Голод: " << hungry << "%" << endl;
	}
};
class ROOM // КІМНАТА
{

public:
	int count_room = 1;
	float height = 3; // m
	float width = 5; //m
	int count_picture = 1;
	int count_plants = 0;
	int count_mirror = 1;
	int count_begs = 3;
	int count_angle = 4;
	string color_wall = "green";
	string room_closed;
	bool stan_room = true;
	void TheRoomIsVentilated()
	{
		cout << "кімната провітрюється..." << endl;
	}
	void TheRoomIsCleaned()
	{
		cout << "кфмната прибирається..." << endl;
	}
	void TheRoomIsClosed(Human human)
	{
		if (stan_room < false)
		{
			cout << "в замкнутій кімнаті..." << endl;
			human.Sits();
			return;
		}
		else
		{
			cout << "в відкитій кімнаті..." << endl;
			human.Sits();
			return;
		}
	}
	void TheRoomIsOpen()
	{
		cout << "кімната відімкнута..." << endl;
	}
	void TheRoomIsNotLit()
	{
		cout << "кімната не освітлюєься..." << endl;
	}
};
class MobilePhone // МОБІЛЬНИЙ ТЕЛЕФОН
{
public:
	string color_phone = "white";
	string brand = "iphone";
	bool case_phone = true;
	string case_color = "purple";
	int count_camers = 2;
	string port_type = "lightning";
	double prise = 25999; //$
	int count_contact = 32;
	string call;
	void PhoneCall()
	{
		cout << call << endl;
	}
	void Vibration()
	{
		cout << "вібрація..." << endl;
	}
	void TurnOnThePhone()
	{
		cout << "телефон вмикається..." << endl;
	}
	void WatchingVideo(Human& human)
	{
		if (human.energy > 0 && human.hungry < 90)
		{
			if (human.sits)
			{
				cout << "дивиться ютуб..." << endl;
				human.Laugh();
				human.energy -= 20;
				human.hungry += 5;
				return;
			}
		}
		else
			cout << "Закінчилася енергія або він голодний" << endl;
	}
	void Battery(string percent)
	{
		cout << "на тебефоні: " << percent << " %" << endl;
	}
};
class Microphone // МІКРОФОН
{
public:
	string color_micro = "black";
	bool buttom = true;//наявніть кнопки для вмикання мікро
	string brand = "Trust GXT";
	int frequency_range = 5000;
	float cord_length = 1.5;//m
	string position;
	string connection;
	string connection_type = "USB";
	void IncludeMiro()
	{
		cout << "мікрофон увімкнено..." << endl;
	}
	void TurnOffMiro()
	{
		cout << "мікрофон вимкнено..." << endl;
	}
	void Position()
	{
		cout << position << endl;
	}
	void Connection()
	{
		cout << connection << endl;
	}
	void NoConnection()
	{
		cout << "мікрофон не підключен до системи..." << endl;
	}
};
class Raccoon // ЄНОТ
{
public:
	string color_wool = "gray";
	float weight;
	string eyes_color = "green";
	string nick;
	string gender = "man";
	string noize;
	int energy;
	int hungry;
	string smell = "stink";
	int age;
	bool wool = true;
	void Run(Human& human)
	{
		if (this->energy > 0 && this->hungry < 90)
		{
			cout << "єнот біжить до..." << human.name << "." << endl;
			human.Say(nick);
			this->energy -= 20;
			this->hungry += 10;
			this->weight -= 0.1;
			return;
		}
		else
			cout << "В єнота Закінчилася енергія або він голодний" << endl;
	}
	void MakeNoize()
	{
		if (this->energy > 0 && this->hungry < 90)
		{
			cout << noize << endl;
			this->energy -= 10;
			this->hungry += 10;
			return;
		}
		else
			cout << "В єнота Закінчилася енергія або він голодний" << endl;
	}
	void Walk()
	{
		cout << "єнот ходить..." << endl;
	}
	void Eat(Human& human, string meal)
	{
		if (this->energy > 0 && this->hungry > 90)
		{
			human.ToFeed();
			cout << "єнот їсть..." << meal << endl;
			this->energy -= 10;
			this->hungry -= 50;
			this->weight += 0.9;
			return;
		}
		else
			cout << "В єнота Закінчилася енергія або він голодний" << endl;
	}
	void Jump(Raccoon& human)
	{
		if (this->energy > 0 && this->hungry < 90)
		{
			cout << "єнот стрибає..." << endl;
			human.MakeNoize();
			this->energy -= 10;
			this->hungry += 10;
			return;
		}
		else
			cout << "В єнота Закінчилася енергія або він голодний" << endl;
	}
	void Print()
	{
		cout << "Єнот: " << endl;
		cout << "Ім'я:" << nick << endl;
		cout << "Вік:" << age << endl;
		cout << "Енергія: " << energy << "%" << endl;
		cout << "Голод: " << hungry << "%" << endl;
		cout << "Вага: " << weight << "кг" << endl;
	}
};


int main()
{
	//setlocale(LC_ALL, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Human m;
	m.name = "Ангеліна";
	m.laugh = "ХА-ХА-ХА!";
	m.energy = 90;//%
	m.age = 18;//років
	m.growth = 170.2;//см
	m.hair_color = "карі";
	m.gender = "жінка";
	m.tshirts = true;
	m.color_tshorts = "чорна";
	m.sits = false;
	m.hungry = 30;

	MobilePhone mb;

	Raccoon r;
	r.noize = "ГРРР!";
	r.nick = "Степан";
	r.weight = 5.6; //kg
	r.age = 2;
	r.energy = 100;
	r.hungry = 70;

	ROOM room;
	room.room_closed = "кімната замкнута...";
	string meal;

	m.Print();
	r.Print();
	cout << "------------------------------------" << endl;
	room.TheRoomIsClosed(m);
	mb.WatchingVideo(m);
	r.Run(m);
	r.Jump(r);
	cout << "Що буде їсти єнот?" << endl;
	cin >> meal;
	r.Eat(m, meal);
	cout << "------------------------------------" << endl;
	m.Print();
	r.Print();


}


