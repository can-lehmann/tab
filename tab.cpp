#include <vector>

class Type {
public:
  virtual ~Type() {}
};

class Expr {
};

class IntType : public Type {
};

class TableType : public Type {
};

class ColumnType : public Type {
};

class Value {
  Type* type_;
};

class Cell {
  std::vector<Cell*> influnces_;
  Value value_;
};

class Column {
  std::vector<Cell> cells_;
  Type* type_;
public:
  Column(const Column&) = delete;
  Column& operator=(const Column&) = delete;
  Type* type() { return type_; }
};

class Table {
  std::vector<Column> columns_;
public:
  Table(const Table&) = delete;
  Table& operator=(const Table&) = delete;
};


int main() {
}

