//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SEPaySelectCom.h"

@class NSArray, TRWLEnterpricePayment;

@interface SSCarEPaySelectUnit : SEPaySelectCom
{
    long long _selected;
    NSArray *_testArray;
}

+ (id)iconWithTag:(unsigned long long)arg1;
@property(retain, nonatomic) NSArray *testArray; // @synthesize testArray=_testArray;
@property(nonatomic) long long selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (id)icon;
- (id)iconUrl;
@property(readonly, nonatomic) TRWLEnterpricePayment *currentMode;

@end

