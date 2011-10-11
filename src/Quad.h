#ifndef QUAD_H
#define QUAD_H

class Mesh;

class Quad 
{
public:
    //normal stuff
    Quad();
    Quad(double width, double height, double widthSubdivisions, double heightSubdivisions);
    Quad(const Quad& quad);
    Quad& operator=(const Quad& quad);
    void copy(const Quad& quad);
        
    double GetWidth() const;
    void SetWidth(double width);
         
    double GetHeight() const;
    void SetHeight(double height);

    void ToMesh(Mesh* output);

private:
    double m_Width;
    double m_Heigth;

    int m_WidthSubdivisions;
    int m_HeightSubdivisions;     
};

#endif 
