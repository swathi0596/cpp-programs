#include "point.h"

template <typename T>
point2D<T> operator +(const point2D<T>& p1, const point2D<T>& p2)
{
        point2D<T> res;
        res.setx(p1.getx() + p2.getx());
        res.sety(p1.gety() + p2.gety());
        return res;
}

template <typename T>
point2D<T>& operator +=(point2D<T>& p1, const point2D<T>& p2)
{
        p1.setx(p1.getx() + p2.getx());
        p1.sety(p1.gety() + p2.gety());
        return p1;
}

template <typename T>
point2D<T> operator -(const point2D<T>& p1, const point2D<T>& p2)
{
        point2D<T> res;
        res.setx(p1.getx() - p2.getx());
        res.sety(p1.gety() - p2.gety());
        return res;
}

template <typename T>
point2D<T>& operator -=(point2D<T>& p1, const point2D<T>& p2)
{
        p1.setx(p1.getx() - p2.getx());
        p1.sety(p1.gety() - p2.gety());
        return p1;
}

template <typename T>
point3D<T> operator +(const point3D<T>& p1, const point3D<T>& p2)
{
        point3D<T> res;
        res.setx(p1.getx() + p2.getx());
        res.sety(p1.gety() + p2.gety());
        res.setz(p1.getz() + p2.getz());
        return res;
}

template <typename T>
point3D<T>& operator +=(point3D<T>& p1, const point3D<T>& p2)
{
        p1.setx(p1.getx() + p2.getx());
        p1.sety(p1.gety() + p2.gety());
        p1.setz(p1.getz() + p2.getz());
        return p1;
}

template <typename T>
point3D<T> operator -(const point3D<T>& p1, const point3D<T>& p2)
{
        point3D<T> res;
        res.setx(p1.getx() - p2.getx());
        res.sety(p1.gety() - p2.gety());
        res.setz(p1.getz() - p2.getz());
        return res;
}

template <typename T>
point3D<T>& operator -=(point3D<T>& p1, const point3D<T>& p2)
{
        p1.setx(p1.getx() - p2.getx());
        p1.sety(p1.gety() - p2.gety());
        p1.setz(p1.getz() - p2.getz());
        return p1;
}
