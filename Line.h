// Line.h
#ifndef LINE_H // Line.h ��� ������ ���� �� ���ԵǴ� ���� �����ϱ� ���� ���Ǻ� ������ ����
#define LINE_H

#include "Shape.h" // Shape Ŭ���� ���� ����

// Line Ŭ����: Shape Ŭ������ �Ļ� Ŭ����
// ��(Line)�� ǥ���ϸ�, Shape�� ���� �������̽��� ����
class Line : public Shape {
protected:
    // draw() �޼���: Shape Ŭ������ ���� ���� �Լ��� ������
    // Line.cpp���� ��ü������ ���� �׸��� ������ ����
    void draw() override; 
};

#endif // Line.h ��� ���� ���� ���Ǻ� ������ ����
