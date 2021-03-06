//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class AliDetailChannelModel, NSArray, NSString;
@protocol AliDetailConsumerProtectionItemModel;

@interface AliDetailConsumerProtectionModel : TBJSONModel
{
    _Bool _isNeedPassValueToSubView;
    AliDetailChannelModel *_channel;
    NSString *_strength;
    NSString *_passValue;
    NSString *_params;
    NSArray<AliDetailConsumerProtectionItemModel> *_items;
}

@property(retain, nonatomic) NSArray<AliDetailConsumerProtectionItemModel> *items; // @synthesize items=_items;
@property(retain, nonatomic) NSString *params; // @synthesize params=_params;
@property(nonatomic) _Bool isNeedPassValueToSubView; // @synthesize isNeedPassValueToSubView=_isNeedPassValueToSubView;
@property(copy, nonatomic) NSString *passValue; // @synthesize passValue=_passValue;
@property(copy, nonatomic) NSString *strength; // @synthesize strength=_strength;
@property(retain, nonatomic) AliDetailChannelModel *channel; // @synthesize channel=_channel;
- (void).cxx_destruct;

@end

