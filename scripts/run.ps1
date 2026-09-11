# Compile and run a single C file inside the gcc Docker image.
# Usage: .\scripts\run.ps1 sorting\bubble_sort.c

param(
    [Parameter(Mandatory=$true, Position=0)]
    [string]$File
)

if (-not (Test-Path $File)) {
    Write-Error "File not found: $File"
    exit 1
}

$RelDir = (Split-Path $File -Parent) -replace '\\', '/'
if ([string]::IsNullOrEmpty($RelDir)) { $RelDir = "." }
$Name = [System.IO.Path]::GetFileNameWithoutExtension($File)
$SrcPath = $File -replace '\\', '/'
$BinDir = "bin/$RelDir"
$BinPath = "$BinDir/$Name"

docker run --rm -i -v "$($PWD.Path):/work" -w /work gcc:latest `
    sh -c "mkdir -p '$BinDir' && gcc -Wall -Wextra -std=c11 -O2 -o '$BinPath' '$SrcPath' && echo '--- running $Name ---' && ./$BinPath"
