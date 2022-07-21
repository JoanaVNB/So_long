# So_long
This project is a small 2D game. Its purpose work with textures, sprites, and basic gameplay elements with MiniLibX.

![SO_LONG!!](https://user-images.githubusercontent.com/98241492/180044814-ce24a2f2-1dc1-43e1-8724-f0020e9750f2.gif)


Using MiniLibX:

First, we need to initialize mlx with mlx_init(), which returns a pointer (void *) that we need to save because many of the library functions need it to work.

Then we can open the window with the mlx_new_window() function which receives the mlx pointer, the window size and the title that would be displayed on top. Returning a void pointer that is a reference to the open window. Again, we need to save that pointer for later use.

To start the program we need to call mlx_loop(). This is an infinite loop that would keep the program running, the window open, and keep detecting the different events and calling the functions you've bound to them. But, any code written after the call to this function would never run.

To print objects, it is necessary using XMP or PNG format. To print it, we can call the mlx_xpm_file_to_image and mlx_png_file_to_image functions, but the mlx_png_file_to_image leaks memory. Therefore, mlx_xpm_file_to_image will be used.

You can convert the image to XPM in the terminal or at https://convertio.co/en/.

To print the image on the screen, the mlx_put_image_to_window function is used.

Example to open the window and insert image:

![image](https://user-images.githubusercontent.com/98241492/180104023-5e2a4ad3-87dd-41d8-af9c-0627686b0f5f.png)

This funcions were used in the file init_game. 
