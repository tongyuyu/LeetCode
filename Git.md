# LeetCode
# LeetCode


## 2023/04/29 9:33

```
报错：fatal: not a git repository (or any of the parent directories): .git
解决办法：先git init
git init # 把这个文件夹变成Git可以管理的仓库
git add .       # 把当前文件夹下的所有文件添加到暂存区
git add **.py   # 把当前文件夹下的**.py添加到暂存区
git status      # 可选操作，查看当前状态
git commit -m "注释"  # 把暂存区的文件提交到本地仓库
git checkout master     # 切换到master分支

git remote add origin https://github.com/tongyuyu/LeetCode.git   # 关联github仓库，一个项目只需关联一次
git push origin main    # 把本地仓库推向远程GitHub仓库的main分支
git pull origin main    # 把远程GitHub仓库的main分支拉回本地仓库

git config --global --add safe.directory 'D:/Microsoft VS Code/MyCode/Github/LeetCode'  # 将当前目录与github关联
```
