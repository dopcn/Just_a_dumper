//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NLBaseMessageViewCell.h"

@class NLCouponMessageView;

@interface NLLinkMessageViewCell : NLBaseMessageViewCell
{
    NLCouponMessageView *_couponView;
}

+ (id)messageForReceiveNewMessageObject:(struct NSManagedObject *)arg1;
+ (id)durationMessageTextDataWithRawString:(id)arg1 direction:(long long)arg2 textDataStore:(id)arg3;
+ (id)couponMessageTextDataWithRawString:(id)arg1 direction:(long long)arg2 textDataStore:(id)arg3;
+ (struct NLMessageCellSizeResult)cellSizeWithMessageContext:(id)arg1 messageObject:(struct NSManagedObject *)arg2 width:(double)arg3;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didChangeMessageObject:(struct NSManagedObject *)arg1;
- (id)contentViewForMessage;
- (void)prepareForReuse;
- (void)initContentView;

@end

