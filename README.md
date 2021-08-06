dockpack.compile_gcc
====================

ansible-role to compile GCC with a compiler installed with dockpack.base_gcc.

Requirements
------------

Red Hat/Centos 6/7/8 repositories.
You need to have a webserver to store tarballs when working air-gapped.

Role Variables
--------------

see `defaults/main.yml`

Dependencies
------------

dockpack.base_gcc

Example Playbook
----------------

Including an example of how to use your role (for instance, with variables passed in as parameters) is always nice for users too:

```yaml
---
- name: Compiler
  hosts: build_agents
  tasks:
    vars:
    development_groupinstall: false
    collections\_enabled: true
    DTSVER: 10

  roles:
    - role: base_gcc
    - role: compile_gcc
```
License
-------

MIT

Author Information
------------------

@bbaassssiiee
