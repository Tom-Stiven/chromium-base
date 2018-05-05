// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "base/strings/utf_string_conversions.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    std::wstring wstr(L"Jackson");
    std::string str = base::UTF16ToUTF8(wstr);
    cout << str << endl;

    return 0;
}
