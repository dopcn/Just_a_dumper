//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VSResponse.h"

@class NSMutableArray;

@interface VSQueryIntegralListResponse : VSResponse
{
    NSMutableArray *_integralLists;
}

@property(retain, nonatomic) NSMutableArray *integralLists; // @synthesize integralLists=_integralLists;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithData:(id)arg1 format:(int)arg2;

@end

