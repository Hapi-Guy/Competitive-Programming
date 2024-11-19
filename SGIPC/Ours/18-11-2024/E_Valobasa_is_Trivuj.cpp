// #include <iostream>
// #include <cmath>
// using namespace std;

// // Function to calculate the squared distance between two points
// int squaredDistance(int x1, int y1, int x2, int y2) {
//     return (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
// }

// // Function to check if three sides satisfy the Pythagorean theorem
// bool isRightTriangle(int d1, int d2, int d3) {
//     return (d1 + d2 == d3) || (d1 + d3 == d2) || (d2 + d3 == d1);
// }

// // Function to check if moving a point by 1 unit can make the triangle right-angled
// bool isAlmostRight(int x1, int y1, int x2, int y2, int x3, int y3) {
//     int dx[] = {1, -1, 0, 0}; // x-direction adjustments
//     int dy[] = {0, 0, 1, -1}; // y-direction adjustments

//     for (int i = 0; i < 4; ++i) {
//         // Move first point
//         if (isRightTriangle(squaredDistance(x1 + dx[i], y1 + dy[i], x2, y2),
//                             squaredDistance(x2, y2, x3, y3),
//                             squaredDistance(x3, y3, x1 + dx[i], y1 + dy[i]))) {
//             return true;
//         }
//         // Move second point
//         if (isRightTriangle(squaredDistance(x1, y1, x2 + dx[i], y2 + dy[i]),
//                             squaredDistance(x2 + dx[i], y2 + dy[i], x3, y3),
//                             squaredDistance(x3, y3, x1, y1))) {
//             return true;
//         }
//         // Move third point
//         if (isRightTriangle(squaredDistance(x1, y1, x2, y2),
//                             squaredDistance(x2, y2, x3 + dx[i], y3 + dy[i]),
//                             squaredDistance(x3 + dx[i], y3 + dy[i], x1, y1))) {
//             return true;
//         }
//     }
//     return false;
// }

// int main() {
//     int x1, y1, x2, y2, x3, y3;
//     cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

//     // Calculate squared distances between points
//     int d1 = squaredDistance(x1, y1, x2, y2);
//     int d2 = squaredDistance(x2, y2, x3, y3);
//     int d3 = squaredDistance(x3, y3, x1, y1);

//     // Check if the triangle is right-angled
//     if (isRightTriangle(d1, d2, d3)) {
//         cout << "RIGHT" << endl;
//     } else if (isAlmostRight(x1, y1, x2, y2, x3, y3)) {
//         cout << "ALMOST" << endl;
//     } else {
//         cout << "NEITHER" << endl;
//     }

//     return 0;
// }


#include <iostream>
#include <vector>

using namespace std;

// Function to calculate squared distance between two points
int squaredDistance(int x1, int y1, int x2, int y2) {
    return (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
}

// Function to check if a triangle is right-angled based on squared distances
bool isRightTriangle(int d1, int d2, int d3) {
    return (d1 + d2 == d3) || (d1 + d3 == d2) || (d2 + d3 == d1);
}

int main() {
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    // Calculate squared distances between points
    int d1 = squaredDistance(x1, y1, x2, y2);
    int d2 = squaredDistance(x2, y2, x3, y3);
    int d3 = squaredDistance(x3, y3, x1, y1);

    // Check if the given triangle is right-angled
    if (isRightTriangle(d1, d2, d3)) {
        cout << "RIGHT" << endl;
        return 0;
    }

    // Arrays to move a point in four directions
    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, 1, 0, -1};

    // Check if moving any point by 1 unit makes the triangle right-angled
    vector<pair<int, int>> points = {{x1, y1}, {x2, y2}, {x3, y3}};

    for (int i = 0; i < 3; ++i) { // Iterate through each point
        for (int j = 0; j < 4; ++j) { // Move each point in four directions
            int newX = points[i].first + dx[j];
            int newY = points[i].second + dy[j];

            // Replace the current point with the moved point
            vector<pair<int, int>> newPoints = points;
            newPoints[i] = {newX, newY};

            // Calculate new squared distances
            int newD1 = squaredDistance(newPoints[0].first, newPoints[0].second, newPoints[1].first, newPoints[1].second);
            int newD2 = squaredDistance(newPoints[1].first, newPoints[1].second, newPoints[2].first, newPoints[2].second);
            int newD3 = squaredDistance(newPoints[2].first, newPoints[2].second, newPoints[0].first, newPoints[0].second);

            if (isRightTriangle(newD1, newD2, newD3)) {
                cout << "ALMOST" << endl;
                return 0;
            }
        }
    }

    // If no right or almost-right triangle was found
    cout << "NEITHER" << endl;
    return 0;
}
