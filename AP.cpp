// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         int a, b, c;
//         cin>>a>>b>>c;
//         int totaln=2*c/(a+b);
//         cout<<totaln<<endl;
//         int d=(b-a)/(totaln-5);
//         int a1=a-(2*d);
//         for(int t=0;t<totaln;t++){
//            cout<<a1<<" ";
//            a1=a1+d;
//         }
//     }
// }
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b == 0) {
            cout << "Invalid input: Division by zero." << endl;
            continue;
        }

        int totaln = 2 * c / (a + b);
        cout << totaln << endl;

        if (totaln - 5 == 0) {
            cout << "Invalid input: Division by zero." << endl;
            continue;
        }

        int d = (b - a) / (totaln - 5);
        int a1 = a - (2 * d);

        for (int t = 0; t < totaln; t++) {
            cout << a1 << " ";
            a1 += d;
        }
        cout << endl; // New line after each sequence
    }
    return 0;
}
