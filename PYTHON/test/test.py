language: python
python:
  - "2.6"
  - "2.7"
  - "3.2"
  - "3.3"
# command to install dependencies
script: python PYTHON\test\test.py
branches:
  only:
    - master
