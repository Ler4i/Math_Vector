#pragma once
#include <iostream>
#include <cmath>

//шаблоны тут писать

class Math_Vector
{
public:
    Math_Vector() = default;
    Math_Vector(double x, double y);

    Math_Vector operator+ (const Math_Vector& m_v) const;
    Math_Vector operator- (const Math_Vector& m_v) const;
    int operator* (const Math_Vector& m_v) const;
    Math_Vector operator* (int lambda) const;

    double Length() const;
    friend double Length(const Math_Vector& m_v);
    friend std::ostream& operator<<(std::ostream& ofst, const Math_Vector& m_v);
    Math_Vector normalization() const;


private:
    double  m_x;//имя поля класса через m_
    double m_y;

};

Math_Vector::Math_Vector(double x, double y) : m_x(x), m_y(y) {}

Math_Vector Math_Vector::operator +(const Math_Vector& m_v) const {
    return Math_Vector{ m_x + m_v.m_x, m_y + m_v.m_y };    //a + b = {ax + bx; ay + by}
}

Math_Vector Math_Vector::operator -(const Math_Vector& m_v) const {
    return Math_Vector{ m_x - m_v.m_x, m_y - m_v.m_y };    //a - b = {ax - bx; ay - by}
}

//скалярное произведение 
int Math_Vector::operator *(const Math_Vector& m_v) const {
    return  m_x * m_v.m_x + m_y * m_v.m_y;
}

// произведение на число
Math_Vector Math_Vector::operator *(int lambda) const {
    return { m_x * lambda ,m_y * lambda };
}

std::ostream& operator<<(std::ostream& ofst, const Math_Vector& m_v) {
    ofst << m_v.m_x << "," << m_v.m_y;
    return ofst;
}

double Math_Vector::Length() const {
    return std::sqrt(this->m_x * this->m_x + this->m_y * this->m_y);
};

double Length(const Math_Vector& m_v) {
    //return std::sqrt(m_v.X * m_v.X + m_v.Y * m_v.Y );
    return m_v.Length();
};

Math_Vector Math_Vector::normalization() const {
    if (Length() == 0) {
        std::cout << "The length is 0, it turns out that just a dot: ";
        return { 0,0 };
    }
    else return { m_x / Length(), m_y / Length() };
};

//Math_Vector::~Math_Vector() {}; //можно и не писать деструктор или написать = default 

#pragma once
