//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface MGLSceneLiveUrl : NSObject
{
    NSArray *_sources;
    NSString *_cameraId;
    NSString *_cameraName;
    NSString *_activityId;
    NSString *_roomId;
    NSString *_vip;
}

+ (id)sceneLiveUrlWithDict:(id)arg1;
@property(copy, nonatomic) NSString *vip; // @synthesize vip=_vip;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(copy, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(copy, nonatomic) NSString *cameraName; // @synthesize cameraName=_cameraName;
@property(copy, nonatomic) NSString *cameraId; // @synthesize cameraId=_cameraId;
@property(copy, nonatomic) NSArray *sources; // @synthesize sources=_sources;
- (void).cxx_destruct;

@end

