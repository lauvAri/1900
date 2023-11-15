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

    std::cout << "点(" << p1.x << ", " << p1.y << ")与圆的位置关系： ";
    if (circle.isInside(p1)) {
        std::cout << "在圆内" << std::endl;
    }
    else if (circle.isOnEdge(p1)) {
        std::cout << "在圆上" << std::endl;
    }
    else {
        std::cout << "在圆外" << std::endl;
    }

    std::cout << "点(" << p2.x << ", " << p2.y << ")与圆的位置关系： ";
    if (circle.isInside(p2)) {
        std::cout << "在圆内" << std::endl;
    }
    else if (circle.isOnEdge(p2)) {
        std::cout << "在圆上" << std::endl;
    }
    else {
        std::cout << "在圆外" << std::endl;
    }

    return 0;
};
