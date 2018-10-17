#ifndef COL2IM_H
#define COL2IM_H


void col2im_cpu(float* data_col,
        int channels, int height, int width,
        int ksize, int stride, int pad, float* data_im);

#ifdef GPU

#if defined(__cplusplus)
extern "C" {
#endif

void col2im_gpu(float *data_col,
        int channels, int height, int width,
        int ksize, int stride, int pad, float *data_im);


#if defined(__cplusplus)
}
#endif

#endif

#endif
