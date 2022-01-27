#!/bin/bash
# Run with wrapper
echo -n "whoami: "
whoami
echo "Proving it, showing root's home directory which normal user can't access:"
ls -l /root
