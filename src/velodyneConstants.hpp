#ifndef _VELODYNE_CONSTANTS_HPP_
#define _VELODYNE_CONSTANTS_HPP_

namespace velodyne_lidar
{
    static const unsigned int VELODYNE_NUM_LASERS = 32; // The number of lasers per shot
    static const unsigned int VELODYNE_NUM_SHOTS = 12; // The number of shots per packet
    static const unsigned int VELODYNE_ORIENTATION_READINGS = 3; // The number of orientation readings
    static const unsigned int MIN_SENSING_DISTANCE = 500; //1m in 2mm units
    static const unsigned int MAX_SENSING_DISTANCE = 35000; //70m in 2mm units
    static const unsigned int VELODYNE_DATA_MSG_BUFFER_SIZE = 1206; //The size of a data packet
    static const unsigned int VELODYNE_POSITIONING_MSG_BUFFER_SIZE = 512; //The size of a positioning packet

    static const double VELODYNE_DRIVER_BROADCAST_FREQ_HZ = 1808.0; //The rate of broadcast packets. See Velodyne hdl-32e manual page 11.
    static const unsigned int VELODYNE_DATA_UDP_PORT = 2368; //The port the Velodyne sends laser data to
    static const unsigned int VELODYNE_POSITIONING_UDP_PORT = 8308; //The port the Velodyne sends positioning data to

    static const uint16_t VELODYNE_UPPER_HEADER_BYTES = 0xEEFF; //The byte indicating a upper shot
    static const uint16_t VELODYNE_LOWER_HEADER_BYTES = 0xDDFF; //The byte indicating a lower shot
    
    static const unsigned int VELODYNE_FIRING_ORDER[] = {31, 29, 27, 25, 23, 21, 19, 17, 15, 13, 11, 9, 7, 5, 3, 1,
                                                         30, 28, 26, 24, 22, 20, 18, 16, 14, 12, 10, 8, 6, 4, 2, 0};
                                
    static const double VELODYNE_VERTICAL_RESOLUTION = 1.0 + 1.0/3.0; // vertical resolution in degree
    static const double VELODYNE_VERTICAL_START_ANGLE = -VELODYNE_VERTICAL_RESOLUTION * 8.0; // vertical start angle in degree
    static const double VELODYNE_VERTICAL_END_ANGLE = VELODYNE_VERTICAL_RESOLUTION * 23.0; // vertical end angle in degree
};

#endif
