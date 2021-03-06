//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface SNDeviceSamplingLogRule : NSObject
{
    int _logType;
    int _uploadLevel;
    float _maxDaySize;
    NSString *_moduleId;
    NSString *_appVersion;
    NSString *_terminal;
    NSString *_memberIds;
    NSArray *_memberArray;
    long long _requestTime;
    long long _uploadDuration;
}

@property(nonatomic) long long uploadDuration; // @synthesize uploadDuration=_uploadDuration;
@property(nonatomic) float maxDaySize; // @synthesize maxDaySize=_maxDaySize;
@property(nonatomic) long long requestTime; // @synthesize requestTime=_requestTime;
@property(retain, nonatomic) NSArray *memberArray; // @synthesize memberArray=_memberArray;
@property(copy, nonatomic) NSString *memberIds; // @synthesize memberIds=_memberIds;
@property(copy, nonatomic) NSString *terminal; // @synthesize terminal=_terminal;
@property(nonatomic) int uploadLevel; // @synthesize uploadLevel=_uploadLevel;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *moduleId; // @synthesize moduleId=_moduleId;
@property(nonatomic) int logType; // @synthesize logType=_logType;
- (void).cxx_destruct;
- (id)dictRepresentation;
- (void)parseFromDict:(id)arg1;

@end

