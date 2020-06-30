#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int a;
    cout << "hello world" << endl;
    printf("sunjun is good!\n");
    scanf("%d",&a);
    printf("u   %d",a);
    scanf("%d",&a);
    return 0;
}

/*
git init    初始化本地仓库
git config --global user.name   配置用户名
git config --global user.email  配置邮箱
git remote add origin code@github.com   绑定本地和远程仓库
git pull    拉取远程仓库的变化同步本地的状态
git add     确认本地仓库的变化到本地缓存区
git commit  确认本地缓存区的内容，可以准备push
git push    提交本地仓库到远程仓库
git status  确认本地缓存区的状态

*/
