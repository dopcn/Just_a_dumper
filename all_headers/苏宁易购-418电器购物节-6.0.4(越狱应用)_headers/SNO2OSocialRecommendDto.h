//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SNO2OSocialRecommendDto : NSObject
{
    _Bool _isJoined;
    NSString *_circleCode;
    NSString *_circleName;
    NSString *_circleImage;
    NSString *_circleType;
    NSString *_circleLongitude;
    NSString *_circleLatitude;
    NSString *_circleRadius;
    NSString *_distance;
}

+ (id)arrayEncodeWithArr:(id)arg1;
@property(retain, nonatomic) NSString *distance; // @synthesize distance=_distance;
@property(nonatomic) _Bool isJoined; // @synthesize isJoined=_isJoined;
@property(retain, nonatomic) NSString *circleRadius; // @synthesize circleRadius=_circleRadius;
@property(retain, nonatomic) NSString *circleLatitude; // @synthesize circleLatitude=_circleLatitude;
@property(retain, nonatomic) NSString *circleLongitude; // @synthesize circleLongitude=_circleLongitude;
@property(retain, nonatomic) NSString *circleType; // @synthesize circleType=_circleType;
@property(retain, nonatomic) NSString *circleImage; // @synthesize circleImage=_circleImage;
@property(retain, nonatomic) NSString *circleName; // @synthesize circleName=_circleName;
@property(retain, nonatomic) NSString *circleCode; // @synthesize circleCode=_circleCode;
- (void).cxx_destruct;
- (void)encodeWithDic:(id)arg1;

@end

