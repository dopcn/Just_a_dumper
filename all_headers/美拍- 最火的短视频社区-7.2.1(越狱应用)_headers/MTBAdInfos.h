//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MTBAdInfos : NSObject
{
    NSString *_date;
    NSArray *_adIdInfos;
}

+ (id)adInfosWithInfo:(id)arg1 parsingErrorStr:(id *)arg2;
@property(retain, nonatomic) NSArray *adIdInfos; // @synthesize adIdInfos=_adIdInfos;
@property(nonatomic) NSString *date; // @synthesize date=_date;
- (void).cxx_destruct;

@end

