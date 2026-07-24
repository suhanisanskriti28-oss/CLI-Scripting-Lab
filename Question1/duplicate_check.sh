#!/bin/bash

processed=0
duplicates=0
backedup=0

> report.txt
> errors.log

mkdir -p backup
rm -f backup/*

checksums=""

for file in submissions/*
do
    if [ -f "$file" ]; then
        ((processed++))

        checksum=$(md5 -q "$file")

        if echo "$checksums" | grep -q "$checksum"; then
            echo "$(basename "$file") is duplicate" >> errors.log
            ((duplicates++))
        else
            checksums="$checksums $checksum"
            cp "$file" backup/
            ((backedup++))
        fi
    fi
done

echo "Processed Files : $processed" > report.txt
echo "Duplicate Files : $duplicates" >> report.txt
echo "Backed Up Files : $backedup" >> report.txt

echo "Script Executed Successfully!"