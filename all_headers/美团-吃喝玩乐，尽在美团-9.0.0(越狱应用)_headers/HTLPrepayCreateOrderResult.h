//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

#import "HTLCreateOrderResult-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface HTLPrepayCreateOrderResult : SAKDomainObject <HTLCreateOrderResult>
{
    _Bool _isPayed;
    _Bool _needPrompt;
    NSString *_payToken;
    NSString *_tradeFlowing;
    NSNumber *_orderID;
    NSArray *_failMagicCards;
    NSString *_message;
    NSString *_orderListURLString;
    NSArray *_failActiveIdList;
    long long _continueButtonAction;
    NSString *_continueButtonText;
    long long _backButtonAction;
    NSString *_backButtonText;
    NSString *_promptMessage;
    NSString *_promptTitle;
}

+ (id)predicateDictionary;
@property(retain, nonatomic) NSString *promptTitle; // @synthesize promptTitle=_promptTitle;
@property(retain, nonatomic) NSString *promptMessage; // @synthesize promptMessage=_promptMessage;
@property(retain, nonatomic) NSString *backButtonText; // @synthesize backButtonText=_backButtonText;
@property(nonatomic) long long backButtonAction; // @synthesize backButtonAction=_backButtonAction;
@property(retain, nonatomic) NSString *continueButtonText; // @synthesize continueButtonText=_continueButtonText;
@property(nonatomic) long long continueButtonAction; // @synthesize continueButtonAction=_continueButtonAction;
@property(retain, nonatomic) NSArray *failActiveIdList; // @synthesize failActiveIdList=_failActiveIdList;
@property(retain, nonatomic) NSString *orderListURLString; // @synthesize orderListURLString=_orderListURLString;
@property(nonatomic) _Bool needPrompt; // @synthesize needPrompt=_needPrompt;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSArray *failMagicCards; // @synthesize failMagicCards=_failMagicCards;
@property(nonatomic) _Bool isPayed; // @synthesize isPayed=_isPayed;
@property(retain, nonatomic) NSNumber *orderID; // @synthesize orderID=_orderID;
@property(copy, nonatomic) NSString *tradeFlowing; // @synthesize tradeFlowing=_tradeFlowing;
@property(copy, nonatomic) NSString *payToken; // @synthesize payToken=_payToken;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

