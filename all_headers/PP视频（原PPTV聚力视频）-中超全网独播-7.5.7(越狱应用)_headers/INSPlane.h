//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "INS3DObject.h"

@interface INSPlane : INS3DObject
{
    float _width;
    float _height;
    int _segmentsW;
    int _segmentsH;
}

@property(nonatomic) int segmentsH; // @synthesize segmentsH=_segmentsH;
@property(nonatomic) int segmentsW; // @synthesize segmentsW=_segmentsW;
@property(nonatomic) float height; // @synthesize height=_height;
@property(nonatomic) float width; // @synthesize width=_width;
- (void)createVBO;
- (void)dealloc;
- (id)initWithPlaneWidth:(float)arg1 height:(float)arg2 segmentsW:(int)arg3 segmentsH:(int)arg4;
- (id)initWithPlaneMaterial:(id)arg1 width:(float)arg2 height:(float)arg3 segmentsW:(int)arg4 segmentsH:(int)arg5;

@end

