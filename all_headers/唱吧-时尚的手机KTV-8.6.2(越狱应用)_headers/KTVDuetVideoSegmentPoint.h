//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface KTVDuetVideoSegmentPoint : NSObject
{
    _Bool _isInvitor;
    _Bool _isStart;
    unsigned long long _timestamp;
}

+ (id)sortWithPoints:(id)arg1;
+ (id)pointsForRawSegments:(id)arg1;
@property(nonatomic) _Bool isStart; // @synthesize isStart=_isStart;
@property(nonatomic) _Bool isInvitor; // @synthesize isInvitor=_isInvitor;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (id)debugDescription;
- (id)initWithTimestamp:(unsigned long long)arg1 isInvitor:(_Bool)arg2 isStart:(_Bool)arg3;

@end

