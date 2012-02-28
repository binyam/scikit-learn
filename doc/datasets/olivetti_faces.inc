
.. _olivetti_faces:

The Olivetti faces dataset
==========================


This dataset contains a set of face images taken between April 1992 and April
1994 at AT&T Laboratories Cambridge. The website describing the original
dataset is now defunct, but archived copies can be accessed through
`the Internet Archive's Wayback Machine`_.

.. _the Internet Archive's Wayback Machine: http://wayback.archive.org/web/*/http://www.uk.research.att.com/facedatabase.html

As described on the original website:

    There are ten different images of each of 40 distinct subjects. For some
    subjects, the images were taken at different times, varying the lighting,
    facial expressions (open / closed eyes, smiling / not smiling) and facial
    details (glasses / no glasses). All the images were taken against a dark
    homogeneous background with the subjects in an upright, frontal position (with
    tolerance for some side movement).

The image is quantized to 256 grey levels and stored as unsigned 8-bit integers;
the loader will convert these to floating point values on the interval [0, 1],
which are easier to work with for many algorithms.

The "target" for this database is an integer from 0 to 39 indicating the
identity of the person pictured; however, with only 10 examples per class, this
relatively small dataset is more interesting from an unsupervised or
semi-supervised perspective.

The original dataset consisted of 92 x 112, while the version available here
consists of 64x64 images.

When using these images, please give credit to AT&T Laboratories Cambridge.