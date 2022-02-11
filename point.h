//
// Created by Noël Plouzeau on 220210.
//

#pragma once

class Point {
public:
    Point(double _x, double _y) : x(_x), y(_y) {}

    bool operator<(const Point &point) const;

    double x;
    double y;
    // Permettre l'accès aux coordonnées x et y depuis l'opérateur <<
    friend std::ostream &operator<<(std::ostream &out, const Point &point);
};
