#include <iostream>
#include <cmath>

class Point {
public:
    double x, y;

    Point(double x = 0, double y = 0) : x(x), y(y) {}
};

class Circle {
public:
    Point center;
    double radius;

    Circle(Point center = Point(), double radius = 0) : center(center), radius(radius) {}

    bool isInside(const Point& p) const {
        double distance = std::sqrt(std::pow(p.x - center.x, 2) + std::pow(p.y - center.y, 2));
        return distance <= radius;
    }

    bool isOnEdge(const Point& p) const {
        double distance = std::sqrt(std::pow(p.x - center.x, 2) + std::pow(p.y - center.y, 2));
        return std::abs(distance - radius) < 1e-6;
    }

    bool isOutside(const Point& p) const {
        double distance = std::sqrt(std::pow(p.x - center.x, 2) + std::pow(p.y - center.y, 2));
        return distance > radius;
    }
};

int main() {
    Circle circle(Point(0, 0), 5);
    Point p1(3, 4);
    Point p2(6, 8);

    std::cout << "��(" << p1.x << ", " << p1.y << ")��Բ��λ�ù�ϵ�� ";
    if (circle.isInside(p1)) {
        std::cout << "��Բ��" << std::endl;
    }
    else if (circle.isOnEdge(p1)) {
        std::cout << "��Բ��" << std::endl;
    }
    else {
        std::cout << "��Բ��" << std::endl;
    }

    std::cout << "��(" << p2.x << ", " << p2.y << ")��Բ��λ�ù�ϵ�� ";
    if (circle.isInside(p2)) {
        std::cout << "��Բ��" << std::endl;
    }
    else if (circle.isOnEdge(p2)) {
        std::cout << "��Բ��" << std::endl;
    }
    else {
        std::cout << "��Բ��" << std::endl;
    }

    return 0;
};
