//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PAApi_HEALTHCENTER_UserWalkData : NSObject
{
    long long _userId;
    NSString *_avator;
    NSString *_name;
    long long _stepCount;
    double _distance;
}

+ (id)deserialize:(id)arg1;
+ (id)deserializeWithJsonData:(id)arg1;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(nonatomic) long long stepCount; // @synthesize stepCount=_stepCount;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *avator; // @synthesize avator=_avator;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)serialize;

@end

