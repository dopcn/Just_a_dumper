//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SliderDeviceManager : NSObject
{
    NSString *newSliderDid;
    NSString *_deviceId;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
- (void).cxx_destruct;
- (id)sliderReadDeviceId;
- (void)sliderSaveWithDeviceId:(id)arg1;
- (void)dealloc;
- (id)init;

@end

