// mian.cpp
#include <iostream> // ����� ��Ʈ�� ����� ���� ���
#include <vector> // ���� �迭 �����̳ʸ� ����ϱ� ���� ���
#include "Shape.h" // Shape Ŭ������ ���� ����
#include "Circle.h" // Circle Ŭ������ ���� ����
#include "Rect.h" // Rect Ŭ������ ���� ����
#include "Line.h" // Line Ŭ������ ���� ����

using namespace std; // ǥ�� ���ӽ����̽� ���

// ���α׷��� �޴��� ����ϴ� �Լ�
void showMenu() {
    cout << "����: 1, ����: 2, ��κ���: 3, ����: 4 >> "; // �޴� ���
}

int main() {
    vector<Shape*> shapes; // ���� ��ü�� �����ϱ� ���� ���� (Shape ������ ����)
    int choice; // ����� ������ ������ ����

    cout << "�׷��� �������Դϴ�.\n"; // ���α׷� ���� �޽���

    while (true) { // ���α׷��� ����� ������ �ݺ�
        showMenu(); // �޴� ���
        cin >> choice; // ����� �Է� �ޱ�

        if (choice == 1) { // ���� ����
            cout << "��:1, ��:2, �簢��:3 >> "; // ���� ���� ���� �޽���
            int type; // ���� ������ ������ ����
            cin >> type; // ���� ���� �Է� �ޱ�

            if (type == 1) { // ����ڰ� ���� ������ ���
                shapes.push_back(new Line()); // Line ��ü ���� �� ���Ϳ� �߰�
            }
            else if (type == 2) { // ����ڰ� ���� ������ ���
                shapes.push_back(new Circle()); // Circle ��ü ���� �� ���Ϳ� �߰�
            }
            else if (type == 3) { // ����ڰ� �簢���� ������ ���
                shapes.push_back(new Rect()); // Rect ��ü ���� �� ���Ϳ� �߰�
            }
            else { // ��ȿ���� ���� �Է� ó��
                cout << "�߸��� �Է��Դϴ�. �ٽ� �õ��ϼ���." << endl; // ���� �޽��� ���
            }
        }
        else if (choice == 2) { // ���� ����
            cout << "�����ϰ��� �ϴ� ������ �ε��� >> "; // ������ �ε��� �Է� ��û
            int index; // ������ �ε����� ������ ����
            cin >> index; // ����ڷκ��� �ε��� �Է� �ޱ�

            if (index >= 0 && index < shapes.size()) { // ��ȿ�� �ε������� Ȯ��
                delete shapes[index]; // �޸� ����
                shapes.erase(shapes.begin() + index); // ���Ϳ��� ��� ����
            }
            else { // ��ȿ���� ���� �ε��� ó��
                cout << "�߸��� �ε����Դϴ�." << endl; // ���� �޽��� ���
            }
        }
        else if (choice == 3) { // ��� ���� ���
            for (int i = 0; i < shapes.size(); ++i) { // ���� ��ȸ
                cout << i << ": "; // ���� �ε��� ���
                shapes[i]->paint(); // �� ������ paint() ȣ��
            }
        }
        else if (choice == 4) { // ���α׷� ����
            for (auto shape : shapes) { // ���Ϳ� ����� ��� ���� ����
                delete shape; // �޸� ����
            }
            shapes.clear(); // ���� ����
            break; // �ݺ��� Ż��
        }
        else { // ��ȿ���� ���� ��� ó��
            cout << "�߸��� �Է��Դϴ�. �ٽ� �õ��ϼ���." << endl; // ���� �޽��� ���
        }
    }

    return 0; // ���α׷� ����
}
