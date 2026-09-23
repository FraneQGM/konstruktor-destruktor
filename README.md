# Implementacja Kolejki (FIFO) w C++

Prosty program w języku C++ demonstrujący własną implementację dynamicznej struktury danych – **kolejki (Queue)** opartej na liście jednokierunkowej, umieszczonej wewnątrz klasy `uczen`.

---

## 📌 Spis treści
- [Opis działania](#-opis-działania)
- [Struktura kodu](#-struktura-kodu)
- [Funkcjonalności](#-funkcjonalności)
- [Kompilacja i uruchomienie](#-kompilacja-i-uruchomienie)
- [Przykładowy wynik](#-przykładowy-wynik)

---

## 📖 Opis działania

Program tworzy kolejkę według zasady **FIFO** (*First In, First Out* – pierwszy na wejściu, pierwszy na wyjściu). 

Każdy nowy element jest dodawany na koniec kolejki (na wskaźnik `koniec`), a przeglądanie odbywa się od początku (wskaźnik `poczatek`). Klasa automatycznie dba o zwolnienie pamięci alokowanej dynamicznie (`new`) dzięki zastosowaniu destruktora.

---

## 🏗 Struktura kodu

### 1. `struct kolejka`
Reprezentuje pojedynczy węzeł kolejki.
* `int liczba` – przechowywana wartość liczVerification.
* `kolejka* nastepny` – wskaźnik na kolejny element w kolejce.

### 2. `class uczen`
Klasa zarządzająca całą kolejką.
* **Pola prywatne:**
  * `kolejka* poczatek` – wskaźnik na pierwszy element kolejki.
  * `kolejka* koniec` – wskaźnik na ostatni element kolejki.
  * `int nr` – numer identyfikacyjny ucznia (konstruktor go przyjmuje, lecz nie jest bezpośrednio używany w wypisywaniu).
* **Metody publiczne:**
  * `uczen(int _nr)` – konstruktor inicjalizujący wskaźniki na `NULL`.
  * `int dodaj(int liczba_dodawana)` – alokuje pamięć i dodaje nową liczbę na koniec kolejki.
  * `void wypisz()` – iteruje po kolejce i wypisuje wszystkie elementy w konsoli.
  * `void usun()` – iteracyjnie usuwa wszystkie elementy kolejki i zwalnia pamięć (`delete`).
  * `~uczen()` – destruktor wywołujący metodę `usun()`, zapobiegający wyciekom pamięci.

---

## ✨ Funkcjonalności

* **Dynamiczne zarządzanie pamięcią** – brak sztywnego limitu rozmiaru kolejki.
* **Bezpieczeństwo pamięci** – automatyczne czyszczenie pamięci po zakończeniu działania obiektu (Rule of Zero/Three w podstawowym zakresie).
* **Prosty interfejs** – podstawowe operacje do obsługi danych.

---

## 🚀 Kompilacja i uruchomienie

### Wymagania:
* Kompilator C++ (np. `g++`, `clang++` lub wbudowany w MS Visual Studio / Code::Blocks).

### Kompilacja za pomocą GCC:
```bash
g++ -o kolejka main.cpp
