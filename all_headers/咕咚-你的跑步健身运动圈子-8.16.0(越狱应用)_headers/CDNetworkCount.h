//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface CDNetworkCount : NSObject
{
    _Bool _countEnable;
    NSMutableDictionary *_dicFlow;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *dicFlow; // @synthesize dicFlow=_dicFlow;
@property(nonatomic) _Bool countEnable; // @synthesize countEnable=_countEnable;
- (void).cxx_destruct;
- (id)getResult;
- (void)getFlowForDomin:(id)arg1 withSide:(long long)arg2 withFlow:(unsigned long long)arg3;
- (id)init;

@end

