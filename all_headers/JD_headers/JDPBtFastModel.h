//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBModel.h"

@class JDPAccountInfoModel, NSArray, NSString;

@interface JDPBtFastModel : CBModel
{
    _Bool _needCheckPwd;
    NSString *_nameMask;
    NSString *_certNumMask;
    NSString *_phoneMask;
    NSString *_commendPayWay;
    NSString *_protocolURL;
    NSString *_defaultBankCardId;
    NSArray *_bankCardList;
    JDPAccountInfoModel *_accountInfoModel;
    NSString *_bizMethod;
    NSString *_token;
}

@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) _Bool needCheckPwd; // @synthesize needCheckPwd=_needCheckPwd;
@property(copy, nonatomic) NSString *bizMethod; // @synthesize bizMethod=_bizMethod;
@property(retain, nonatomic) JDPAccountInfoModel *accountInfoModel; // @synthesize accountInfoModel=_accountInfoModel;
@property(retain, nonatomic) NSArray *bankCardList; // @synthesize bankCardList=_bankCardList;
@property(copy, nonatomic) NSString *defaultBankCardId; // @synthesize defaultBankCardId=_defaultBankCardId;
@property(copy, nonatomic) NSString *protocolURL; // @synthesize protocolURL=_protocolURL;
@property(copy, nonatomic) NSString *commendPayWay; // @synthesize commendPayWay=_commendPayWay;
@property(copy, nonatomic) NSString *phoneMask; // @synthesize phoneMask=_phoneMask;
@property(copy, nonatomic) NSString *certNumMask; // @synthesize certNumMask=_certNumMask;
@property(copy, nonatomic) NSString *nameMask; // @synthesize nameMask=_nameMask;
- (void).cxx_destruct;
- (id)defaultBankCardInfo;

@end

