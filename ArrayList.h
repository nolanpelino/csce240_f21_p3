#ifndef ARRAYLIST_
#define ARRAYLIST_
#include <iostream>
using std::ostream;
using std::istream; 

template <class T>
class ArrayList {
       template <class U>
       friend ostream& operator<<(ostream&, ArrayList<U>);
  
       template <class U> 
       friend istream& operator>>(istream&, ArrayList<U>); 
 public:
        ArrayList();
        explicit ArrayList(int size, T val = 0);
        ArrayList(const ArrayList<T> &);
        ~ArrayList();

        void print() const;
        int getSize() const;
        T getData(int) const;
        T  operator[](int) const;
        T& operator[](int);
        const ArrayList<T> & operator=(const ArrayList<T>);
  
        // Functions to complete:
        bool operator!=(const ArrayList<T> &) const;
  
        ArrayList<T> operator+(T) const;
        ArrayList<T> operator+(const ArrayList<T> &) const;
  
        ArrayList<T> & operator--(); 
        ArrayList<T> operator--(int);
  
        void operator+=(T); 
        void operator+=(ArrayList<T> &);
  
        ArrayList<T> operator*(T); 
        ArrayList<T> operator/(T);

 private:
        T *data;
        int size;
        void setSize(int);
};
#endif 