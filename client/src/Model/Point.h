#ifndef AIC18_CLIENT_CPP_POINT_H
#define AIC18_CLIENT_CPP_POINT_H

#include <iostream>

#include <json/json.h>

/**
 * A 2d point on the game board
 */
class Point {
public:

    Point() = default;
    ~Point() = default;

    Point(const Point&) = default;
    Point& operator= (const Point&) = default;

    /**
     * Construct a point from given coordinates
     */
    Point(int x, int y);

    void set_x(int x);
    int get_x() const;

    void set_y(int y);
    int get_y() const;

    /**
     * @return This point's representation in json
     */
    Json::Value to_json() const;

    /**
     * Write a point's human-friendly representation to a @see std::ostream
     */
    friend std::ostream& operator<< (std::ostream& output, const Point& point);

private:

    /// The actual coordinates
    int m_x, m_y;
};

#endif // AIC18_CLIENT_CPP_POINT_H
