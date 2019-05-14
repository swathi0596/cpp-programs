template <typename T> class point2D
{
        protected:
                T x;
                T y;

        public:
                point2D(T x=0, T y=0)
                {
                        this->x = x;
                        this->y = y;
                }
                T getx() const
                {
                        return x;
                }
                T gety() const
                {
                        return y;
                }
                void setx(T x)
                {
                        this->x = x;
                }
                void sety(T y)
                {
                        this->y = y;
                }

//                template <typename U> friend point2D<U> operator +(const point2D<U>& p1, const point2D<U>& p2);
//                template <typename U> friend point2D<U>& operator +=(point2D<U>& p1, const point2D<U>& p2);
//                template <typename U> friend point2D<U> operator -(const point2D<U>& p1, const point2D<U>& p2);
//                template <typename U> friend point2D<U>& operator -=(point2D<U>& p1, const point2D<U>& p2);
};

template <typename T> class point3D : public point2D<T>
{
        protected:
                T z;

        public:
                point3D(T x=0, T y=0, T z=0): point2D<T>(x, y)
                {
                        this->z = z;
                }
                T getz() const
                {
                        return z;
                }
                void setz(T z)
                {
                        this->z = z;
                }

//                template <typename U> friend point3D<U> operator +(const point3D<U>& p1, const point3D<U>& p2);
//                template <typename U> friend point3D<U>& operator +=(point3D<U>& p1, const point3D<U>& p2);
//                template <typename U> friend point3D<U> operator -(const point3D<U>& p1, const point3D<U>& p2);
//                template <typename U> friend point3D<U>& operator -=(point3D<U>& p1, const point3D<U>& p2);
};

