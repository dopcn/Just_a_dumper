//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface YTLocalDB : NSObject
{
    NSMutableArray *_adConfigs;
}

@property(retain, nonatomic) NSMutableArray *adConfigs; // @synthesize adConfigs=_adConfigs;
- (void)initPipLocalDB;
- (void)initInstaBeautyLocalDB;
- (void)initInstamagLocalDB;
- (void)initWantuLocalDB;
- (void)addAdData:(long long)arg1 posId:(id)arg2 adConfig:(id)arg3;
- (id)getAdConfigByPosId:(id)arg1;
- (void)initLocalDB;
- (void)dealloc;

@end

