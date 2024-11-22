// Rect.h
#ifndef RECT_H // Rect.h ��� ������ ���� �� ���ԵǴ� ���� �����ϱ� ���� ���Ǻ� ������ ����
#define RECT_H

#include "Shape.h" // Shape Ŭ���� ���� ����

// Rect Ŭ����: Shape Ŭ������ �Ļ� Ŭ����
// �簢��(Rectangle)�� ǥ���ϸ�, Shape�� ���� �������̽��� ����
class Rect : public Shape {
protected:
    // draw() �޼���: Shape Ŭ������ ���� ���� �Լ��� ������
    // Rect.cpp���� ��ü������ �簢���� �׸��� ������ ����
    void draw() override;
};

#endif // Rect.h ��� ���� ���� ���Ǻ� ������ ����
