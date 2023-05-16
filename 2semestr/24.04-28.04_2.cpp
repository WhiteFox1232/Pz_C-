#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class FlightBooking {
public:
  FlightBooking(int id, int capacity, int reserved);
  void printStatus() const;
  bool reserveSeats(int number_of_seats);
  bool cancelReservations(int number_of_seats);

private:
  int id;
  int capacity;
  int reserved;
};

FlightBooking::FlightBooking(int id, int capacity, int reserved)
    : id(id), capacity(capacity), reserved(reserved) {
  if (reserved > capacity) {
    this->reserved = capacity;
  } else if (reserved < 0) {
    this->reserved = 0;
  }
}

void FlightBooking::printStatus() const {
  double percentage = static_cast<double>(reserved) / capacity * 100;

  cout << "Flight " << id << ": " << reserved << "/" << capacity << " (" << fixed << setprecision(0) << percentage << "%) seats reserved" << endl;
}

bool FlightBooking::reserveSeats(int number_of_seats) {
  int new_reserved = reserved + number_of_seats;
  double max_capacity = capacity * 1.05;

  if (new_reserved <= max_capacity) {
    reserved = new_reserved;
    return true;
  } else {
    return false;
  }
}

bool FlightBooking::cancelReservations(int number_of_seats) {
  int new_reserved = reserved - number_of_seats;

  if (new_reserved >= 0) {
    reserved = new_reserved;
    return true;
  } else {
    return false;
  }
}

int main() {
  int reserved = 0,
      capacity = 0;

  cout << "Вкажіть місткість рейсу: ";
  cin >> capacity;
  cout << "Вкажіть кількість зарезервованих місць: ";
  cin >> reserved;

  FlightBooking booking(1, capacity, reserved);
  string command;

  while (true) {
    booking.printStatus();
    cout << "Що бажаєте зробити? (Для виходу введіть 'quit'): ";
    cin >> command;

    if (command == "quit") {
      break;
    } else if (command == "add") {
      int number;
      cin >> number;

      if (!booking.reserveSeats(number)) {
        cout << "Не вдалося виконати цю операцію" << endl;
      }
    } else if (command == "cancel") {
      int number;
      cin >> number;

      if (!booking.cancelReservations(number)) {
        cout << "Не вдалося виконати цю операцію" << endl;
      }
    } else {
      cout << "Невідома команда" << endl;
    }
  }

  return 0;
}