//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

@class NSArray, NSString;

@interface DEFSmartTips : SAKDomainObject
{
    long long _position;
    NSArray *_tips;
    NSString *_globalID;
}

+ (id)tipsJSONTransformer;
+ (id)predicateDictionary;
@property(copy, nonatomic) NSString *globalID; // @synthesize globalID=_globalID;
@property(copy, nonatomic) NSArray *tips; // @synthesize tips=_tips;
@property(nonatomic) long long position; // @synthesize position=_position;
- (void).cxx_destruct;

@end

