#include <bits/stdc++.h>
using namespace std;

struct Shl{
    string cmd;
    
    Shl(){cmd = "pwd > gugu.log";}
    Shl(string s){cmd = s;}
    
    void push(string s){
        cmd = cmd + " && " + s;
    }
    
    void flush(){
        system(cmd.c_str());
        cmd = "";
    }
};

int main(){
    Shl sys;
    ofstream fout("a.cpp");
    fout<<"#include <bits/stdc++.h"<<endl;
    fout<<"using namespace std;"<<endl<<endl;
    fout<<"int main(){"<<endl;
    fout<<"cout<<\"hello,World\"<<endl;"<<endl;
    fout<<"return0;}"<<endl;
    fout.close();
    
    sys.push("g++ a.cpp -o a > gugu.log");
    sys.push("./a > gugu.log");
    sys.push("cat gugu.log");
    sys.flush();
    
    return 0;
}
