//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

@class NSString;

@interface TPKPullRefreshBackgroundEmotionConfiguration : SAKDomainObject
{
    NSString *_backgroundColor;
    NSString *_backgroundImageName;
    double _duration;
}

+ (id)durationJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *backgroundImageName; // @synthesize backgroundImageName=_backgroundImageName;
@property(copy, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (_Bool)isValid;

@end

