//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWSModel.h"

@class NSDate, NSNumber;

@interface AWSS3LifecycleExpiration : AWSModel
{
    NSDate *_date;
    NSNumber *_days;
}

+ (id)dateJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *days; // @synthesize days=_days;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;

@end

