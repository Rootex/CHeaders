void intersection(int x1_, int y1_, int x2_, int y2_, 
                  int x3_, int y3_, int x4_, int y4_){
                      
                      
    int x1, y1, x2, y2, x3, y3, x4, y4;
    int a, b, c, d, a1, b1, c1, d1;
    int numX, numY, detA, x, y;
    
    x1 = x1_, y1 = y1_;
    x2 = x2_, y2 = y2_;
    x3 = x3_, y3 = y3_;
    x4 = x4_, y4 = y4_;
    
    a = (x1 * y2) - (y1 * x2);
    b = x1 - x2;
    c = (x3 * y4) - (y3 * x4);
    d = x3 - x4;
    
    a1 = (x1 * y2) - (y1 * x2);
    b1 = y1 - y2;
    c1 = (x3 * y4) - (y3 * x4);
    d1 = y3 - y4;
    
    numX = (a * d) - (b * c);
    numY = (a1 * d1) - (b1 * c1);
    
    detA = ((x1 - x2) * (y3 - y4)) - ((y1 - y2) * (x3 - x4));
    
    x = numX / detA;
    y = numY / detA;
    
    line(x1, y1, x2, y2);
    line(x3, y3, x4, y4);
    circle(x, y, 20);
    circle(x1, y1, 10);
    circle(x2, y2, 10);
    circle(x3, y3, 10);
    circle(x4, y4, 10);
                      
                      }
                      
void intersection2(int x_1, int y_1, int x_2, int y_2,
                  int x_1_, int y_1_, int x_2_, int y_2_){
    //declearing and initializing all the coordinates od the two lines
    int x1=x_1, y1=y_1;
    int x2=x_2, y2=y_2;
    int x1_=x_1_, y1_=y_1_;
    int x2_=x_2_, y2_=y_2_;
    
    //declearing and defining the a,b,c constants of ax+by+c
    int a = y2-y1;
    int b = x1-x2;
    int c = ((y1-y2)*x1) + ((x2-x1)*y1);
    int a_ = y2_-y1_;
    int b_ = x1_-x2_;
    int c_ = ((y1_-y2_)*x1_) + ((x2_-x1_)*y1_);
    
    
    //determinant of A
    int detA = ( a * b_ ) - ( a_ * b);
    
    //finding x and y values of the intersection coordinate
    int numX = ((-c) * b_) - ((-c_) * b);//numerator of x
    int numY = ( a * (-c_)) - (a_ * (-c));//numerator of y
    int x = numX / detA;//x value of the intersection
    int y = numY / detA;//y value of the intersection
    
    //if (x < 0) x*=-1;
    //if (y < 0) y*=-1;
    
    //drawing the rectangles and the lines
    line(x1, y1, x2, y2);
    line(x1_, y1_, x2_, y2_);
    circle(x1, y1, 10);
    circle(x1_, y1_, 10);
    circle(x2, y2, 10);
    circle(x2_, y2_, 10);
    circle(x, y, 10);
                      
                      }
