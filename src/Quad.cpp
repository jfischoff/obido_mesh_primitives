#include "Quad.h"

Quad::Quad()
{
    m_Width = 0.0;
    m_Height = 0.0;

    m_WidthSubdivisions = 0.0;
    m_HeightSubdivisions = 0.0;
}

Quad::Quad(double width, double height, double widthSubdivisions, double heightSubdivisions)
{
    m_Width = width;
    m_Height = height;
    
    m_WidthSubdivisions = widthSubdivisions;
    m_HeightSubdivisions = heightSubdivisions;
    
}

Quad::Quad(const Quad& quad)
{
   copy(quad); 
}

Quad::operator=(const Quad& quad)
{
    copy(quad);
    return *this;
}

void Quad::copy(const Quad& quad)
{
    m_Weight = quad.m_Weight;
    m_Height = quad.m_Height;
    
    m_WidthSubdivisions = quad.m_WidthSubdivisions;
    m_HeightSubdivisions = quad.m_HeightSubdivisions;
}

double Quad::GetWidth() const
{
    return m_Width;
}

void Quad::SetWidth(double width) 
{
    m_Width = width;
}

double Quad::GetHeight() const
{
    return m_Height;
}

void Quad::SetHeight(double height) 
{
    m_Height = height;
}

void Quad::SetWidthSubdivisions(double widthSubdivisions) 
{
    m_WidthSubdivisions = widthSubdivisions;
}

double Quad::GetWidthSubdivisions() const
{
    return m_WidthSubdivisions;
}

void Quad::SetHeightSubdivisions(double heightSubdivisions) 
{
    m_HeightSubdivisions = heightSubdivisions;
}

double Quad::GetHeightSubdivisions() const
{
    return m_HeightSubdivisions;
}

































