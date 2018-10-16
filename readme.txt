1.
darknet.exe imtest ./data/eagle.jpg

2.
darknet.exe detect ./cfg/yolov3.cfg yolov3.weights ./data/dog.jpg

Debug (OPENCV):
layer     filters    size              input                output
    0 conv     32  3 x 3 / 1   608 x 608 x   3   ->   608 x 608 x  32  0.639 BFLOPs
    1 conv     64  3 x 3 / 2   608 x 608 x  32   ->   304 x 304 x  64  3.407 BFLOPs
...
  105 conv    255  1 x 1 / 1    76 x  76 x 256   ->    76 x  76 x 255  0.754 BFLOPs
  106 yolo
Loading weights from yolov3.weights...Done!
./data/dog.jpg: Predicted in 236.981000 seconds.
dog: 100%
bicycle: 99%
truck: 92%

Release (OPENCV):
layer     filters    size              input                output
    0 conv     32  3 x 3 / 1   608 x 608 x   3   ->   608 x 608 x  32  0.639 BFLOPs
    1 conv     64  3 x 3 / 2   608 x 608 x  32   ->   304 x 304 x  64  3.407 BFLOPs
...
  105 conv    255  1 x 1 / 1    76 x  76 x 256   ->    76 x  76 x 255  0.754 BFLOPs
  106 yolo
Loading weights from yolov3.weights...Done!
./data/dog.jpg: Predicted in 21.612000 seconds.
dog: 100%
bicycle: 99%
truck: 92%

