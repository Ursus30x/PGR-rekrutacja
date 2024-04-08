#!/bin/bash

WSLCHECK=$(ls /proc/sys/fs/binfmt_misc | grep WSL) 
if [ -n "$WSLCHECK" ]; then                     #jesli jest WSL
   echo "Amount of variables: $(env | grep -E "BASH|SHELL" | wc -l)"
   env | grep -E "BASH|SHELL"
else                                                                    #jesli jest native Linux
    SERVICE_MAN="$(cat /proc/1/comm )"
    if [ $SERVICE_MAN = "systemd" ]; then                               #dla systemu dzialajacego pod systemd
        echo "$(systemctl status sshd.service)"
    elif [ $SERVICE_MAN = "init" ]; then                                #dla systemu dzialajacego pod sysVinit
        echo "$(service sshd.service status)"
    elif [ $SERVICE_MAN = "upstart" ]; then                             #dla systemu dzialajacego pod upstart
        echo "$(initctl status sshd.service)"
    else                                                                # dla systemu dzialajacego pod innym service managerem
        VAR=$(top -n 1 -b | grep "sshd")
        if [ -n "$VAR" ]; then
            echo "sshd service is running"
        else 
            echo "sshd service is disabled"
        fi
    fi
fi