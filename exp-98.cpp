#include <iostream>
#include <vector>
using namespace std;

class Widget {
public:
    virtual void draw() = 0;
    virtual void click() = 0;
    virtual ~Widget() {}
};

class Button : public Widget {
public:
    void draw() override { cout << "Drawing Button" << endl; }
    void click() override { cout << "Button clicked" << endl; }
};

class TextBox : public Widget {
public:
    void draw() override { cout << "Drawing TextBox" << endl; }
    void click() override { cout << "TextBox clicked" << endl; }
};

class GUI {
    vector<Widget*> widgets;
public:
    void addWidget(Widget* w) { widgets.push_back(w); }
    void render() {
        for (auto w : widgets) w->draw();
    }
    void clickAll() {
        for (auto w : widgets) w->click();
    }
    ~GUI() {
        for (auto w : widgets) delete w;
    }
};

int main() {
    GUI gui;
    gui.addWidget(new Button());
    gui.addWidget(new TextBox());
    gui.render();
    gui.clickAll();
    return 0;
}