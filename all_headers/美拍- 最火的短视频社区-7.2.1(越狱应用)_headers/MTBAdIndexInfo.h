//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MTBAdIndexInfo : NSObject
{
    long long _positionId;
    NSArray *_adInfos;
}

+ (id)adIndexInfoWithInfo:(id)arg1 parsingErrorStr:(id *)arg2;
@property(retain, nonatomic) NSArray *adInfos; // @synthesize adInfos=_adInfos;
@property(nonatomic) long long positionId; // @synthesize positionId=_positionId;
- (void).cxx_destruct;

@end

