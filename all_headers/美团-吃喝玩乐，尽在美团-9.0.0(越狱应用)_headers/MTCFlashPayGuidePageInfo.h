//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

@class NSString;

@interface MTCFlashPayGuidePageInfo : SAKDomainObject
{
    NSString *_title;
    NSString *_subtitle;
    double _totleFee;
    NSString *_ABTest;
}

+ (id)predicateDictionary;
@property(copy, nonatomic) NSString *ABTest; // @synthesize ABTest=_ABTest;
@property(nonatomic) double totleFee; // @synthesize totleFee=_totleFee;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

