#include <iostream>
#include "point.h"
#include <map>
#include <list>

void essai_map() {
    std::cerr << "Hello, map!" << std::endl;

    std::map<Point, std::string> une_map;

    une_map[Point(1.0, 1.0)] = "un point dans une map";
    une_map[Point(3.0, 4.0)] = "un autre point dans une map";
    std::cerr << une_map[Point(1.0, 1.0)] << std::endl;
    // Itération sur une map
    for (std::map<Point, std::string>::const_iterator iterator(une_map.cbegin());
         iterator != une_map.cend();
         iterator++
            ) {
        std::cerr << iterator->first << " : " << iterator->second << std::endl;
    }
}

void essai_liste() {
    std::list<Point> list;

    list.push_back(Point(1.0, 1.0));
    list.push_back(Point(2.0, 2.0));

    std::list<Point> list2(list);

    for (std::list<Point>::const_iterator iterator(list2.begin());
         iterator != list2.end();
         iterator++) {
        std::cerr << "Point: " << iterator->x << "," << iterator->y << std::endl;
    }

}

int main() {
    essai_map();
    essai_liste();
    return 0;
}
