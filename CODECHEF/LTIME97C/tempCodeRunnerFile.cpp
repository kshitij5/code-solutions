signed main(){
//    ios::sync_with_stdio(0);
//   cin.tie(0); cout.tie(0);

    int t;  //no of test cases
    cin >> t;

    while (t--){
        int a, b;
        cin >> a >> b;

        if(b&(-b)) {
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}