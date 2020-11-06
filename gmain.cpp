//義勇のイメージ
#include"libOne.h"
void gmain() {
    window(1920, 1080, full);
    //変数定義
    int img[2] = { 0,0 }, idx = 0;
    float x = 0, y = 0, dx = 0, dy = 0, ofsX = 0;
    int cols = 0, rows = 0;
    //初期値設定
    img[0] = loadImage("assets/cube0.png");
    img[1] = loadImage("assets/cube1.png");
    dx = 140;//横にずらす値
    dy = 120;//縦にずらす値
    cols = int(width / dx) + 2;//列数
    rows = int(height / dy) + 1;//行数
    //１回だけ描画
    rectMode(CENTER);
    for (int j = 0; j < rows; j++) {
        y = dy * j;
        for (int i = 0; i < cols; i++) {
            //奇数行は(dx/2)分ずらす
            ofsX = (j % 2) * (dx / 2);
            x = ofsX + dx * i;
            idx = (j / 2 + i) % 2;
            image(img[idx], x, y);
        }
    }
    //アニメーションさせないので
    //描画後、空ループさせているだけ
    while (notQuit) {
    }
}