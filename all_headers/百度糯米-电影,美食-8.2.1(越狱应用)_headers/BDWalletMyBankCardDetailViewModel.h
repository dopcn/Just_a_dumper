//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BDWalletCardInfo, BaiduWalletPayUnBindCardRequest, NSArray, NSString;
@protocol BDWalletMyBankCardDetailViewModelDelegate;

@interface BDWalletMyBankCardDetailViewModel : NSObject
{
    _Bool _unbund_card_enabled;
    BDWalletCardInfo *_bindCard;
    NSArray *_bindArray;
    NSString *_token;
    NSString *_unbund_card_desc;
    id <BDWalletMyBankCardDetailViewModelDelegate> _delegate;
    NSString *_smscode;
    BaiduWalletPayUnBindCardRequest *_unBindReq;
}

@property(retain, nonatomic) BaiduWalletPayUnBindCardRequest *unBindReq; // @synthesize unBindReq=_unBindReq;
@property(copy, nonatomic) NSString *smscode; // @synthesize smscode=_smscode;
@property(nonatomic) __weak id <BDWalletMyBankCardDetailViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *unbund_card_desc; // @synthesize unbund_card_desc=_unbund_card_desc;
@property(nonatomic) _Bool unbund_card_enabled; // @synthesize unbund_card_enabled=_unbund_card_enabled;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSArray *bindArray; // @synthesize bindArray=_bindArray;
@property(retain, nonatomic) BDWalletCardInfo *bindCard; // @synthesize bindCard=_bindCard;
- (void).cxx_destruct;
- (void)cancelUnBindRequest;
- (void)unBindCard:(id)arg1 SmsCode:(id)arg2 WithBlock:(CDUnknownBlockType)arg3;
- (void)verPassword:(CDUnknownBlockType)arg1;
- (_Bool)isVerifySMS;
- (id)init;

@end

