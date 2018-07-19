touch -A -000001 bomb.txt && stat bomb.txt | cut -c84- | cut -c1-8
