#!/bin/bash
ifconfig -a | grep -w 'ether' | cut -c8-24
