//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCardSpecificData.h"

@class NSString, SCardBookDescriptionItem, SCardEnterGardenDescriptionItem, SCardFeeDescriptionItem, SCardRefundDescriptionItem, SCardUsingDescriptionItem;

@interface SBookingInfoCardData : SCardSpecificData
{
    NSString *_title;
    SCardBookDescriptionItem *_bookDescription;
    SCardEnterGardenDescriptionItem *_enterGardenDescription;
    SCardRefundDescriptionItem *_refundDescription;
    SCardFeeDescriptionItem *_feeDescription;
    SCardUsingDescriptionItem *_usingDescription;
}

@property(retain, nonatomic) SCardUsingDescriptionItem *usingDescription; // @synthesize usingDescription=_usingDescription;
@property(retain, nonatomic) SCardFeeDescriptionItem *feeDescription; // @synthesize feeDescription=_feeDescription;
@property(retain, nonatomic) SCardRefundDescriptionItem *refundDescription; // @synthesize refundDescription=_refundDescription;
@property(retain, nonatomic) SCardEnterGardenDescriptionItem *enterGardenDescription; // @synthesize enterGardenDescription=_enterGardenDescription;
@property(retain, nonatomic) SCardBookDescriptionItem *bookDescription; // @synthesize bookDescription=_bookDescription;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)createGroupedItemList:(id)arg1;
- (id)init;

@end

