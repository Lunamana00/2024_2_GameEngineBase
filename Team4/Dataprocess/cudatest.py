import tensorflow as tf

print("Num GPUs Available: ", len(tf.config.list_physical_devices('GPU')))
import zlib
print(zlib.ZLIB_VERSION)