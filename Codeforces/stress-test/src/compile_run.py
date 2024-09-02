import subprocess
import os
from src.color_print import cprint

def compile(file_path):
    if not file_path.endswith(".cpp"):
        return -1
    
    file = os.path.splitext(file_path)[0]
    
    cmd = f'g++ -std=c++17 -DONLINE_JUDGE "{file_path}" -o "{file}.exe"'
    
    print('\nCompiling ', end='')
    cprint(file_path, clr="purple")
    
    subprocess.run(cmd, check=True, shell=True)
    print('Compilation done')

def run(file_path, std_input=None):
    if not file_path.endswith(".cpp"):
        return -1
    
    file = os.path.splitext(file_path)[0]
    
    cmd = f'{file}.exe'
    
    return subprocess.run(cmd, input=std_input, capture_output=True, shell=True, text=True, check=True)

if __name__ == "__main__":
    file_path = "./generator.cpp"
    
    compile(file_path)
    
    result = run(file_path)
    
    if result.returncode == 0:
        print("Output:")
        print(result.stdout)
    else:
        print("Error occurred while running the program.")
