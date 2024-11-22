// Shape.h
#ifndef SHAPE_H // Shape.h 헤더 파일을 포함하는 조건부 컴파일 시작
#define SHAPE_H

#include <iostream> // 표준 입출력 라이브러리 포함
using namespace std; // std 네임스페이스 사용 선언

// Shape 클래스: 추상 클래스 역할을 수행
// 모든 도형의 공통적인 인터페이스를 제공하며, 구체적인 구현은 파생 클래스에서 처리
class Shape {
protected:
    // 순수 가상 함수: 도형을 그리는 동작을 정의
   // 모든 파생 클래스에서 반드시 재정의되어야 함
    virtual void draw() = 0; 
public:
    virtual ~Shape() {} // 가상 소멸자: 동적 객체 삭제 시 파생 클래스의 소멸자를 올바르게 호출
    // paint() 함수: 공통 인터페이스를 통해 draw()를 호출
    // 외부에서 호출 가능하며, 내부적으로 draw()를 통해 다형성 구현
    void paint() { 
        draw(); // 동적 바인딩을 통해 파생 클래스의 draw() 호출
    }
};

#endif // Shape.h 헤더 파일 포함 조건부 컴파일 종료
