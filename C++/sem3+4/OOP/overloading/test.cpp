#include <iostream>
#include <vector>
using namespace std;

template <class Type> 
ostream &operator<<(ostream &out, const vector<Type> &v) {
  for (const auto &e : v) {
    out << e << ", ";
  }
  out << "\b\b "; // two backspace characters to overwrite final ", "
  return out;
}


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
vector<Type>operator-(const vector<Type> &v1, const vector<Type> &v2) {
	vector<Type>v3{v1};
	if (v1.size() > v2.size()) {
		auto it = v2.begin();
		for (auto &e : v3) {
			e -= *it;
			it++;
		}
		return v3;
	}
	else {
		auto it = v2.begin();
		for(auto &e : v3) {
			e-= *it;
			it++;
		}
		while(it != v2.end()) {
			v3.push_back(*it);
			it++;
		}
		return v3;
	}
}

template <class Type>
vector<Type> operator*(const vector<Type> &v1, const vector<Type> &v2) {
	
}

int main() {
vector<int> v1{10,20,30,40,5,6};
vector<int> v2{1,2,3,4};
vector<int> v3 = v1 + v2;
cout << v3 << endl;
vector<int> v4 = v1 - v2;
vector<int> v5 = v2 - v1;
cout << v4 << endl << v5 << endl;
return 0;
}
