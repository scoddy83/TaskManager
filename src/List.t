// List Klasse für TaskManager App
#ifndef LIST_T
#define LIST_T
#include <string>
#include <cassert>

template <typename T> class List {
public:
    static const unsigned int MAX_SIZE{20};

    // inline definierte Methoden:
    bool empty() const { return anzahl == 0; }
    bool full() const { return anzahl == MAX_SIZE; }
    auto size() const { return anzahl; }
    void clear() { anzahl = 0; }            // Stack leeren

    // Methoden, deren Implementation unter folgt
    const T& top() const;;                  // letztes Element sehen
    void pop();                             // Element entfernen
    // Vorbedingungen für top und pop: Stack ist nicht leeren

    void push(const T& x);                  // x auf den Stack legen
    // Vorbedingungen für top und pop: Stack ist nicht voll

private:
    unsigned int anzahl{0};                 // Anfangswert
    T array[MAX_SIZE];                      // Behälter für Element

};

template <typename T>
const T& List<T>::top() const {
    assert(!empty());
    return array[anzahl-1];
}

template <typename T>
void List<T>::pop() {
    assert(!empty());
    --anzahl;
}

template <typename T>
void List<T>::push(const T& x) {
    assert(!full());
    array[anzahl++] = x;
}
#endif