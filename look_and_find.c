# look_and_find_iCreate2
#include <kipr/botball.h>

// start of look_and_find code
int main()
{	
    create_connect();
    camera_open_at_res(MED_RES); //320 x 240 res
    camera_update();
    printf("starting search \n");
    printf("\n%d\n\n", get_object_count(0)); //prints object count for channel 0
    while ( get_object_center_x(0,0) > 40 ){ //while object is not in center
        printf("card not centered \n");      //pivot until it is in the center
        camera_update();
        create_drive_direct(50,-50);
        msleep(100000);
    }
    camera_close();
    printf("Finished Search\n");
    create_disconnect();
    return 0;
}

//Will search for the "fire" card by 
//sweeping the area in a circular manner
//need to add conditions to just search for yellow object
//works in specific lighting

//will be added to master library in the future

//end of look_and_find code