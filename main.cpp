// mian.cpp
#include <iostream> // 입출력 스트림 사용을 위한 헤더
#include <vector> // 동적 배열 컨테이너를 사용하기 위한 헤더
#include "Shape.h" // Shape 클래스의 선언 포함
#include "Circle.h" // Circle 클래스의 선언 포함
#include "Rect.h" // Rect 클래스의 선언 포함
#include "Line.h" // Line 클래스의 선언 포함

using namespace std; // 표준 네임스페이스 사용

// 프로그램의 메뉴를 출력하는 함수
void showMenu() {
    cout << "삽입: 1, 삭제: 2, 모두보기: 3, 종료: 4 >> "; // 메뉴 출력
}

int main() {
    vector<Shape*> shapes; // 도형 객체를 저장하기 위한 벡터 (Shape 포인터 저장)
    int choice; // 사용자 선택을 저장할 변수

    cout << "그래픽 에디터입니다.\n"; // 프로그램 시작 메시지

    while (true) { // 프로그램이 종료될 때까지 반복
        showMenu(); // 메뉴 출력
        cin >> choice; // 사용자 입력 받기

        if (choice == 1) { // 도형 삽입
            cout << "선:1, 원:2, 사각형:3 >> "; // 도형 종류 선택 메시지
            int type; // 도형 종류를 저장할 변수
            cin >> type; // 도형 종류 입력 받기

            if (type == 1) { // 사용자가 선을 선택한 경우
                shapes.push_back(new Line()); // Line 객체 생성 및 벡터에 추가
            }
            else if (type == 2) { // 사용자가 원을 선택한 경우
                shapes.push_back(new Circle()); // Circle 객체 생성 및 벡터에 추가
            }
            else if (type == 3) { // 사용자가 사각형을 선택한 경우
                shapes.push_back(new Rect()); // Rect 객체 생성 및 벡터에 추가
            }
            else { // 유효하지 않은 입력 처리
                cout << "잘못된 입력입니다. 다시 시도하세요." << endl; // 오류 메시지 출력
            }
        }
        else if (choice == 2) { // 도형 삭제
            cout << "삭제하고자 하는 도형의 인덱스 >> "; // 삭제할 인덱스 입력 요청
            int index; // 삭제할 인덱스를 저장할 변수
            cin >> index; // 사용자로부터 인덱스 입력 받기

            if (index >= 0 && index < shapes.size()) { // 유효한 인덱스인지 확인
                delete shapes[index]; // 메모리 해제
                shapes.erase(shapes.begin() + index); // 벡터에서 요소 제거
            }
            else { // 유효하지 않은 인덱스 처리
                cout << "잘못된 인덱스입니다." << endl; // 오류 메시지 출력
            }
        }
        else if (choice == 3) { // 모든 도형 출력
            for (int i = 0; i < shapes.size(); ++i) { // 벡터 순회
                cout << i << ": "; // 도형 인덱스 출력
                shapes[i]->paint(); // 각 도형의 paint() 호출
            }
        }
        else if (choice == 4) { // 프로그램 종료
            for (auto shape : shapes) { // 벡터에 저장된 모든 도형 삭제
                delete shape; // 메모리 해제
            }
            shapes.clear(); // 벡터 비우기
            break; // 반복문 탈출
        }
        else { // 유효하지 않은 명령 처리
            cout << "잘못된 입력입니다. 다시 시도하세요." << endl; // 오류 메시지 출력
        }
    }

    return 0; // 프로그램 종료
}
