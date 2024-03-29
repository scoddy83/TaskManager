// Task Klasse für TaskManager App
#ifndef TASK_H
#define TASK_H
#include <string>

class Task {
public:
    Task(const int _id, const std::string& _title) : id {_id}, title {_title}, status {0} {}
    
    void setTitle(const std::string& _title) { title = _title; }
    void setText(const std::string& _text) { text = _text; }
    void setNewStatus(int _status) { status = _status; }
    
    int getId() { return id; }
    std::string getTitle() { return title; }
    std::string getText() { return text; }
    int getStatus() { return status; }

private:
    int id;
    std::string title;
    std::string text;
    int status;
};
#endif