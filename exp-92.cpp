#include <iostream>
#include <vector>
using namespace std;

class Plugin {
public:
    virtual void execute()=0;
    virtual ~Plugin(){}
};

class PluginA: public Plugin {
public:
    void execute() override {
        cout<<"PluginA executed"<<endl;
    }
};

class PluginB: public Plugin {
public:
    void execute() override {
        cout<<"PluginB executed"<<endl;
    }
};

class Application {
    vector<Plugin*> plugins;
public:
    void addPlugin(Plugin* p) {
        plugins.push_back(p);
    }
    void run() {
        for(Plugin* p : plugins)
            p->execute();
    }
    ~Application() {
        for(Plugin* p : plugins)
            delete p;
    }
};

int main() {
    Application app;
    app.addPlugin(new PluginA());
    app.addPlugin(new PluginB());
    app.run();
    return 0;
}