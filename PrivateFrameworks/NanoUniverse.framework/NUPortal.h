/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoUniverse.framework/NanoUniverse
 */

@interface NUPortal : NSObject {
    NUScene * _scene;
    struct NUViewport { 
        int x; 
        int y; 
        unsigned int width; 
        unsigned int height; 
    }  _viewport;
}

@property (nonatomic, retain) NUScene *scene;
@property (nonatomic) struct NUViewport { int x1; int x2; unsigned int x3; unsigned int x4; } viewport;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 boundSize:(struct CGSize { double x1; double x2; })arg2 contentScaleFactor:(double)arg3;
- (id)scene;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 boundSize:(struct CGSize { double x1; double x2; })arg2 contentScaleFactor:(double)arg3;
- (void)setScene:(id)arg1;
- (void)setViewport:(struct NUViewport { int x1; int x2; unsigned int x3; unsigned int x4; })arg1;
- (struct NUViewport { int x1; int x2; unsigned int x3; unsigned int x4; })viewport;

@end
