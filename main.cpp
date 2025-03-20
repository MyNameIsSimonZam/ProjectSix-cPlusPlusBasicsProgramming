#include <iostream>

void task11();
void task12();
void task13();
void task14();
void task15();
void task16();
void task17();
void task18();
void task19();
void task20();
void pW1();
void pW2();
void pW3();
void pW4();
void pW5();
void pW6();
void pW7();
void pW8();


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
	std::cout << "8. Задача 2. Кадастровые проблемы.\n";
	std::cout << "9. Задача 3. Кожаный мешок.\n";
	std::cout << "10. Задача 4. Военное время.\n";
	std::cout << "Or choose the number of the practical work to run:\n";
	std::cout << "11. Задание 1. Кукушка.\n";
	std::cout << "12. Задание 2. Слишком большие числа.\n";
	std::cout << "13. Задание 3. Коллекторы.\n";
	std::cout << "14. Задание 4. Счастливый билетик.\n";
	std::cout << "15. Задание 5. Числа Фибоначчи.\n";
	std::cout << "16. Задание 6. Вклады.\n";
	std::cout << "17. Задание 7. Сокращение дроби* (дополнительное задание).\n";
	std::cout << "18. Задание 8. Угадай число* (дополнительное задание).\n";
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
		break;
	case 8:
		task18();
		break;
	case 9:
		task19();
		break;
	case 10:
		task20();
		break;
	case 11:
		pW1();
		break;
	case 12:
		pW2();
		break;
	case 13:
		pW3();
		break;
	case 14:
		pW4();
		break;
	case 15:
		pW5();
		break;
	case 16:
		pW6();
		break;
	case 17:
		pW7();
		break;
	case 18:
		pW8();
		break;
	default:
		std::cout << "Invalid choice. Exiting...\n";
	}
	return 0;
}