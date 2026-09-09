#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Project {
private:
    string name;
    string language;
    string type;

public:
    Project(string projectName, string projectLanguage, string projectType) {
        name = projectName;
        language = projectLanguage;
        type = projectType;
    }

    string getName() const {
        return name;
    }

    string getLanguage() const {
        return language;
    }

    string getType() const {
        return type;
    }
};

class ProjectManager {
private:
    vector<Project> projects;

public:
    void addProject(const Project& project) {
        projects.push_back(project);
    }

    void listProjects() {
        for (const Project& project : projects) {
            cout << project.getName() << endl;
        }
    }

    int getProjectCount() {
        return projects.size();
    }
};

int main() {

    ProjectManager manager;

    Project bookCli("Book_CLI", "C++", "CLI");
    Project zeroAxiis("ZeroAxiis", "Go", "Backend");
    Project harbor("Harbor", "C++", "Desktop");

    manager.addProject(bookCli);
    manager.addProject(zeroAxiis);
    manager.addProject(harbor);

    manager.listProjects();

    cout << "Total projects: "
         << manager.getProjectCount()
         << endl;

    return 0;
}