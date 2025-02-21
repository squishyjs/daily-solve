import os
from pathlib import Path
from re import fullmatch


root_directory: str = "~programming/Solving/C++"
directory = os.fsencode(root_directory)
def main() -> None:
    
    for file in os.listdir(directory):
        filename = os.fsencode(file)
        if filename.endswith(".cpp") or filename.endswith():
            print("You have encountered a c++ file")
            continue
        else:
            continue

def alternative_solution() -> None:
    for filename in os.listdir("~programming/Solving/C++"):
        if filename.endswith(".cpp") or filename.endswith(".py"):
            continue
        else:
            continue

def iterate_and_remove_files(files: list[str], path: str):
    if not files:
        print("No files found to remove")
        return

    count: int = 1
    for file in files:
        full_path = os.path.join(path, file)
        print(f"Removing file: {full_path}")
        os.remove(full_path)
        print("File Removed")

def iterate_through_files_in_a_directory():
    path = "/Users/john/programming/Solving/C++/"

    folder = os.fsencode(path)

    filenames = []
    for file in os.listdir(folder):
        filename = os.fsdecode(file)
        # check if a directory
        if os.path.isdir(os.path.join(path, filename)):
            print("Skipping over found directory...")
            continue
        if (not filename.endswith((".cpp", ".hpp", ".h"))):
            filenames.append(filename)

    filenames.sort() # sort the filenames
    iterate_and_remove_files(filenames, path)
    

if __name__ == "__main__":
    choice_to_remove_files = input("Are you sure you want to remove the files?: ")
    if (choice_to_remove_files.upper() == "YES"):
        print("Going through the files! :)")
        iterate_through_files_in_a_directory()
    else:
        print("No problem, Goodbye!")
