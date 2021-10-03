ios_base::sync_with_stdio(false); cin.tie(0);
    
    int n, a, d;
    cin >> n;
    
    while (cin >> a >> d) {
        // koliko je presao ukupno
        long long S = a;
        // koliko je presao u tekucem danu
        int x = a;
        
        for (int i = 1; i < n; i++) {
            x += d;
            S += x;
        }
        cout << x << '\n';
    }