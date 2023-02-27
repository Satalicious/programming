/* https://study.find-santa.eu/exercises/cpp/operator_overloading */

#include <iostream>
#include <vector>

using namespace std;

template <class Type>
vector<Type> operator+(const vector<Type> &v1, const vector<Type> &v2) {
  if (v1.size() > v2.size()) {
    vector<Type> v(v1);
    auto it = v2.begin();
    for (auto &e1 : v) {
      e1 += *it;
      it++;
    }
    return v;
  } else {
    vector<Type> v(v2);
    auto it = v1.begin();
    for (auto &e1 : v) {
      e1 += *it;
      it++;
    }
    return v;
  }
}

template <class Type>
vector<Type> operator-(const vector<Type> &v1, const vector<Type> &v2) {
  if (v1.size() > v2.size()) {
    vector<Type> v(v1);
    auto it = v2.begin();
    for (auto &e1 : v) {
      e1 -= *it;
      it++;
    }
    return v;
  } else {
    vector<Type> v(v1);
    auto it = v2.begin();
    for (auto &e1 : v) {
      e1 -= *it;
      it++;
    }
    while (it != v2.end()) {
      v.push_back(*it++);
    }
    return v;
  }
}

template <class Type>
vector<Type> operator*(const vector<Type> &v1, const vector<Type> &v2) {
/*   if (v1.size() != v2.size())
    exit(-1);
  vector<Type> v(v1);
  auto it = v2.begin();
  for (auto &e : v) {
    e *= *it;
    it++;
  }
  return v; */
  
  if(v1.size() > v2.size()) {
    vector<Type> v(v1);
    auto it = v.begin();
    for(auto &e : v2) {
      *it *= e;
      it++;
    }
    return v;
  } else if (v2.size() > v1.size()) {
      vector<Type> v(v2);
      auto it = v.begin();
      for(auto &e : v1) {
        *it *= e;
        it++;
      }
      return v;
  }

  vector<Type> v(v1);
  auto it = v2.begin();
  for(auto &e : v) {
    e *= *it;
    it++;
  }
  return v;
}

template <class Type> 
vector<Type> operator*(const vector<Type> &v1, int x) {
  vector<Type> v(v1);
  for (auto &e : v) {
    e *= x;
  }
  return v;
}

template <class Type> 
ostream &operator<<(ostream &out, const vector<Type> &v) {
  for (const auto &e : v) {
    out << e << ", ";
  }
  out << "\b\b "; // two backspace characters to overwrite final ", "
  return out;
}

int main() {
  vector<int> v1{1, 2, 5};
  vector<int> v2{7, 8, 5};
  cout << "v1: " << v1 << ", v2: " << v2 << endl;
  cout << "PLUS OPERATOR" << endl;
  vector<int> v3 = v1 + v2;
  cout << v3 << endl;
  cout << "MINUS OPERATOR" << endl;
  vector<int> v4 = v1 - v2;
  cout << v4 << endl;
  cout << "TIMES OPERATOR" << endl;
  vector<int> v5 = v1 * v2;
  cout << v5 << endl;
  cout << "SCALAR VECTOR" << endl;
  vector<int> v6 = v1 * 5;
  cout << v6 << endl;
  return 0;
}