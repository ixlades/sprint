#!/bin/bash

operation="$1"
archive_name="$2"

shift 2

case "$operation" in
    -c)
        tar -cvf "$archive_name" "$@"
        ;;
    -e)
        tar -xvf "$archive_name"
        ;;
    *)
        exit 1
        ;;
esac

