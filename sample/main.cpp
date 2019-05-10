#include <iostream>
#include <opencv2/opencv.hpp>

#define CVUI_IMPLEMENTATION
#include "cvui.h"

int main( int argc, char* argv[] )
{
    // Create Window and Initialize CVUI
    const std::string window_name = "double slider sample";
    cv::namedWindow( window_name );
    cvui::init( window_name );

    // UI Canvas
    cv::Mat ui_canvas = cv::Mat( 140, 480, CV_8UC3 );

    // Slider
    int32_t value     = 128;
    int32_t value_min = 64;
    int32_t value_max = 192;

    while( true ){
        // Reset Canvas
        constexpr int32_t b = 49, g = 52, r = 49;
        ui_canvas = cv::Scalar( b, g, r );

        // Point Origin/Offset for UI Render
        cv::Point ui_origin = cv::Point( 20, 20 );
        cv::Point ui_offset = cv::Point(  0, 50 );
        constexpr int32_t label_offset = 20;

        // Render Single Trackbar
        constexpr int32_t trackbar_length = 255;
        constexpr int32_t trackbar_min    = 0;
        constexpr int32_t trackbar_max    = 255;
        cvui::trackbar( ui_canvas, ui_origin.x, ui_origin.y, trackbar_length, &value, trackbar_min, trackbar_max );
        cvui::printf( ui_canvas, ui_origin.x + trackbar_length + label_offset, ui_origin.y, "single slider" );
        cvui::printf( ui_canvas, ui_origin.x + trackbar_length + label_offset, ui_origin.y + label_offset, "value : %d", value );

        // Render Double Trackbar (Additional Implements)
        ui_origin += ui_offset;
        cvui::trackbar( ui_canvas, ui_origin.x, ui_origin.y, trackbar_length, &value_min, &value_max, trackbar_min, trackbar_max );
        cvui::printf( ui_canvas, ui_origin.x + trackbar_length + label_offset, ui_origin.y, "double slider" );
        cvui::printf( ui_canvas, ui_origin.x + trackbar_length + label_offset, ui_origin.y + label_offset, "min : %d, max : %d", value_min, value_max );

        // UI Update
        cvui::update();

        // Show Image
        cv::imshow( window_name, ui_canvas );
        const int32_t key = cv::waitKey( 30 );
        if( key == 'q' ){
            break;
        }
    }

    cv::destroyAllWindows();

    return 0;
}
