name: Unit testing

on:
  push:
    branches: [ main ]
  pull_request:
    branches: [ main ]

jobs:
  build:

    runs-on: ubuntu-latest

    steps:
    - uses: actions/checkout@v2
    - name: Install Cunit
      run: sudo apt-get -y install libcunit1 libcunit1-doc libcunit1-dev 
    - name: make test
      run:  make test -C 3_Implementation/
