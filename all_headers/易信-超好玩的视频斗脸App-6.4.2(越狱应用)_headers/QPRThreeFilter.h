//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QPGPUImageFilterGroup.h"

@class QPGPUImagePicture;

@interface QPRThreeFilter : QPGPUImageFilterGroup
{
    QPGPUImagePicture *picture1;
    QPGPUImagePicture *picture2;
    QPGPUImagePicture *picture3;
}

- (void).cxx_destruct;
- (void)prepareForImageCapture;
- (id)initWithImage1:(id)arg1 image2:(id)arg2 image3:(id)arg3 vertexShaderFromString:(id)arg4 fragmentShaderFromString:(id)arg5;

@end

