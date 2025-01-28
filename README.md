# PGR-rekrutacja repo
Zadanie 1: Linux
Napisz skrypt Bash, który sprawdzi, czy aktualnie używana platforma to Linux lub WSL (Windows Subsystem for Linux). Jeśli to Linux, wyświetl status demona SSHD. Jeśli jest to WSL, wyświetl liczbę zmiennych środowiskowych zawierających w nazwie BASH lub SHELL i wyświetl te zmienne.

Zadanie 2: Git
Stwórz repozytorium na GitHubie, do którego dodasz jako submodule inne repozytorium, które zawiera kolejne submodule. Podaj komendę git, która pobierze całe repozytorium.

Zadanie 3: C++
Zaimplementuj strukturę danych "StackMinimum" - stos z dodatkową metodą getMinimum, która zwraca minimalną wartość na stosie.
Przykład użycia:
MinStack* StackMin = new MinStack();
StackMin->push(10);
StackMin->push(-12);
StackMin->push(22);  
std::cout<< StackMin->getMin() << std::endl; // pokaże -12
StackMin->pop();
std::cout<< StackMin->top() << std::endl;    // pokaże -12
std::cout<< StackMin->getMin() << std::endl; // pokaże -12

Zadanie 4: Docker (Nieobowiązkowe)
Napisz plik Dockerfile, który bazuje na istniejącym obrazie i instaluje w nim wybrany pakiet. Podaj komendę do budowy i uruchomienia kontenera z dostępem do wybranego urządzenia.

Zadanie 5: Cmake (Nieobowiązkowe)
Napisz plik CMakeLists.txt, który zlinkuje wybraną bibliotekę lub pakiet.
