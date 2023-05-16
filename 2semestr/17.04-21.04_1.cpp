#include <iostream>
#include <iomanip>

using namespace std;

class FlightBooking {
public:
  FlightBooking(int id, int capacity, int reserved);

  void printStatus() const;

private:
  int id;
  int capacity;
  int reserved;
};

FlightBooking::FlightBooking(int id, int capacity, int reserved)
    : id(id), capacity(capacity), reserved(reserved) {}

void FlightBooking::printStatus() const {
  double percentage = static_cast<double>(reserved) / capacity * 100;

  cout << "Рейс " << id << ": " << reserved << "/" << capacity << " (" << fixed << setprecision(0) << percentage << "%) зайнято місць" << endl;
}

int main() {
  int reserved = 0,
      capacity = 0;

  cout << "Вкажіть місткість рейсу: ";
  cin >> capacity;
  cout << "Вкажіть кількість зарезервованих місць: ";
  cin >> reserved;

  FlightBooking booking(1, capacity, reserved);
  booking.printStatus();

  return 0;
}