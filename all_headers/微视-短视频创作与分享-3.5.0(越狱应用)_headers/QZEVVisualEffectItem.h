//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QZBaseModel.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface QZEVVisualEffectItem : QZBaseModel <NSCopying>
{
    double _startTime;
    double _duration;
    NSString *_identifier;
}

+ (id)itemWithIdentifier:(id)arg1 startTime:(double)arg2 duration:(double)arg3;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

