//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IDisposeable-Protocol.h"
#import "NSObject-Protocol.h"

@class AdDataVO, PublisherProfile, UIApplication, UIViewController;

@protocol IAdRenderer <NSObject, IDisposeable>
- (double)getDuration;
- (double)getPlayheadTime;
- (void)stop;
- (void)resume;
- (void)pause;
- (void)show;
- (void)hide;
- (void)close;
- (void)resizeAdToWidth:(int)arg1 AndHeight:(int)arg2;
- (void)start;
- (void)load;
- (id)initWithPublisherProfile:(PublisherProfile *)arg1 UIApplication:(UIApplication *)arg2 AdContainerViewController:(UIViewController *)arg3 AdDataVO:(AdDataVO *)arg4;
@end

