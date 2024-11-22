// Circle.h
#ifndef CIRCLE_H // Circle.h ��� ������ ���� �� ���ԵǴ� ���� �����ϱ� ���� ���Ǻ� ������ ����
#define CIRCLE_H

#include "Shape.h" // Shape Ŭ���� ���� ����

// Circle Ŭ����: Shape Ŭ������ �Ļ� Ŭ����
// ��(Circle)�� ǥ���ϸ�, Shape�� ���� �������̽��� ����
class Circle : public Shape {
protected:
    // draw() �޼���: Shape Ŭ������ ���� ���� �Լ��� ������
    // Circle.cpp���� ��ü������ ���� �׸��� ������ ����
    void draw() override; 
};

#endif // Circle.h ��� ���� ���� ���Ǻ� ������ ����
