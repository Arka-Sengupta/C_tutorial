#include<iostream>
#include<cmath>
using namespace std;
class Point2D{
    private:
        double x;
        double y;
    public:
        Point2D(double x, double y){
            this->x=x;
            this->y=y;
        }
        friend double calcDist(Point2D &point1, Point2D &point2);
};
double calcDist(Point2D &point1, Point2D &point2){
    double dx = point1.x - point2.x;
    double dy = point1.y - point2.y;
    double dxsq = pow(dx,2);
    double dysq = pow(dy,2);
    double dist = sqrt(dxsq+dysq);
    return dist;
}
int main(){
    double x1,y1;
    double x2,y2;
    cin>>x1>>y1;
    Point2D p1(x1,y1);
    cin>>x2>>y2;
    Point2D p2(x2,y2);
    cout<<calcDist(p1,p2);
    return 0;
}