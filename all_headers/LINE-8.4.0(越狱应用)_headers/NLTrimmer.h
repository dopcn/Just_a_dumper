//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface NLTrimmer : NSObject
{
}

+ (void)exportAsynchronouslyWithAsset:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 renderSize:(struct CGSize)arg3 preferredTransforms:(id)arg4 removeAudioTracks:(_Bool)arg5 outputURL:(id)arg6 completion:(CDUnknownBlockType)arg7;
+ (long long)trimmerVideoOrientationForAsset:(id)arg1;
+ (long long)imageOrientationForTrimmerVideoOrientation:(long long)arg1;
+ (long long)imageOrientationForAsset:(id)arg1;
+ (_Bool)isTrimmableForAsset:(id)arg1;

@end

