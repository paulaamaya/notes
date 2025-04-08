# Git

## Repos

The `git init` command is used to create a new Git repository, initializing version control for a project.

* Initialize a repo in current directory
```bash
git init
```
* Initialize a repo in specific directory
```bash
git init /path/to/directory
```
* Initialize a bare repo.
```bash
git init --bare /path/to/directory
```


## Commits

* Each commit should address a **single topic**. If your work spans multiple topics, split it into separate commits. 
* Use the *git staging* area to selectively stage changes for a commit.
* The `-p` flag lets you stage changes at the patch level, chunk by chunk.
```bash
git add -p file.txt
```
* This ensures only relevant parts of a file are staged, while others parts remain uncommitted.
* The `--ammend` flag will modify the last commit. Instead of creating a new commit, staged changes will be added to the previous commit. This command will open up the system's configured text editor and prompt to change the previously specified commit message.
```bash
git commit --ammend
```

### Commit Messages

1. **Subject** A concise summary (ideally <80 characters). If this is a challenge, consider splitting the commit.
2. **Body** A detailed explanation, answering questions such as:
    - What is now different than before?
    - Why was the change necessary?
    - Any important notes or caveats?

## `git diff`

## Branches

* Create branch
```bash
git branch branch-name
```
* Switch branch
```bash
git checkout branch-name
```
* Create and switch to branch
```bash
git checkout -b branch-name
```
* Rename branch
```bash
git branch -m new-branch-name
```
* List local branches
```bash
git branch
```
* List remote branches
```bash
git branch -a
```
* Delete branch locally 
```bash
git branch -d branch-name
```
* Delete branch remotely 
```bash
git push origin --delete branch-name
```
* Merge a branch into current branch 
```bash
git merge branch-name
```

## Stashing

## Pull Requests

* Not a git feature, but provided by your git hosting platform.  
