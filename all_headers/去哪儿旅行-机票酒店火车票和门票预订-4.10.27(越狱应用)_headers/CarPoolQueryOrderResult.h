//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CarPoolSearchNetResult.h"

@class NSMutableArray, NSNumber;

@interface CarPoolQueryOrderResult : CarPoolSearchNetResult
{
    NSMutableArray *_carpoolOrderResponseList__Array__CarPoolOrderResponse;
    NSNumber *_curPageNo;
    NSNumber *_more;
}

@property(retain, nonatomic) NSNumber *more; // @synthesize more=_more;
@property(retain, nonatomic) NSNumber *curPageNo; // @synthesize curPageNo=_curPageNo;
@property(retain, nonatomic, getter=carpoolOrderResponseList, setter=setCarpoolOrderResponseList:) NSMutableArray *carpoolOrderResponseList__Array__CarPoolOrderResponse; // @synthesize carpoolOrderResponseList__Array__CarPoolOrderResponse=_carpoolOrderResponseList__Array__CarPoolOrderResponse;
- (void).cxx_destruct;

@end

