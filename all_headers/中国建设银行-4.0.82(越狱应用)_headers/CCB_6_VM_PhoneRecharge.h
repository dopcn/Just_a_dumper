//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBBaseChanelModel.h"

@class NSArray, NSMutableDictionary, NSString;
@protocol CCBViewModelDelegate;

@interface CCB_6_VM_PhoneRecharge : CCBBaseChanelModel
{
    NSString *_displayNumStr;
    NSMutableDictionary *_billInformation;
    id <CCBViewModelDelegate> _delegate;
    NSArray *_cardInfos;
}

@property(retain, nonatomic) NSArray *cardInfos; // @synthesize cardInfos=_cardInfos;
@property(nonatomic) __weak id <CCBViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *billInformation; // @synthesize billInformation=_billInformation;
@property(retain, nonatomic) NSString *displayNumStr; // @synthesize displayNumStr=_displayNumStr;
- (void).cxx_destruct;
- (id)dealCardNum:(id)arg1;
- (void)AN6001WithBackBlock:(CDUnknownBlockType)arg1;
- (void)sendMessageCodeWithParamenter:(id)arg1 PaymentMethod:(int)arg2 PaymentItemType:(int)arg3 PaymentType:(int)arg4 MessageTime:(long long)arg5 BackBlock:(CDUnknownBlockType)arg6;
- (void)NY0005WithBackBlock:(CDUnknownBlockType)arg1;
- (void)A26204WithParamenter:(id)arg1 PaymentItemType:(int)arg2 Block:(CDUnknownBlockType)arg3;
- (void)AN6100WithParamenter:(id)arg1 PaymentMethod:(int)arg2 PaymentItemType:(int)arg3 PaymentType:(int)arg4 BackBlock:(CDUnknownBlockType)arg5;
- (void)NY0003WithAccNoString:(id)arg1 BackBlock:(CDUnknownBlockType)arg2;
- (void)NY0001WithPaymentItemType:(int)arg1 BackBlock:(CDUnknownBlockType)arg2;
- (void)JF1029WithParamenter:(id)arg1 BackBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

