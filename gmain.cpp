//�`�E�̃C���[�W
#include"libOne.h"
void gmain() {
    window(1920, 1080, full);
    //�ϐ���`
    int img[2] = { 0,0 }, idx = 0;
    float x = 0, y = 0, dx = 0, dy = 0, ofsX = 0;
    int cols = 0, rows = 0;
    //�����l�ݒ�
    img[0] = loadImage("assets/cube0.png");
    img[1] = loadImage("assets/cube1.png");
    dx = 140;//���ɂ��炷�l
    dy = 120;//�c�ɂ��炷�l
    cols = int(width / dx) + 2;//��
    rows = int(height / dy) + 1;//�s��
    //�P�񂾂��`��
    rectMode(CENTER);
    for (int j = 0; j < rows; j++) {
        y = dy * j;
        for (int i = 0; i < cols; i++) {
            //��s��(dx/2)�����炷
            ofsX = (j % 2) * (dx / 2);
            x = ofsX + dx * i;
            idx = (j / 2 + i) % 2;
            image(img[idx], x, y);
        }
    }
    //�A�j���[�V���������Ȃ��̂�
    //�`���A�󃋁[�v�����Ă��邾��
    while (notQuit) {
    }
}