#include <vector>

using std::vector;

class Page {
    public:
        Page(int x,int y,int width,int height,int id,char content):x(x),y(y),width(width),height(height),id(id),content(content)
        {}
        int get_x() const { return x;}
        int get_y() const { return y;}
        int get_width() const { return width;}
        int get_height() const { return height;}
        int get_id() const { return id;}
        char get_content() const { return content;}

    private:
        int x, y; // position of the page on the board
        int width, height; // width and height of the page 
        int id; // unique id for each page
        char content; 
};
