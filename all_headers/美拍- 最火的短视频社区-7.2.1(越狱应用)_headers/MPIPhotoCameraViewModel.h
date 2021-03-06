//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MPICameraViewModel.h"

@class GPUImageCropFilter;

@interface MPIPhotoCameraViewModel : MPICameraViewModel
{
    GPUImageCropFilter *_cropFilter;
}

@property(retain, nonatomic) GPUImageCropFilter *cropFilter; // @synthesize cropFilter=_cropFilter;
- (void).cxx_destruct;
- (void)resumeWithCamera:(id)arg1;
- (void)removeCropFilterIfNeeded;
- (void)addCropFilterIfNeeded;
- (id)initWithCamera:(id)arg1;

@end

