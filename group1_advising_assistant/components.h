#pragma once
#include <string>
#include <vector>

using namespace std;

class UserAuthentication {
public:
	string username;
	string password;
private:
	bool isAuthenticated;
public:
	UserAuthentication() {

	}
	bool login(string username, string password) {

	}
	void logout() {

	}
	bool reg(string username, string password) { // 'register' is a keyword

	}
};
// rec = recommended, gen = generate, prereq = prerequisites; shortened for ease of access
class CourseRecommendation {
public:
	string studentID;
	vector<string> recCourses;
private:
	bool prereqChecked;
public:
	CourseRecommendation() {

	}
	vector<string> genRec(string studentID) {

	}
	bool checkPrereq(string courseID) {

	}
	vector<string> getRecCourse(string studentID) {

	}
};