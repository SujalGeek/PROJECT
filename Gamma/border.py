import cv2
import numpy as np

image = cv2.imread('circle.jpeg',0)
orig_image = image.copy()
cv2.imshow('Original Image', orig_image)
cv2.waitKey(0)