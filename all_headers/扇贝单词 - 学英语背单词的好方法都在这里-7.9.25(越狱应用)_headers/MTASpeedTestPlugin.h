//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTASpeedTestProtocol;

@interface MTASpeedTestPlugin : NSObject
{
    NSObject<MTASpeedTestProtocol> *_speedTestProtocol;
}

+ (id)sharedInstance;
@property(nonatomic) __weak NSObject<MTASpeedTestProtocol> *speedTestProtocol; // @synthesize speedTestProtocol=_speedTestProtocol;
- (void).cxx_destruct;
- (void)reportSpeedEvent:(id)arg1;

@end

