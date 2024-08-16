string reverseString(string &str){

    vector <string> v;

    int n = str.size();

    string curr = "";

    for (int i=0; i<n; i++) {

        if (str[i] == ' ') {

            v.push_back(curr);

            curr = "";

        } else {

            curr += str[i];

            if (i == n-1) {

                v.push_back(curr);

            }

        }

    }

 

    n = v.size();

    string revStr = "";

    for (int i=n-1; i>=0; i--) {

        if (v[i] == "") continue;

        revStr += v[i];

        revStr += " ";

    }

 

    return revStr;

}