//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, SAKMerchant;

@interface HTLPurchaseGate : NSObject
{
    int _transitionStyle;
    long long _selectedPOIID;
    long long _cityID;
    NSDate *_checkInDate;
    NSDate *_checkOutDate;
    SAKMerchant *_merchant;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _customTransitionCallback;
    CDUnknownBlockType _customTransitionDismiss;
    long long _poiID;
}

+ (id)doTransferFromSourceViewController:(id)arg1 paramters:(id)arg2 shouldTransfer:(_Bool)arg3;
@property(nonatomic) long long poiID; // @synthesize poiID=_poiID;
@property(nonatomic) int transitionStyle; // @synthesize transitionStyle=_transitionStyle;
@property(copy, nonatomic) CDUnknownBlockType customTransitionDismiss; // @synthesize customTransitionDismiss=_customTransitionDismiss;
@property(copy, nonatomic) CDUnknownBlockType customTransitionCallback; // @synthesize customTransitionCallback=_customTransitionCallback;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) SAKMerchant *merchant; // @synthesize merchant=_merchant;
@property(retain, nonatomic) NSDate *checkOutDate; // @synthesize checkOutDate=_checkOutDate;
@property(retain, nonatomic) NSDate *checkInDate; // @synthesize checkInDate=_checkInDate;
@property(nonatomic) long long cityID; // @synthesize cityID=_cityID;
@property(nonatomic) long long selectedPOIID; // @synthesize selectedPOIID=_selectedPOIID;
- (void).cxx_destruct;
- (id)toParameters;
- (void)startPurchaseWithNewDeal:(id)arg1 invoice:(id)arg2 choosedPriceCalendar:(id)arg3 sourceViewController:(id)arg4;
- (id)init;

@end

