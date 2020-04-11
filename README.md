
## Welcome to Data Structures and Algorithms in C++ :clipboard:

This Repository was made to maintain various Algorithms in C++ in a single space.
This Repository is maintained by Sarthak1306
This a public Repository and all sorts of contributions to the code are welcomed.


## Steps to follow :scroll:

### 1. Fork it :fork_and_knife:

You can get your own fork/copy of [Data-Structures-and-Algorithms](https://github.com/Sarthak1306/Data-Structures-and-Algorithms) by using the <a> <kbd><b>Fork</b></kbd></a> button

[![Fork Button](https://help.github.com/assets/images/help/repository/fork_button.jpg)](https://github.com/Sarthak1306/Data-Structures-and-Algorithms)

### 2. Clone it :busts_in_silhouette:

You need to go to your Fork of the Repository and then  clone (download) it to local machine using

```sh
$ git clone https://github.com/Your_Username/Data-Structures-and-Algorithms.git
```
> This makes a local copy of repository in your machine.


Once you have cloned the `Data-Structures-and-Algorithms` repository in Github, move to that folder first using change directory command on linux and Mac.

```sh
# This will change directory to a folder Data-Structures-and-Algorithms
$ cd Data-Structures-and-Algorithms
```

Move to this folder for all other commands.

Now, lets add a reference to the original [Data-Structures-and-Algorithms](https://github.com/Sarthak1306/Data-Structures-and-Algorithms) repository using

```sh
$ git remote add upstream https://github.com/Sarthak1306/Data-Structures-and-Algorithms.git
```

> This adds a new remote named ***upstream***.

See the changes using

```sh
$ git remote -v
origin    https://github.com/Your_Username/Data-Structures-and-Algorithms.git (fetch)
origin    https://github.com/Your_Username/Data-Structures-and-Algorithms.git (push)
upstream  https://github.com/Sarthak1306/Data-Structures-and-Algorithms.git (fetch)
upstream  https://github.com/Sarthak1306/Data-Structures-and-Algorithms.git (push)
```

### 3. Sync with the Remote

Always keep your local copy of repository updated with the original repository.

```sh
# Fetch all remote repositories and delete any deleted remote branches
$ git fetch --all --prune

# Switch to `master` branch
$ git checkout master

# Reset local `master` branch to match `upstream` repository's `master` branch
$ git reset --hard upstream/master

# Push changes to your forked `Data-Structures-and-Algorithms` repo
$ git push origin master
```
### 4. Create a new branch :bangbang:

Whenever you are going to make a contribution. Please create a new branch using the command below  and keep your `master` branch clean (i.e. synced with remote branch).

```sh
# It will create a new branch with name <branchname> and switch to branch <branchname>
$ git checkout -b <branchname>
```

To switch to desired branch

```sh
# To switch from one folder to other
$ git checkout <branchname>
```

To add the changes to the branch. Use

```sh
# To add all files to branch
$ git add .
```

Type in a message relevant for the code reveiwer using

```sh
# This message get associated with all files you have changed
$ git commit -m "relevant message"
```

Now, Push your awesome work to your remote repository using

```sh
# To push your work to your remote repository
$ git push -u origin <branchname>
```

Finally, go to your repository in browser and click on `compare and pull requests`.
Then add a title and description to your pull request that explains your precious effort.
