//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class MPSPoint;

@interface MPSInspectionStationInfo : NSObject <NSCopying, NSCoding>
{
    long long _remainDist;
    long long _remainTime;
    MPSPoint *_point;
}

@property(retain, nonatomic) MPSPoint *point; // @synthesize point=_point;
@property(nonatomic) long long remainTime; // @synthesize remainTime=_remainTime;
@property(nonatomic) long long remainDist; // @synthesize remainDist=_remainDist;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

