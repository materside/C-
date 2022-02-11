//
// Created by Noël Plouzeau on 220210.
//

#include <ostream>
#include "point.h"

// Définition d'une fonction de comparaison (pour permettre l'emploi de conteneurs associatifs,
// telles les map)
bool Point::operator<(const Point &point) const {
    return (x < point.x) && (y < point.y);
}

// Définition de l'opérateur << pour la classe Point
std::ostream & operator<<(std::ostream & out, const Point & point) {
    out << "(" << point.x << "," << point.y << ")";
    return out;
}
