#include <iostream>

void task11();
void task12();
void task13();
void task14();
void task15();
void task16();
void task17();
// void task23();
// void task24();
// void task31();
// void task32();
// void task33();
// void pW1();
// void pW2();
// void pW3();
// void pW4();
// void pW5();
// void pW6();


int main() {
	int choice;
	std::cout << "Choose a task to run:\n";
	std::cout << "1. Задача 1. Начальник.\n";
	std::cout << "2. Задача 2. Купи слона.\n";
	std::cout << "3. Задача 3. Таблица степеней.\n";
	std::cout << "4. Задача 4. Напоминалка.\n";
	std::cout << "5. Задача 5. Банкомат 3.0.\n";
	std::cout << "6. Задача 6. Сумма чисел.\n";
	 std::cout << "7. Задача 1. Задача 1. Банкомат 4.0.\n";
	// std::cout << "8. Задача 3. Треугольник.\n";
	// std::cout << "9. Задача 4. Совпадение чисел(необязательная).\n";
	// std::cout << "10. Задача 1. Военкомат.\n";
	// std::cout << "11. Задача 2. — Входит... И выходит\n";
	// std::cout << "12. Задача 3. Пора обедать (необязательная).\n";
	// std::cout << "Or choose the number of the practical work to run:\n";
	// std::cout << "21. practical work 1. Задание 1. Полёт нормальный!\n";
	// std::cout << "22. practical work 2. Задание 2. Майские!\n";
	// std::cout << "23. practical work 3. Задание 3. Майские — усложнение\n";
	// std::cout << "24. practical work 4. Задание 4. Банкомат — 2\n";
	// std::cout << "25. practical work 5. Задание 5. Усложнение задачи про кирпич\n";
	// std::cout << "26. practical work 6. Задание 6. Грустное совершеннолетие\n";
	std::cout << "Enter your choice: ";
	std::cin >> choice;

	switch (choice) {
	case 1:
		task11();
		break;
	case 2:
		task12();
		break;
	case 3:
		task13();
		break;
	case 4:
		task14();
		break;
	case 5:
		task15();
		break;
	case 6:
		task16();
		break;
		 case 7:
		 	task17();
		// 	break;
		// case 8:
		// 	task23();
		// 	break;
		// case 9:
		// 	task24();
		// 	break;
		// case 10:
		// 	task31();
		// 	break;
		// case 11:
		// 	task32();
		// 	break;
		// case 12:
		// 	task33();
		// 	break;
		// case 21:
		// 	pW1();
		// 	break;
		// case 22:
		// 	pW2();
		// 	break;
		// case 23:
		// 	pW3();
		// 	break;
		// case 24:
		// 	pW4();
		// 	break;
		// case 25:
		// 	pW5();
		// 	break;
		// case 26:
		// 	pW6();
		// 	break;
	default:
		std::cout << "Invalid choice. Exiting...\n";
	}
	return 0;
}