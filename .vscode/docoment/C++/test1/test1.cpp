#pragma G++ optimize("Ofast")
#pragma G++ optimize("inline")
#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;
queue<string> commanders;

inline void turn_to_small(string& data) {
    for (int i = 0 ; i <= data.length() ; i++) {
        if (data[i] >= 'A' && data[i] <= 'Z') {
            data[i] -= 'A';
            data[i] += 'a';
        }
    }
    return;
}

inline void taller(string name) {
    cout << "$" << name << ">";
}


//快读
inline int read() {
    int x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9') {
        if (ch == '-') f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9') {
        x = x * 10 + ch - '0';
        ch = getchar();
    }
    return x * f;
}

//快输
inline void write(int x) {
    if (x < 0) {
        putchar('-');
        x = -x;
    }
    if (x >= 10) write(x / 10);
    putchar(x % 10 + '0');
}

//bfs
inline void bfs() {
    while (!commanders.empty()) {
        string command = commanders.front();
        commanders.pop();
        if (command == "help") {
            cout << "help: show help" << endl;
            cout << "add: add a new commander" << endl;
            cout << "show: show all commanders" << endl;
            cout << "exit: exit the program" << endl;
        } else if (command == "add") {
            string name;
            cout << "please input the name of the commander: ";
            cin >> name;
            turn_to_small(name);
            commanders.push(name);
        } else if (command == "show") {
            queue<string> temp = commanders;
            while (!temp.empty()) {
                cout << temp.front() << endl;
                temp.pop();
            }
        } else if (command == "exit") {
            break;
        } else {
            cout << "error: command not found" << endl;
        }
    }
    return;
}

int main() {
    //freopen("test.in", "r", stdin);
    //freopen("test.in", "w", stdout);
    //freopen("test.out", "r", stdin);
    printf("Welcom to the COMMANEDER!\n");
    printf("-------------------------\n");
    string commander, name;
    getline(cin, name);
    if (name == "") {
        fclose(stdin);
        printf("This is your first time to COMMANDER, please write down your name first:");
        cin >> name;
        freopen("test.in", "w", stdout);
        cout << name << endl;
        fclose(stdout);
    }
    fclose(stdin);
    cout << "Hello, " << name << '!' << endl;
    taller(name);
    while (true) {
        //cin >> commander;
        getline(cin, commander);
        if (commander == "exit") {
            printf("Are You sure to quit the COMMANDER?");
            cin >> commander;
            turn_to_small(commander);
            if (commander == "yes") {
                commanders.push("quit");
                printf("Bye!\n");
                break;
            }
        }
        /*
        else if (commander == "\n") {
            taller(name);
            continue;
        }
        */
        commanders.push(commander);
    }
    return 0;
}