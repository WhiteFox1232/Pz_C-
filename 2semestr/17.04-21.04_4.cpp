#include <iostream>
#include <string>

using namespace std;

class ShopItemOrder {
private:
  string item_name;
  double unit_price;
  int quantity;

public:
  ShopItemOrder(const string& item_name, double unit_price, int quantity);

  string get_item_name() const;
  void set_item_name(const string& item_name);

  double get_unit_price() const;
  void set_unit_price(double unit_price);

  int get_quantity() const;
  void set_quantity(int quantity);

  double get_total_price() const;
  void print_order() const;
};

ShopItemOrder::ShopItemOrder(const string& item_name, double unit_price, int quantity)
    : item_name(item_name), unit_price(unit_price), quantity(quantity) {}

string ShopItemOrder::get_item_name() const {
  return item_name;
}

void ShopItemOrder::set_item_name(const string& item_name) {
  this->item_name = item_name;
}

double ShopItemOrder::get_unit_price() const {
  return unit_price;
}

void ShopItemOrder::set_unit_price(double unit_price) {
  this->unit_price = unit_price;
}

int ShopItemOrder::get_quantity() const {
  return quantity;
}

void ShopItemOrder::set_quantity(int quantity) {
  this->quantity = quantity;
}

double ShopItemOrder::get_total_price() const {
  return unit_price * quantity;
}

void ShopItemOrder::print_order() const {
  cout << "Деталі замовлення:\n";
  cout << "Назва товару: " << item_name << endl;
  cout << "Ціна за одиницю: $" << unit_price << endl;
  cout << "Кількість: " << quantity << endl;
  cout << "Загальна вартість: $" << get_total_price() << '\n' << endl;
}

int main() {
  ShopItemOrder order("Система", 9.99, 3);
  order.print_order();

  order.set_quantity(5);
  order.set_unit_price(14.99);
  order.print_order();

  return 0;
}