//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VSEasyAPIRequestParameter.h"

@class NSString;
@protocol Optional;

@interface VSReturnGoodsCancelRequest : VSEasyAPIRequestParameter
{
    NSString<Optional> *_order_sn;
    NSString<Optional> *_op_tag;
}

@property(copy, nonatomic) NSString<Optional> *op_tag; // @synthesize op_tag=_op_tag;
@property(copy, nonatomic) NSString<Optional> *order_sn; // @synthesize order_sn=_order_sn;
- (void).cxx_destruct;

@end

