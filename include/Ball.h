#pragma once

class Ball {
private:
    double x, y;
    double angle;
    double power;
public:
    Ball();
    void shoot(double angle, double power);
    double getX() const;
    double getY() const;
};
