find . -type f -name 'test*.sh' -exec basename {} \; | sed 's/\..*//'

