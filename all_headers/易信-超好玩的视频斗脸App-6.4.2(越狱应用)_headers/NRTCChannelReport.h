//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NRTCChannelReport : NSObject
{
    unsigned long long _trafficStatRX;
    unsigned long long _trafficStatTX;
    NSString *_desc;
}

@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(readonly, nonatomic) unsigned long long trafficStatTX; // @synthesize trafficStatTX=_trafficStatTX;
@property(readonly, nonatomic) unsigned long long trafficStatRX; // @synthesize trafficStatRX=_trafficStatRX;
- (void).cxx_destruct;
- (id)initWithRxBytes:(unsigned long long)arg1 andTxBytes:(unsigned long long)arg2 desc:(id)arg3;

@end

