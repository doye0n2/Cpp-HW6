// Rect.h
#ifndef RECT_H // Rect.h 헤더 파일이 여러 번 포함되는 것을 방지하기 위한 조건부 컴파일 시작
#define RECT_H

#include "Shape.h" // Shape 클래스 정의 포함

// Rect 클래스: Shape 클래스의 파생 클래스
// 사각형(Rectangle)을 표현하며, Shape의 공통 인터페이스를 구현
class Rect : public Shape {
protected:
    // draw() 메서드: Shape 클래스의 순수 가상 함수를 재정의
    // Rect.cpp에서 구체적으로 사각형을 그리는 동작을 정의
    void draw() override;
};

#endif // Rect.h 헤더 파일 포함 조건부 컴파일 종료
